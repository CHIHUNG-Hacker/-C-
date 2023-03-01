#include <iostream>
using namespace std;

int main() {
  int n,min,max,d=0;
  cin>>n;//有幾條線段
  int arr[100];
  for(int i=0;i<100;i++){
    arr[i]=0;
  }
  for(int j=1;j<=n;j++){
    cin >>min>>max;
    for(int i=min;i<max;i++){
      arr[i]=1;
    }
  }
  for(int j=0;j<100;j++){
    d=d+arr[j];
  }
     cout<<d;
}