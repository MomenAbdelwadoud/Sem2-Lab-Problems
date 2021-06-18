#include <iostream>
using namespace std;

float addition(float n1,float n2){
    return n1 + n2;
}

float subtracttion(float n1,float n2){
    return n1 - n2;
}

float multiplication(float n1,float n2){
    return n1 * n2;
}

float division(float n1,float n2){
    if (n2 == 0){
        cout<<"You cant divide by ";
        return 0;
        }
    return n1 / n2;
}

int main()
{
    float n1,n2;
    int op;
    cout<<"Enter the number of the operation:\n1-Addition\t2-Subtraction\t3-Multiplication\t4-Division\n";cin>>op;
    cout<<"Enter the first fraction: ";cin>>n1;
    cout<<"Enter the second fraction: ";cin>>n2;
    switch (op)
    {
    case 1:
        cout<<addition(n1,n2);
        break;
    case 2:
        cout<<subtracttion(n1,n2);
        break;
    case 3:
        cout<<multiplication(n1,n2);
        break;
    case 4:
        cout<<division(n1,n2);
        break;
    
    default:
        cout<<"please enter numbers from 1-4";
        main();
    }
    return 0;
}
