#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A[100], N, i, n;
	cout<<"Vvedite razmer posledovatelnosti(ne bolee 100): ";
	cin>>N;
	cout<<"Vvedite posledovatelnost: ";
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<N;i++)
	{
		n=A[i];
		int pal=0;
		while (n!=0)
		{
			pal=(pal*10)+(n%10);
			n=n/10;
		}
		if (A[i]==pal) cout<<"palindrom: "<<A[i]<<endl;
	}
	return 0;
}
