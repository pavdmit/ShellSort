//
//  main.cpp
//  ShellSort
//
//  Created by Pavel Dmitriev on 26.04.2021.
//

#include "tests.h"
#include <vector>
#include <deque>
#include <list>
#include <random>
#include <ctime>
#include <iostream>
#include <fstream>
#include "shell_sort.h"
#include <array>


int main(){
    std::mt19937 gen(time(0));

    //1
    std::vector<double> double_vect;
    double_vect.reserve(300);
    std::uniform_real_distribution<> dr(10.0, 160.0);
    //1 5 19 41 109 209 505 929 2161 3905
    int steps_by_sedgwick[6] = {1,5,19,41,109,209};
    std::cout<<"First 10 elements in unodered double vector: ";
    for (int i = 0; i < 300; ++i) {
        double_vect.push_back(dr(gen));
    }
    for (int i=0;i<10;i++) {
        std::cout<<double_vect[i]<<" ";
    }
    ShellSort(double_vect.begin(), double_vect.end(),steps_by_sedgwick,6,std::less<double>());
    std::cout<<std::endl<<"First 10 elements in odered double vector: ";
    for (int i=0;i<10;i++) {
        std::cout<<double_vect[i]<<" ";
    }
    
    
    
    //2
    std::deque<int> integer_deque;
    std::uniform_int_distribution<> di(0, 200);
    int steps1[4] = {1,3,15,255};
    std::cout<<std::endl<<"First 10 elements in unodered integer deque: ";
    for (int i = 0; i < 300; ++i) {
        integer_deque.push_back(dr(gen));
    }
    for (int i=0;i<10;i++) {
        std::cout<<integer_deque[i]<<" ";
    }
    ShellSort(integer_deque.begin(), integer_deque.end(),steps1,4,std::greater<int>());
    std::cout<<std::endl<<"First 10 elements in odered double vector: ";
    for (int i=0;i<10;i++) {
        std::cout<<integer_deque[i]<<" ";
    }
    
    
    //3
    std::list<double> double_list;
    std::uniform_int_distribution<> lr(13.0, 156.3);
    int steps2[7] = {1,3,9,12,27,36,54};
    for (int i = 0; i < 120; ++i)
        double_list.push_back(dr(gen));
    std::cout<<std::endl<<"First 10 elements in unodered double list: ";
    auto beg = double_list.begin();
    for (int i=0;i<10;i++) {
        std::cout<<*beg<<" ";
        std::advance(beg,1);
    }
    ShellSort(double_list.begin(), double_list.end(),steps2,7,std::greater<double>());
    std::cout<<std::endl<<"First 10 elements in odered double list: ";
    beg = double_list.begin();
    for (int i=0;i<10;i++) {
        std::cout<<*beg<<" ";
        std::advance(beg,1);
    }
 
    //4
    std::array<Straight_Cylinder,15> cylinder_array;
    int steps_for_cylinder_objects_in_array[3] = {1,4,13};
    std::ifstream fin("cylinder_input.txt");
    std::cout<<std::endl<<"Elements in unodered cylinder_array: ";
    for (int i=0;i<15;i++) {
        Straight_Cylinder in;
        fin>>in;
        std::cout<<in<<" ";
        cylinder_array[i]=in;
    }
    ShellSort(cylinder_array.begin(), cylinder_array.end(),steps_for_cylinder_objects_in_array,3,std::greater<Straight_Cylinder>());
    std::cout<<std::endl<<"Elements in odered cylinder_array: ";
    for (auto elem:cylinder_array) {
        std::cout<<elem<<" ";
    }
    fin.close();
    std::cout<<std::endl;
    
    
    
    
    
    
    //tests start
    RunAll();
    return 0;
}
