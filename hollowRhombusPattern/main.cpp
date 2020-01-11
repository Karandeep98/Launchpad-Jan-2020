#include <iostream>

using namespace std;

int main()
{
    int n;
   cin>>n;
   char c[100][100];
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[0][j]='*';
            c[n-1][j]='*';
            c[j][0]='*';
            c[j][n-1]='*';
        }
   }
   for(int i=0;i<n;i++){
        int spaces=n-i-1;
   while(spaces>0){
    cout<<" ";
    spaces--;
   }
    for(int j=0;j<n;j++){
        cout<<c[i][j];
    }
    cout<<endl;
   }

    return 0;
}
