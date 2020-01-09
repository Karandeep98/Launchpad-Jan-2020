#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0)cout<<1<<endl;
        if(i==1)cout<<11<<endl;
        if(i>=2){
            cout<<i;
        int num=i-1;
        while(num>0){
            cout<<0;
            num--;
        }
        cout<<i<<endl;
    }
    }
    return 0;
}
