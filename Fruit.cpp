#include<iostream>
using namespace std;
class Fruit{
    private:
    char ch[20];
    int n;

    friend class Basket;
};
class Basket{
    public:
    void getData(Fruit &F1){
        cout<<"***INPUT***"<<endl;
        cout<<"Enter the name of fruit : ";
        cin>>F1.ch;
        cout<<"Enter the number of fruits : ";
        cin>>F1.n;
        cout<<"\n";
    }
    void showData(Fruit &F1){
        cout<<"***OUTPUT***"<<endl;
        cout<<"The name of fruit is : "<<F1.ch<<endl;
        cout<<"The number of fruits are : "<<F1.n<<endl;
    }
};
int main(){
    Fruit F1;
    Basket F2;
    F2.getData(F1);
    F2.showData(F1);
    return 0;
}
