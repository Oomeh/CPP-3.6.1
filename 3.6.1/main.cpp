/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on September 15, 2017, 1:20 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */


void increment(int &variable)
{
    variable++;
}

void increment(int &variable, int expression)
{
    variable = variable + expression;
}


int main(int argc, char** argv) {
    int var = 0;
    for(int i = 0; i < 10; i++)        
    if(i % 2)
        increment(var);
    else
        increment(var, i);
    cout<< var<< endl;
    return 0;
}




