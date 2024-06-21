//CPP program to rotate a matrix by 90 deg

#include <iostream>
#include <vector>
using namespace std;

void Rotate(vector<vector<int>> arr){

    int r = arr.size();
    int c = arr[0].size();

    //This can be done by doing transpose and then reversing the individual colums

    for(int i = 0 ; i < r ; i++){
        for(int j = i + 1 ; j < c ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        int low = 0 , high = r - 1;

        while(low < high){
            swap(arr[low][i] , arr[high][i]);
            low++;
            high--;
            
        }
    }
}

int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Rotate(arr);
    
    return 0;
}