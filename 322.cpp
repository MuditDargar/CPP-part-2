#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n ;
 int arr1[n];
 int arr2[n];
  int sum1 =0 ;
  int sum2 =0 ;
  for(int i = 0; i <n; i++)
  {
      cin>>arr1[i];
  }
  for(int i = 0; i <n; i++)
  {
      cin>>arr2[i];
  }

for(int i = 0; i < n; i++)
{
    sum1=sum1+arr1[i] ;
}
cout<<sum1<<endl;

for(int i = 0; i < n; i++)
{
    sum2=sum2+arr1[i] ;
}
cout<<sum2<<endl;

if(sum1==sum2){
    cout<<"1"<<endl;
}
else{
    cout<<"0"<<endl;
}
  
return 0;
}