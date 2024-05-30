#include <iostream>
#include <vector>
using namespace std;

void Boundry(vector <vector<int>> arr){
    int r  = arr.size();
    int c = arr[0].size();


    if(r==1){
        for(int i = 0 ; i < c; i++){
            cout<<arr[0][i]<<" ";

        }
    }

    else if(c==1){
        for(int i = 0 ; i < r ; i ++){
            cout<<arr[i][0]<<" ";
        }
    }

    else{
        
    for(int i =0 ; i < c ; i++){
        cout<<arr[0][i]<<" ";
    }

    for(int i= 1 ; i < r ; i++){
        cout<<arr[i][c-1]<<" ";
    }


    for(int i = c - 1 ; i >= 0 ; i--){
        cout<<arr[r-1][i]<<" ";
    }


    for(int i = r - 1 ; i > 0 ; i--){
        cout<<arr[i][0]<<" ";
    }
    }

}

int main()
{
    vector <vector<int>> arr =  {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Boundry(arr);

    return 0;
}