#include <iostream>
using namespace std;

class test{
    int a;
    public:
        void disp(){
            cout<<"This is display";
        }
        void show();
        
}t2,t3;     //object initialization within class

void test::show(){
    cout<<"This is show()"
}

int main()
{
    test t1;
    t1.disp();
    t2.show();
    
    return 0;
}