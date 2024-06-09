#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class cat{
public:
// 变量 variable
    double weight;
    double height;

    int* fish; 
public:
// 构造函数 constructor
    cat(double weight_input, double height_input, int fish_num);
// 析构函数 destructor
    ~cat(){
        delete[] fish;
    }

// 函数 function
    void print();
};

bool campare_cat(cat cat1, cat cat2){
    return (cat1.height / cat1.weight / cat1.weight) < (cat2.height / cat2.weight / cat2.weight);
}



class zoo{
public:
    vector<cat> cats;
    zoo(int cat_num){
        vector<cat>(cat_num);
    }
    void add_cat(int new_cat_num){
        for(int i = 0; i < new_cat_num; i++){
            double temp_weight;
            double temp_height;
            cin >> temp_weight >> temp_height;
            cat temp_cat(temp_weight, temp_height, 5);
            cats.push_back(temp_cat);
        }
    }
    int count_cat(){
        return cats.size();
    }

    void sort_cat(){
        sort(cats.begin(), cats.end(), campare_cat);
    }



    ~zoo();
    void print();
};



