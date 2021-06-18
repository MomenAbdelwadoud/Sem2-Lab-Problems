#include <iostream>
using namespace std;


double power(double n,int p=2){
    double result = 1;
    for (int i = 1; i <= p; i++)
    {
        result *= n;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    double n;
    int p;
    cout << "Enter number : ";cin >> n;
    cout << "Enter exponent : ";cin>>p;
    cout << power(n,p);
    cout << "\nResult without passing exponent is " << power(n);
    return 0;
}