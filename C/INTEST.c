#include<stdio.h>
	int main(){
		int n,i,count=0;
		int k;
		scanf("%d %d",&n,&k);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]%k==0){
				++count;
			}
		}
		printf("%d",count);
	}
