//C++ program to find intesection between two sorted array

#include <iostream>
#include <vector>
using namespace std;

void intersection(vector <int> a ,  vector <int> b){

    int i=0;
    int j=0;

    while(i<a.size() && j<b.size()){

        if(i>0 && a[i]==a[i-1]){
            i++;                                            //if same elements we skip them
            continue;
        }

        if(a[i] < b[j]){
            i++;                                            //these 3 condiotionms check if they are common or less 
                                                        //using the idea that both arraya are sorted
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
int main(){
    vector <int> a = {1 , 2 ,3 ,4 ,5};
    vector <int> b = {3,4};

    intersection(a , b);
    return 0;
}