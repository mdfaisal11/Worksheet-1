#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The number of Elements :"<<endl;
    cin>>n;

    int num[n];
    cout<<"Enter "<<n<<" numbers : "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    cout<<"Number in ascending order :"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;

    return 0;

}

