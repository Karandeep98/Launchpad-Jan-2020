#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100];
    cin>>n;

    a[0][0]=1;
    a[1][0]=a[1][1]=1;
    for(int i=2;i<n;i++){
                int j=0;
             a[i][0]=a[i][i]=1;
            while(j<i){
        a[i][j+1]=a[i-1][j]+a[i-1][j+1];
                j++;
            }
    }
    for(int i=0;i<n;i++){
            int spaces=n-i-1;
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
