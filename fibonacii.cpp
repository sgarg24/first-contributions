#include <iostream>
using namespace std;
int fib(int n){
  if (n<2)
    return n;
  return fib(n-1)+fib(n-2);
}
int main(){
  int n;
  cin>>n;
  cout<<fib(n+1)<<endl;
  return 0;
}
