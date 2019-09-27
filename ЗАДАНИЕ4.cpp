#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main() {
	string text[25];
	cout<<"vvedite text(25):\n";
	for(int i=0;i<25;i++){
		cin>>text[i];
	}
	string slovo;
	cout<<"vvedite slovo:\n";
	cin>>slovo;
	cout<<"kolvo slov: \n";
	int n=0;
	for(int i=0;i<25;i++){
		if(text[i]==slovo) n++;
	}
	cout<<n;
	return 0;
}
