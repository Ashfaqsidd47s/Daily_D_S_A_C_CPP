#include<stdio.h>

int sum(int num){
    if(num < 10){
        return num;
    } else {
        return sum(num/10) + num%10;
    }
}

int main(){
    int n = 23455;
    printf("Sum of the digits of number %d is : %d",n, sum(n));
}