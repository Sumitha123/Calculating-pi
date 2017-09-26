//
//  cal_pi.cpp
//  Calculating_pi
//
//  Created by Sumitha on 10/13/16.
//  Copyright © 2016 Sumitha. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//Function Prototype for dart_throw
int dart_throw(int);

//Function dart_throw to simulate dart throws
int dart_throw(int x)
{
    int counter = 0;
    for(int i = 1; i <=x;i++)
    {
        double d;
        double r_x = (double)rand()/RAND_MAX;
        double r_y = (double)rand()/RAND_MAX;
        d = sqrt((r_x*r_x)+(r_y*r_y));
        if(d<=1)
            counter++;
    }
    return counter;

}

int main() {

double pi;
int totalDartThrows;

//Set the seed
srand ((unsigned int)time(0));
    
//Get the total number of dart throws as input
cout << "Enter the total number of dart throws : " ;
cin >> totalDartThrows;

//Simulating dart throw by calling dart throw function
int dartInQuadrant = dart_throw(totalDartThrows);

//Calculating pi
pi = (double)4*dartInQuadrant/totalDartThrows;
cout << "pi is calculated as " << pi << endl;
    
return 0;
}




