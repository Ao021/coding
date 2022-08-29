//nothing
#include <iostream>
using namespace std;

class A{
public:
    static int num;
    int a;
    ~A(){cout<<"delete"<<A::num++<<endl;}
};

int A::num = 0;

int main(){
    A* arr = new A[10];
    delete[] arr;
    return 0;
}