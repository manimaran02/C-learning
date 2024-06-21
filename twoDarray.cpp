#include <iostream>
#include <vector>
using namespace std;

int main(){
// int arr[2][3] = {{1,3,5},{2,1,6}};

// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout << &arr[i][j] << " " << arr[i][j] <<  endl;
//     }
// }

// int a,b;
// cin >> a >> b;
// int arr[a][b];
// for(int i =0;i<a;i++){
//     for(int j=0;j<b;j++){
//         arr[i][j] = i+1*j+1;
//         cout << i << " * " << j << " = " << arr[i][j] << endl;

//     }
// }

vector <vector<int>> x;
int n,m;
cin >> n >> m;
for(int i =0;i<n;i++){
    vector<int> temp;
for(int j=0;j<m;j++){
    int x1;
    cin >> x1;
    temp.push_back(x1);
}   
x.push_back(temp); 
}
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        cout << x[i][j] << " ";
    }
    cout << endl;
}
cout <<x[0].size() << endl; // No of columns
cout << x.size() << endl; // No of rows
return 0;

}