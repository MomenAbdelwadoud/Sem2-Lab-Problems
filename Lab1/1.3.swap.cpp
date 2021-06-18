#include <iostream>
using namespace std;

int num1,num2;

void swap(int &num1,int &num2){
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter First Number: ";cin>>num1;
    cout<<"Enter Second Number: ";cin>>num2;
    swap(num1,num2);
    cout<<num1<<endl<<num2;
    return 0;
}
