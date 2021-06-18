#include<iostream>
using namespace std;

class publication{
    public:
    string title;
    float price;
    void getData(){
        cout<<"Enter title: "<<endl;cin>>title;
        cout<<"Enter price: "<<endl;cin>>price;
    }
    void putData(){
        cout<<"Title: "<<title<<"\nPrice: "<<price<<endl;
    }

};
class book: public publication{
    public:
    int pageCount;
    void getData(){
        cout<<"Enter title: "<<endl;cin>>title;
        cout<<"Enter price: "<<endl;cin>>price;
        cout<<"Enter page count:"<<endl;cin>>pageCount;
    }
    void putData(){
        cout<<"Title: "<<title<<"\nPrice: "<<price<<"\nPages: "<<pageCount<<endl;
    }
};
class tape: public publication{
    public:
    float playingTime;
    void getData(){
        cout<<"Enter title: "<<endl;cin>>title;
        cout<<"Enter price: "<<endl;cin>>price;
        cout<<"Enter playing time:"<<endl;cin>>playingTime;
    }
    void putData(){
        cout<<"Title: "<<title<<"\nPrice: "<<price<<"\nPlaying Time: "<<playingTime<<endl;
    }
};
int main(){
    book b;
    tape t;
    b.getData();
    b.putData();
    t.getData();
    t.putData();
}