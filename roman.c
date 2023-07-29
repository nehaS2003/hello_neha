#include<stdio.h>
#include<string.h>
int main()
{
  int A[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char B[][13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  int i=0;
  char s[50];
  int n,p;
  scanf("%d",&n);
  int k=sizeof(A)/sizeof A[0];
  for(i=0;i<k;i++)
  {
    if (n>=A[i])
    {
      p=n/A[i];
    }
    int j,count_s=0;
    for(j=0;j<p;j++)
    {
      strcat(s,B[i]);
      n=n%A[i];
    }
    if (n==0)
    {
     i=k;
    }
  }
  printf("%s",s);
  return 0;
}
