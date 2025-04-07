#include<iostream>
using namespace std;
class Temperature
{
    float ip,op;
    char choice;
public:
    void getData()
    {
        cout<<"Enter The Temperature :"<<endl;
        cin>>ip;
    }
    void getOption()
    {
        cout<<"Enter the option you want to convert C or F :"<<endl;
        cin>>choice;
    }
    void celsius2F()
    {
        op=(ip * 9 / 5) + 32;
    }
    void Fahrenhit2C()
    {
        op=(ip - 32) * 5 / 9;
    }
    void convert()
    {
        if (choice == 'c' || choice=='C')
        {
            Fahrenhit2C();
        }
        else if (choice=='f' || choice=='F')
        {
            celsius2F();
        }
        else
        {
            cout<<"Enter correct Choice "<<endl;
        }
    }
    void display()
    {
        cout<<"The converted temp is :"<<op<<endl;
    }

};
int main()
{
    Temperature T1;
    T1.getData();
    T1.getOption();
    T1.convert();
    T1.display();

    return 0;
}



