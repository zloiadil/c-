#include <iostream>
using namespace std; 
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  int maxi=-9e7;
  int count=0;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
      cin >> arr[i][j];
      if(arr[i][j]>maxi)
        maxi = arr[i][j];
      }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==maxi){
            count++;
            break;
        }
    }
}
cout<<count<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==maxi){
        cout<<i<<" ";
        break;}
    }
}
return 0;
}


