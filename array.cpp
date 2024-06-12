#include <iostream>
using namespace std;

int avg(int n){
    int sum;
    for(int i =1;i<=n;i++){
        int x;
        cin >> x;
        sum +=x;
        
    }
       return sum/n;

}


int main(){

    int n;
    cin >> n;
    int arr[n];
  for(int i =0;i<n;i++){
    cin >> arr[i];
    // cout << arr[i] << endl;

  } 
  // int min = arr[0];
  // int max = arr[0];
  // cout <<"min " <<min << "max "<<max <<endl;
  // for(int i =0;i<n;i++){
  //   if(arr[i] < min){
  //     min = arr[i];
  //   }
  //   if(arr[i] > max){
  //     max = arr[i];
  //   }

  // }

  for(int i=0;i<n/2;i++){
    swap(arr[i],arr[n-i-1]);
  }

  for(int i =0;i<n;i++){
    cout << arr[i] << ' ';
  }
  // cout << min << " " << max << endl; 
    
    // cout << arr[101] <<endl;

    return 0;
}


