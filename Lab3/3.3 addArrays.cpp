# include <iostream>
using namespace std;
void addArrays (int *a1,int *a2,int*a3,int size) {
    for (int i = 0; i < size; i++)
    {
        a3[i] = a1[i] + a2[i];
    }
    
    }
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {10,20,30,40,50};
    int arr3[5];
    addArrays(arr1,arr2,arr3,5);
    cout<<"Result: ";
    for (int i = 0; i < 5; i++)
    {
    cout<<arr3[i]<<",";
    }
    
}