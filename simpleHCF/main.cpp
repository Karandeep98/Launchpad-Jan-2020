#include <iostream>
using namespace std;

int hcf(int a, int b)
{
	if (b == 0)
		return a;
	return hcf(b, a % b);

}
int findHCF(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = hcf(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	cout<<findHCF(a,n);
	return 0;
}
