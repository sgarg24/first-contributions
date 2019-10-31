#include <iostream>
using namespace std;

int fib(int n, int* arr){
    arr[0] = 1;
    arr[1] = 1;
    for (int i=2;i <= n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}

// Memoisation - Top down
int fib2(int n, int * arr){
    if (n <=1){
        arr[n] = n;
        return n;
    }
    if (arr[n-1] == -1){
        arr[n-1] = fib2(n-1, arr);
    }
    if (arr[n-2] == -1){
        arr[n-2] = fib(n-2, arr);
    }
    arr[n] = arr[n-1]+arr[n-2];
    return arr[n];
}

// Dynamic programming - Bottom's up
int fib3(int n, int * arr){
    for (int i=0;i<n+1;i++){
        if (i < 2){
            arr[i] = i;
        } else {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    int * arr = new int[n+1];
    for (int i=0;i<n+1;i++){
        arr[i] = -1;
    }
    cout<<fib3(n, arr)<<endl;
}
