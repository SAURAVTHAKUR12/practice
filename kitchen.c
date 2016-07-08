#include<stdio.h>
int main()
{int k,n;
int i;
scanf("%d",&k);
while(k!=0)
{int s=0;
scanf("%d",&n);
int ar[n+1];
int br[n];
ar[0]=0;
for(i=1;i<n+1;i++)
scanf("%d",&ar[i]);
for(i=0;i<n;i++)
scanf("%d",&br[i]);
for(i=0;i<n;i++)
{if(br[i]<=(ar[i+1]-ar[i]))
s=s+1;
}
printf("%d\n",s);
k--;
}
return 0;}
