#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    char a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;

    for(int j=0;j<strlen(a);j++){
        if(a[j]==b[j])
            a[j]=0+'0';
        else
            a[j]=1+'0';

    }
    cout<<a<<endl;
    }
    return 0;
}
