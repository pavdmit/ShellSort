//
//  tests.cpp
//  ShellSort
//
//  Created by Pavel Dmitriev on 26.04.2021.
//

#include "test_runner.h"
#include "tests.h"
#include "shell_sort.h"
#include <vector>
#include <deque>
#include <list>
#include <algorithm>


void SortEmptyIntegerVector() {
    vector<int> input_vect = {};
    vector<int> output_vect = {};
    int steps[1] = {1};
    ShellSort(input_vect.begin(), input_vect.end(),steps,1,greater<int>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}

void SortIntegerVector1() {
    vector<int> input_vect = {5,2,19,6,21,0,-1,8,45};
    vector<int> output_vect = {5,2,19,6,21,0,-1,8,45};
    int steps[3] = {1,2,4};
    ShellSort(input_vect.begin(), input_vect.end(),steps,3,greater<int>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}

void SortIntegerVector2() {
    vector<int> input_vect = {12,67,34,23,78,21,2,4,7,3,2,12,45,22,34,9};
    vector<int> output_vect = {12,67,34,23,78,21,2,4,7,3,2,12,45,22,34,9};
    int steps[4] = {1,2,4,8};
    ShellSort(input_vect.begin(), input_vect.end(),steps,4,greater<int>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}

void SortIntegerVector3() {
    vector<int> input_vect = {3,6,1,4};
    vector<int> output_vect = {3,6,1,4};
    int steps[2] = {1,2};
    ShellSort(input_vect.begin(), input_vect.end(),steps,2,greater<int>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}


void SortEmptyDoubleVector() {
    vector<double> input_vect = {};
    vector<double> output_vect = {};
    int steps[1] = {1};
    ShellSort(input_vect.begin(), input_vect.end(),steps,1,greater<double>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}
void SortDoubleVector1() {
    vector<double> input_vect = {5.7,34.7,12,4.9,7.7,56.8,23.5,6.9};
    vector<double> output_vect = {5.7,34.7,12,4.9,7.7,56.8,23.5,6.9};
    int steps[3] = {1,2,4};
    ShellSort(input_vect.begin(), input_vect.end(),steps,3,greater<double>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}
void SortDoubleVector2() {
    vector<double> input_vect = {4.5,2.1,6.8,4.6,2.9,56.8,4.0,3.5,10.7,7.8,3.5,6.6,7.8,3.5};
    vector<double> output_vect = {4.5,2.1,6.8,4.6,2.9,56.8,4.0,3.5,10.7,7.8,3.5,6.6,7.8,3.5};
    int steps[4] = {1,2,4,8};
    ShellSort(input_vect.begin(), input_vect.end(),steps,4,greater<double>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}
void SortDoubleVector3() {
    vector<double> input_vect = {1.1};
    vector<double> output_vect = {1.1};
    int steps[1] = {1};
    ShellSort(input_vect.begin(), input_vect.end(),steps,1,greater<double>());
    sort(output_vect.begin(),output_vect.end());
    ASSERT_EQUAL(input_vect, output_vect);
}

void SortEmptyIntegerList() {
    list<int> input_list = {};
    list<int> output_list = {};
    int steps[1] = {1};
    ShellSort(input_list.begin(), input_list.end(),steps,1,greater<int>());
    output_list.sort();
    for (int i=1;i<input_list.size();i++) {
        list<int>::iterator input_list_it = input_list.begin();
        list<int>::iterator output_list_it = output_list.begin();
        advance(input_list_it,1);
        advance(output_list_it,1);
        ASSERT_EQUAL(*input_list_it, *output_list_it);
    }
}

void SortIntegerList1() {
    list<int> input_list = {5,2,19,6,21,0,-1,8,45};
    list<int> output_list = {5,2,19,6,21,0,-1,8,45};
    int steps[3] = {1,2,4};
    ShellSort(input_list.begin(), input_list.end(),steps,3,greater<int>());
    output_list.sort();
    for (int i=1;i<input_list.size();i++) {
        list<int>::iterator input_list_it = input_list.begin();
        list<int>::iterator output_list_it = output_list.begin();
        advance(input_list_it,1);
        advance(output_list_it,1);
        ASSERT_EQUAL(*input_list_it, *output_list_it);
    }
}

void SortIntegerList2() {
    list<int> input_list = {12,67,34,23,78,21,2,4,7,3,2,12,45,22,34,9};
    list<int> output_list = {12,67,34,23,78,21,2,4,7,3,2,12,45,22,34,9};
    int steps[4] = {1,2,4,8};
    ShellSort(input_list.begin(), input_list.end(),steps,4,greater<int>());
    output_list.sort();
    for (int i=1;i<input_list.size();i++) {
        list<int>::iterator input_list_it = input_list.begin();
        list<int>::iterator output_list_it = output_list.begin();
        advance(input_list_it,1);
        advance(output_list_it,1);
        ASSERT_EQUAL(*input_list_it, *output_list_it);
    }
}

void SortIntegerList3() {
    list<int> input_list = {3,6,1,4};
    list<int> output_list = {3,6,1,4};
    int steps[2] = {1,2};
    ShellSort(input_list.begin(), input_list.end(),steps,2,greater<int>());
    output_list.sort();
    for (int i=1;i<input_list.size();i++) {
        list<int>::iterator input_list_it = input_list.begin();
        list<int>::iterator output_list_it = output_list.begin();
        advance(input_list_it,1);
        advance(output_list_it,1);
        ASSERT_EQUAL(*input_list_it, *output_list_it);
    }
}


void SortEmptyDoubleDeque() {
    deque<double> input_deque = {};
    deque<double> output_deque = {};
    int steps[1] = {1};
    ShellSort(input_deque.begin(), input_deque.end(),steps,1,greater<double>());
    sort(output_deque.begin(),output_deque.end());
    for (int i=1;i<input_deque.size();i++)
        ASSERT_EQUAL(input_deque[i], output_deque[i]);
}
void SortDoubleDeque1() {
    deque<double> input_deque = {5.7,34.7,12,4.9,7.7,56.8,23.5,6.9};
    deque<double> output_deque = {5.7,34.7,12,4.9,7.7,56.8,23.5,6.9};
    int steps[3] = {1,2,4};
    ShellSort(input_deque.begin(), input_deque.end(),steps,3,greater<double>());
    sort(output_deque.begin(),output_deque.end());
    for (int i=1;i<input_deque.size();i++)
        ASSERT_EQUAL(input_deque[i], output_deque[i]);
}
void SortDoubleDeque2() {
    deque<double> input_deque = {4.5,2.1,6.8,4.6,2.9,56.8,4.0,3.5,10.7,7.8,3.5,6.6,7.8,3.5};
    deque<double> output_deque = {4.5,2.1,6.8,4.6,2.9,56.8,4.0,3.5,10.7,7.8,3.5,6.6,7.8,3.5};
    int steps[4] = {1,2,4,8};
    ShellSort(input_deque.begin(), input_deque.end(),steps,4,greater<double>());
    sort(output_deque.begin(),output_deque.end());
    for (int i=1;i<input_deque.size();i++)
        ASSERT_EQUAL(input_deque[i], output_deque[i]);
}
void SortDoubleDeque3() {
    deque<double> input_deque = {1.1};
    deque<double> output_deque = {1.1};
    int steps[1] = {1};
    ShellSort(input_deque.begin(), input_deque.end(),steps,1,greater<double>());
    sort(output_deque.begin(),output_deque.end());
    for (int i=1;i<input_deque.size();i++)
        ASSERT_EQUAL(input_deque[i], output_deque[i]);
}


void RunAll() {
    TestRunner tests;
    std::cout<<endl;
    std::cout<<endl;
    std::cout<<"Starting tests..."<<std::endl;
    std::cout<<endl;
    RUN_TEST(tests,SortEmptyIntegerVector);
    RUN_TEST(tests,SortIntegerVector1);
    RUN_TEST(tests,SortIntegerVector2);
    RUN_TEST(tests,SortIntegerVector3);
    RUN_TEST(tests,SortEmptyDoubleVector);
    RUN_TEST(tests,SortDoubleVector1);
    RUN_TEST(tests,SortDoubleVector2);
    RUN_TEST(tests,SortDoubleVector3);
    RUN_TEST(tests,SortEmptyIntegerList);
    RUN_TEST(tests,SortIntegerList1);
    RUN_TEST(tests,SortIntegerList2);
    RUN_TEST(tests,SortIntegerList3);
    RUN_TEST(tests,SortEmptyDoubleDeque);
    RUN_TEST(tests,SortDoubleDeque1);
    RUN_TEST(tests,SortDoubleDeque2);
    RUN_TEST(tests,SortDoubleDeque3);
}
