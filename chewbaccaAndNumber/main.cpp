#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[1][20];
     cin>>a[0];
    for(int i=0;i<strlen(a[0]);i++){
        int t=a[0][i]-'0';
        int m=9-t;
        if(t>m){
                if(m==0&&i==0){}
                else
                    a[0][i]=m+'0';
        }
    }
    cout<<a[0];
    return 0;
}
