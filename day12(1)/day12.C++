#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n,m; 
cin>>n>>m;
char arr[n][m];
for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
cin>>arr[i][j];
}
}
int ans=0; 
for(int i=0; i<n; i++){
int count = 0;
for(int j=0; j<m; j++){
if(arr[i][j] == '#') count++;
else contie;
}
if(count > ans) ans = count;
}
cout<<ans<<endl; 
}
}
