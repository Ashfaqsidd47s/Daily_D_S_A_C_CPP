#include<stdio.h>

int power(int x, int n){
    if(n == 1){
        return x;
    } else {
        return x * power(x, n - 1);
    }
}

int main(){
    int n = 3;
    int m = 3;
    printf("Power of %d to the power of %d is :%d", n, m, power(n,m));
}