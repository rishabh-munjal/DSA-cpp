//Transpose of  a matrix

#include <iostream>
#include <vector>
using namespace std;

void Transpose(vector <vector<int>> arr){

    int r = arr.size(); 
    int c = arr[0].size();

    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            cout<<arr[j][i]<<" ";
        }

        cout<<endl;
    }

    //Efficient --> IN PLACE
    //**based on the idea -> Diagnol is same / others swaps in a patter

    // for(int i = 0 ; i < r ; i ++){
    //     for(int j = i+ 1 ;j < r ; j ++ ){
    //         swap(arr[i][j] , arr[j][i]);
    //     }
    // }



}

int main()
{

    vector <vector<int>> arr =  {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Transpose(arr);

    
    return 0;
}