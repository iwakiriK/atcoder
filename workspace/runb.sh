#!/bin/bash
g++ -o out b.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
