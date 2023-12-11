#include<iostream>

using namespace std;

int main(){
    int arr[10] ={3,23,31,12,7,8,12,5,15,16};
    int n = 10;

    for(int i = 0; i < n ; i++){
        for(int j = 1; j < n - i; j++){
            if(arr[j] < arr[j - 1]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Resulting Array :";
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}