//we are given an unsorted array and we need to return k largest elements

#include<bits/stdc++.h>
using namespace std;

/*
EFFICIENT SOLUTION
the efficient solution includes 
    i) Build a min heap for first k items
    ii) traverse from k + 1
        ii.a) compare the current element , if smaller than top ignore it
        ii.b) else remove the top element and insert the current in the heap
    iii) print the heap
*/  