#!/bin/bash
# Author: weikun
# Created Time: Thu 21 Mar 2019 11:47:54 AM CST
cp -rf Object1.h Object.h
g++ -c Object.cpp

cp -rf Object2.h Object.h
g++ -c main.cpp

g++ main.o Object.o

