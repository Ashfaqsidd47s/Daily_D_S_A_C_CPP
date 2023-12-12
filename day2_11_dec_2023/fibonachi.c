#include<stdio.h>

int fibonachi(int num){
    if(num == 1 ){
        return 0;
    } else {
        if(num == 2){
            return 1;
        } else {
            return fibonachi(num - 1) + fibonachi(num - 2);
        }
    }
}

int main(){
    int n = 5;
    printf("Fibonacci series upto %d is %d",n, fibonachi(n));
}