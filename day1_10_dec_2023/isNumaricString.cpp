#include<iostream>

using  namespace std;

int main(){
    char str[100];
    cout<<"Enter the string :";
    cin.getline( str,100);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] < 48 || str[i] > 57){
            cout<<"\nThe String is NOT Numaric...."<<str[i];
            return 0;
        }
    }
    cout<<"\nThe String is Numaric...\n";

    return 0;
}