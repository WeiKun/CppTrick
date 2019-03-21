// File Name: Object.cpp
// Author: weikun
// Created Time: Thu 21 Mar 2019 11:35:27 AM CST
#include "Object.h"
#include <iostream>
using namespace std;

Object Object::instance;

void Object::show()
{
    cout << member << endl;
}
