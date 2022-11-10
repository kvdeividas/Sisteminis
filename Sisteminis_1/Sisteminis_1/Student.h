#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#pragma once
#include <windows.h>
class Student {
    std::string name;
    std::string lastname;
    std::vector<int> grades;
    char a;
    int exam;
    double average;
    double median;
public:
    Student();
    ~Student();
    void input();
    void countAverage();
    void countMedian();
    void print(char x);
};