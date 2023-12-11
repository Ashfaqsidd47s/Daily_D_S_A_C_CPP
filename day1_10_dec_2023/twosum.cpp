#include<iostream>

using namespace std;

int main(){
    int arr[10] ={3,23,31,12,7,8,12,5,15,16};
    int n = 10;
    int sum = 19;

    cout<<"Initial Array :";
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //first sorting the array 
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

    //findig the sum exist or not
    int start = 0;
    int end = n - 1;
    while (start != end)
    {
        if(arr[start]+ arr[end] == sum){
            cout<<"True";
            return 0;
        } else {
            if(arr[start]+ arr[end] > sum){
                end--;
            } else {
                start++;
            }
        }
    }
    cout<<"false";
    return 0;
    

}