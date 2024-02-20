
#include <iostream>
#include <vector>
using namespace std;

int FindStep(vector <int> height){
    int count = 0;
    int step = 0;

    for(int i = 0; i < height.size() - 1 ; i++){
        if(height[i] < height[i+1]){
            count++;
        }
        else{
            step = max(count , step);
            count = 0;
        }
    }

    return step;
}

int main(){
    vector <int> height = {1 , 2 ,2 , 3 , 2};

    cout<<FindStep(height);

    return 0;
}