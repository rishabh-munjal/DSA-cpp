#include <iostream>
#include <vector>
using namespace std;

void uni(vector <int> a , vector <int> b){

  int i = 0 ;
  int j = 0 ;

  while(i<a.size() && j<b.size()){

    if(i>0 && a[i] == a[i-1]){
        i++;
        continue;
    }

    if(j>0 && b[j] == b[j-1]){
        j++;
        continue;
    }



    if(a[i] < b[j]){
      cout<<a[i]<<" ";
      i++;
    }
    else if(a[i] > b[j]){
      cout<<b[j]<<" ";
      j++;
    }
    else{
      cout<<a[i]<<" ";
      i++;
      j++;
    }
  }

  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  while(j < b.size()){
    cout<<b[j]<<" ";
    j++;
  }


}

int main()
{
  vector <int> a = {1 , 2 , 2 , 3 , 4 , 5};
  vector <int> b = {4 , 5 , 6 , 7};

  uni(a , b);
  return 0;
}
