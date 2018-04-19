/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 30/05/2017 18:10:03
*/
#include<stdio.h>
#include<stdlib.h>


int main()
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	
	int t;
	scanf("%d",&t);
		while(t--){
			int n;
			scanf("%d",&n);
			int a;
			long long sum=0;
			for(int i=0;i<n;i++) {
				scanf("%d",&a);
				sum+=a;
			}
			if(sum%n==0) printf("%d\n",n);
			else printf("%d\n",n-1);
	}
	return 0;
}

