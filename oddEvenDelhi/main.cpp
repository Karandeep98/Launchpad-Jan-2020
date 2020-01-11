#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    char a[100][100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int oddSum =0;int evenSum = 0;
        for(int j=0;j<strlen(a[i]);j++){
            if((a[i][j]-'0')%2==0)
                evenSum +=a[i][j]-'0';
        else
             oddSum +=a[i][j]-'0';
        }
        if(evenSum%4==0||oddSum%3==0)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
