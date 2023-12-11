#include <iostream>
#include<conio.h>

using namespace std;

//PROGRAM TO PRINT A RIGHT ANGELED PYRAMID
/*
    ******
     *****
      ****
       ***
        **
         *
*/

int main(){
   int n;

    cout<<"Enter the size of the Pyramid: \n";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(j >= i ){
                cout<<i+1;
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}