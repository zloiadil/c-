#include <iostream>
using namespace std;
int main()
{
int n;
int m;
cin>>n;
cin>>m;
int a;
int b;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int maxi=-9e7;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]>maxi){
            maxi=arr[i][j];
            a=i;
            b=j;
            
        }
    }

}
cout<<maxi<<endl;
cout<<a<<" "<<b;




    return 0;
}
