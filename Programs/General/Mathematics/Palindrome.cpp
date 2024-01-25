//Check if a number is palindrome
#include <iostream>
#include <cmath>
using namespace std;

bool palindrome(int n){
    
    int rev = 0;
    int temp = n;

    while(temp!=0){

        int last_digit = temp%10;
        rev = rev * 10 + last_digit;
        temp = temp / 10 ;
    }

    return(rev==n);

}

int main()
{
    int n;
    cout<<"Enter the number n";
    cin>>n;

    if(palindrome(n)==0){
        cout<<"False";
    }
    if(palindrome(n)==1){
        cout<<"True";
    }
    return 0;
}