#include <iostream>
#include <vector>
#include <omp.h>

int main() {
    std::vector<int> vec_100(100);

    #pragma omp parallel for
    for (int i = 0; i < 100; ++i) {
        vec_100[i] = (i + 1) * (i + 1);
    }

    // 打印结果
    for (int i = 0; i < 100; ++i) {
        std::cout << vec_100[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
