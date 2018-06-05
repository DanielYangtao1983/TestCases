#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define STR_LEN  10000

int main(int, char**)
{
	char a [STR_LEN];

	for(int i = 0; i < STR_LEN; ++i)
		a[i] = 'A' + (int)abs(random())%26;

	a[STR_LEN] = '\0';

//	sort(a,a+strlen(a));
//	cout<< "after:"<<endl<<a <<endl;


	for(int i = 0; i < STR_LEN; ++i)
	{
		int cnt = count(a,a+STR_LEN,a[i]);
		cout<<i<<";"<<a[i] << ";"<<cnt<<";"<<endl;
	}
	return 0;
}
