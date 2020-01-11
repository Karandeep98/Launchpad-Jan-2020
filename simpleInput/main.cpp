#include <iostream>

using namespace std;

int main()
{
    int sum=0,n;
    while(1){
        cin>>n;
        sum+=n;
        if(sum>=0)
        cout<<n<<endl;
        else break;

    }
    return 0;
}
