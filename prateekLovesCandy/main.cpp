#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,num;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num;
         int j=2;
        while(num>0){
            if(isPrime(j))
            num--;
            j++;
        }
        cout<<j-1<<endl;
        }
    return 0;
}
