#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number to find its Reverse :";
    cin>>n;

    int num = n;
    int rev = 0;
    int rem = 0;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    cout<<"The Reverse of the number "<<n<<" is "<<rev;
    
}