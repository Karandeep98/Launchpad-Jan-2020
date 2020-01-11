#include <iostream>

using namespace std;

int main()
{
    int n,m,minimum=0,strength=0;
    bool status=true;
    char a[100][100];
    cin>>n>>m>>minimum>>strength;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(a[i][j]=='.'){
                strength-=3;
                if(strength<minimum)
                    status=false;
                if(j==m-1)
                    strength++;
            }
            if(a[i][j]=='*'){
                strength+=4;
                if(j==m-1)
                    strength++;
            }
            if(a[i][j]=='#'){
                j=m;
            }

                }
           }
    if(strength>=minimum && status==true)
        cout<<"Yes"<<endl<<strength;
    else
        cout<<"No";


    return 0;
}
