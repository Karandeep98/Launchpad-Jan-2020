#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
   cin>>a>>b>>c;
   double d=pow(b,2)-(4*a*c);
   double x1=(-b+sqrt(d))/(2*a);
    double x2=(-b-sqrt(d))/(2*a);
    if(d>0)
        cout<<"Real and Distinct\n";
    else if(d==0)
        cout<<"Real and Equal\n";
    else
        cout<<"Imaginary";

        if(d>=0){
        if(x1<x2) cout<<x1<<" "<<x2;
        else cout<<x2<<" "<<x1;
        }
    return 0;
}
