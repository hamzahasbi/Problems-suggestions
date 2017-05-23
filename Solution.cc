#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		float a,b,r,t=0,mini=10;
		int n,h;
		bool check=false;
		string solution;
		scanf("%f %f %d",&a,&b,&n);
		r=(a+b)/2;
		vector<float> x(n);
		vector<string> y(n);
		vector<int> f;
		map<float,int> o;
		for(int i=0;i<n;i++) 
		{
			cin>>x[i];
			t=abs(r-x[i]);
			o[t]++;
			if(t<mini) {mini=t;h=i;}
		}
		for(int i=0;i<n;i++) cin>>y[i];
		if(o[mini]==1) cout<<y[h]<<endl;
		else 
		{
			for(int i=0;i<n;i++)
			{
				if(abs(r-x[i])==mini)  f.push_back(i);
			}
			for(int i=0;i<f.size();i++)
			{
				if(y[f[i]].size()>=5 && y[f[i]].size()<=8)
				{
					if(isupper(y[f[i]][0]))
					{
						for(int j=1;j<y[f[i]].size();j++)
						{
							if(y[f[i]][j]>=97 && y[f[i]][j]<=122) check=true;
							else check=false;
							
						}
					}
					else check=false;
				}
				if (check)
				{
					for(int j=1;j<y[f[i]].size();j++)
					if(y[f[i]][j]=='s') {solution=y[f[i]];break;break;}
				}
			}
			cout<<solution<<endl;
		}
		
	}
	return 0;
}
