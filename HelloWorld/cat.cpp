#include "cat.h"

cat::cat(double weight_input, double height_input, int fish_num){
    weight = weight_input;
    height = height_input;
    fish = new int[fish_num];
}

void cat::print(){
    cout << "cat's weight: " << weight << " height: " << height << endl;
}