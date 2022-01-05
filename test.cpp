#include<iostream>
using namespace std;

class A
{

    public:
        A()
        {
            cout<<"Constructor \n";
        }

        ~A()
        {
            cout<<"Destructor \n";
        }
};

int main()
{

    A ob1,ob2;
    cout<<"\n Welcome Main \n";
    {

        A ob3;
        cout<<" Train ur brain !! \n";
        cout<<" EICT \n";
    }
    cout<<" Bye from main \n";
    return 0;
}