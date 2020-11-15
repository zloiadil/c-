#include <iostream>
using namespace std; 
int main(){
  int b,c,e = 0;
  cin >> b >> c;
  int a[b][c];
  int d = -9e7;
  for(int i = 0; i < b; i++){
    for(int j = 0; j < c; j++){
      cin >> a[i][j];
    if(d < a[i][j]){
        d = a[i][j];
      }  
    }
  }
  for(int i = 0; i < b; i++){
    for(int j = 0; j < c; j++){
    if(a[i][j] == d){
      e++;
      break;
    }  
    }
  }
  cout << e ;
  return 0;
}