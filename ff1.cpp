#include <stdio.h>

int maxx(int a[],int n){
       int he=0,max=0,i=0;
	   if(n<=0){
	      return 0;
	   }
	   for(i=0;i<n;i++){
	       he+=a[i];
		   if(he>=max){
		     max=he;
		   }
		   else if(he<=0)
			   he=0;
	   }
	   return max;
}

int main(){
   int i=0,n,a[200],max;
   printf("整数个数：");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   max=maxx(a,n);
   printf("最大子段和为:%d",max);
   return 0;
}