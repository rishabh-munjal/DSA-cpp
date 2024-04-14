//cpp program to fiund the number of inversions

#include <iostream>
#include <vector>
using namespace std;

int CountandMerge(vector <int> a , int l , int mid , int r){

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a1[n1];
    int a2[n2];

    for(int i = 0 ; i <n1 ; i++){
        a1[i] = a[l+i];
    }

    for (int i = 0; i < n2; i++) {
        a2[i] = a[mid + 1 + i];
    }

    int res = 0;
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            a[k] = a1[i];
            k++; i++;
        }
        else {
            a[k] = a2[j];
            j++;
            res = res + (n1 - i);
        }

        k++; 
    }

    while (i < n1) {
        a[k] = a1[i];
        k++; i++;
    }

    while (j < n2) {
        a[k] = a2[j];
        k++; j++;
    }


    return res;

}


int CountInv(vector <int> a , int l , int r){

    int res = 0;

    if(l < r){
        int mid = (l + r) / 2;
        res += CountInv(a , l ,mid);
        res += CountInv(a , mid+ 1, r);
        res += CountandMerge(a,l,mid,r);
    }

    return res;

}

int main()
{
    
    vector <int> a = {2 , 4 ,  1 , 3 , 5};

    cout<<CountInv(a , 0 , 4);

    return 0;
}