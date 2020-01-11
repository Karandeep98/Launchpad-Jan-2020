#include <iostream>

using namespace std;

int main()
{

    int n,a[20],hcf=1;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int j=2;j<10;j++){
        int count=0;
        for(int i=0;i<n;i++){
    if(a[i]%j==0){
        count++;
    }
        }
    if(count==n){
    hcf*=j;
    for(int k=0;k<n;k++){
        a[k]/=j;
    }
        }
   }
cout<<hcf;
    return 0;
}
