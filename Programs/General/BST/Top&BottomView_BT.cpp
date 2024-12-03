#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;

    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};

/*
  i) Create a  map using level order traversal (queue)
  ii) print the values in the mp
  iii) insert the value if map is empty for that else no
  iv ) for the bottom view keep on inserting till the queue ends to achieve the bottom view

*/



