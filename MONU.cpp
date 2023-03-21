#include<iostream>
using namespace std;
int swap(int a,int b)
{
    int temp; 
    temp = a;
    a = b;
    b = temp;
    cout<<a<<endl<<b;
    return 0;
}
int main()
{
    int a = 10;
    int b = 15;

    swap(a,b);
    cout << endl<< "Hello World!!" ;
    return 0;
}
