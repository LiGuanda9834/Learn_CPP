#include <iostream>
#include <stdio.h>
#include <omp.h>
#include <unistd.h>

#define N 50

using namespace std;

int main(int argc, char* argv[]){
    /*
    // ------- Test #pragma omp parallel for ------
    int i;
    cout << "HelloWorld" << endl;

    #pragma omp parallel for
        for(int i = 0; i < N; ++i){
            printf ("Hello World!  Thread: %d, i: %d\n",
              omp_get_thread_num(), i);
        }
    
    */

    // ------ Test shared(x) and private(x) -------
    int sum = 0;
    #pragma omp parallel num_threads(4) shared(sum)
    {
        int tid = omp_get_thread_num();
        #pragma omp single nowait
        {
            cout << "thread is " << tid << endl;
            sleep(20);
        }
        #pragma omp for 
            for(int i = 0; i < 8; i++){
                sum += i;
                sleep(i);
                printf("Thread %d : add %d for the sum\n", tid, i);
            }
    }
    cout << "sum is " << sum << endl;
    return 0;
}