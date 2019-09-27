#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;


int main() {
    char s[256];
    int i, n=0;
    cout<<"vvedite text:\n";
    cin.getline(s, 256);
    if(s[0]!= ' ') n++;
    for (i=0; i<strlen(s); i++) {
        if (s[i]==' ' && s[i+1]!=' ' ) { 
            n++;
        }
    }
    cout << "kolichestvo slov: "<<n<<endl;
    cout<<"otsortirovanniy text(kriteriy - poryadok vvoda slov):\n";
    s[0] = toupper(s[0]);
    for (i=0; i<strlen(s); i++) 
	{
		if (s[i]==' ' && s[i+1]!=' ' ) s[i+1] = toupper(s[i+1]);
		cout<<s[i];
	}
    return 0;
}
