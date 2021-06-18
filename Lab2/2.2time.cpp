#include<iostream>
using namespace std;
long int hms_to_sec(int hr,int min, int sec)
{
int seconds =0;
cout << "please enter hr" << endl;
cin >> hr;
cout << "please enter min" << endl;
cin >> min;
cout << "please enter sec" << endl;
cin >> sec;
seconds = (hr*60*60)+(min*60)+sec;
return seconds;
}
int main()
{
int hr,min,sec;
long int result =hms_to_sec(hr,min,sec);
cout << "result = " << result;
}