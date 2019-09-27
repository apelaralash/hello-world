#include<iostream>
#include<cmath>
using namespace std;
double nod (double a, double b)
{
	if (b == 0) return a;
	return nod(b, fmod(a,b));
}
double noc (double c, double d)
{
	return c * d / nod(c,d);
}
int main()
{
	double n, m;
	cout<<"vvedite 2 celih cisla: ";
	cin>>n>>m;
	if(floor(n)==n && floor(m)==m) cout<<"nod: "<<nod(fabs(n), fabs(m))<<"\nnoc: "<<noc(n,m);
	else cerr<<"sorry, oshibochka vishla";
	return 0;
}
