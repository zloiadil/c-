#include <iostream>
using namespace std;
int main()
{
int n,m;
int max=0;
cin>>n;
cin>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

if(m==1)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=arr[i][0];
                if(arr[i][j]>max)
                    max=arr[i][j];
    }
}
}

else {
    for(int i=0;i<n;i++){
    for(int j=1;j<m;j++){
       
         arr[i][j]=arr[i][j]+arr[i][j-1];

        if(arr[i][j]>max)
    max=arr[i][j];
    }
    }
    }
 cout<<max<<endl;

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)          
       {
         if(arr[i][j]==max)
         {
           cout<<i;
           i=n-1;
         }
        }
    }        
    return 0;

}