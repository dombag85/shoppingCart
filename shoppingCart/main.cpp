//
//  main.cpp
//  shoppingCart
//
//  Created by Dominic Sanchez on 3/29/16.
//  Copyright © 2016 Dominic Sanchez. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void message()
{
    cout << "Welcome to Dombag's Store!" << endl;
}

float func(float x, float y)
{
    float price;
    float tax;
    float total;
    
    price = (x * y);
    tax = (0.06 * price);
    total = price + tax;
    
    return total;
}

int main()
{
    float z;
    int a;
    int b;
    
    message();
    cout << "Enter the quantity of CDs " << endl;
    cin >> a;
    cout << "Enter the price " << endl;
    cin >> b;
    
    z =func(a, b);
    cout << fixed;
    cout << setprecision(2);
    cout << "The cost of your two items is " << z << endl;
    return 0;
}

//Test case repository