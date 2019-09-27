#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	int k, l=0;
	cout<<"VVedite celoe chislo a:\n";
	cin>>a;
	if(a==floor(a)) 
	{
		cout<<"VVedennoe vami chislo yavlyaetsya celim, ";
		if(fmod(a,2)==0) cout<<"cetnim, ";
		else cout<<"necetnim, ";
		for(k=2;k<=a;k++)
		{
			if(fmod(a,k)==0) l++;
		}
		if(l>1) cout<<"sostavnim.";
		else cout<<"prostim";
	}
	
	else cerr<<"OSHIBKA!";
	return 0;
}
