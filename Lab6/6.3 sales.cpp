#include<iostream>
using namespace std;

class sales{
    public:
        float sales[3];
};
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
class book: public publication, public sales{
    public:
    int pageCount;
    void getData(){
        cout<<"Enter title: "<<endl;cin>>title;
        cout<<"Enter price: "<<endl;cin>>price;
        cout<<"Enter page count:"<<endl;cin>>pageCount;
        cout<<"Enter Sales(First month): "<<endl;cin>>sales[0];
        cout<<"Enter Sales(Second month): "<<endl;cin>>sales[1];
        cout<<"Enter Sales(Third month): "<<endl;cin>>sales[2];
    }
    void putData(){
        cout<<"Title: "<<title<<"\nPrice: "<<price<<"\nPages: "<<pageCount<<endl;
        cout<<"Sales from the 3 Month:"<<sales[0]<<","<<sales[1]<<","<<sales[2]<<endl;
    }
};
class tape: public publication, public sales{
    public:
    float playingTime;
    void getData(){
        cout<<"Enter title: "<<endl;cin>>title;
        cout<<"Enter price: "<<endl;cin>>price;
        cout<<"Enter playing time:"<<endl;cin>>playingTime;
        cout<<"Enter Sales(First month): "<<endl;cin>>sales[0];
        cout<<"Enter Sales(Second month): "<<endl;cin>>sales[1];
        cout<<"Enter Sales(Third month): "<<endl;cin>>sales[2];
    }
    void putData(){
        cout<<"Title: "<<title<<"\nPrice: "<<price<<"\nPlaying Time: "<<playingTime<<endl;
        cout<<"Sales from the 3 Month:"<<sales[0]<<","<<sales[1]<<","<<sales[2]<<endl;
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