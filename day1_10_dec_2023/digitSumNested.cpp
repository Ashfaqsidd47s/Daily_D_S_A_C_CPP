#include<iostream>
#include<conio.h>

using namespace std;

//WRITE A PROGRAM TO KEEP CALCULATE THE SUM OF DIGITS OF A NUMBER UNTIL THE NUMBER IS A SINGLE DIGIT
/*
    2345 SUM = 14
    234 SUM = 14 + 9 = 23
    23 SUM = 23 + 5 = 28
    2 SUM =  28 + 2 = 30
    SUM = 30

*/

int main()
{
    int n;
    cout<<"Enter the number for its sum until it is single digit :";
    cin>>n;

    int num = n;
    int sum = 0;
    int rem = 0;

    while (n > 0)
    {    
        num = n;
        while(num > 0){
            rem = num % 10; 
            sum = sum +rem;
            num = num/10;
        }
        cout<<"\n The sum is :"<<sum;
        
        n = n/10;
    }
    
    cout<<"\n\n The Sum of the Digits is :"<<sum;

    return 0;
}