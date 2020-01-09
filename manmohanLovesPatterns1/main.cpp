#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            if(i>1)
                {cout<<1;}
        if(i%2==0){
            int num=i-2;
            while(num>0){
                cout<<0;
                num--;
            }

        }
        else{
            int num2=i-2;
            while(num2>0){
                cout<<1;
                num2--;
            }

        }
        cout<<1<<endl;
        }

    return 0;
}
