#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Pyramid: \n";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout<<i + 1;
        }
        cout<<endl;
    }
    

    return 0;
}