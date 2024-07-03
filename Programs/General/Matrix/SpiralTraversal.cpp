#include <iostream>
#include <vector>
using namespace std;

void Boundry(vector <vector<int>> arr){
    int r  = arr.size();
    int c = arr[0].size();

    int top = 0 ;
    int left = 0;
    int bottom = r-1;
    int right = c-1;

    while(top <= bottom && left<= right){
        for(int i = left ; i < right ; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        // .
        // .
        // .
        // .
        // .
        // .
        
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