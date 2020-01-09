#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
  int n;
  char s[100][100];
  int a[100];
  cin>>n;
  for(int i=n;i>0;i--){
  cin>>s[i];
  int len =strlen(s[i]);
   int num=0;
  for(int j=len-1;j>=0;j--){
      if(s[i][j]=='1'){
        num+=pow(2,len-j-1);
      }
  }
  a[i]=num;
  }

  for(int i=n;i>0;i--){
  cout<<a[i]<<"\n";
  }
}

