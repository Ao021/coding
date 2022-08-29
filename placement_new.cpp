#include <iostream>
using namespace std;
 
class B{
public:
    B(){cout<<"B's constructor"<<endl;}
    ~B(){cout<<"B's destructor"<<endl;}
    void SetNum(int n){num = n;}
    int GetNum(){return num;}
private:
    int num;
    long int test;
};
 
int main(){
	char* mem = new char[10 * sizeof(B)];
	cout << (void*)mem << endl;
	B *p = new(mem)B;
    cout << p << endl;
    p->SetNum(10);
	cout << p->GetNum() << endl;
	p->~B();
	delete[]mem;
	getchar();
}