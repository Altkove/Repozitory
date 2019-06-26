#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int* z(string s)
{
    int chechik[6];
	for (int x = 0; x < 6; x++) {
		chechik[x] = 0;
	}
    for (int x = 0; x < s.length(); x++)
    {
            if (s[x] == 'o')
               chechik[0]++;
        while (s[x] == 'o')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'e')
                chechik[1]++;
        while (s[x] == 'e')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'i')
                 chechik[2]++;
        while (s[x] == 'i')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'a')
                 chechik[3]++;
        while (s[x] == 'a')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'u')
                 chechik[4]++;
        while (s[x] == 'u')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'y')
                 chechik[5]++;
        while (s[x] == 'y')
        {
            s.erase(x,1);
            x--;
        }
    }  
    return  chechik;
}
int main()
{
char ss[] = {'a', 'e', 'o', 'i', 'u', 'y'};
	int test1[6], test2[6], test3[6];
	int a[] = {2,7,0,2,0,0};
	int b[] = {0,1,0,9,0,5};
	int c[] = {0,0,0,5,0,1};
	bool test = true;
	for (int x=0; x<(sizeof(ss)/sizeof(ss[0])); x++) {
		test1[x] = *(z("xz xz xz")+x);
		test2[x] = *(z("argihalrjh aaerkoiah kaopfga")+x);
		test3[x] = *(z("")+x);
	}
	for (int x=0; x<(sizeof(ss)/sizeof(ss[0])); x++) {
		if (test1[x]!=a[x] || test2[x]!=b[x] || test3[x]!=c[x]) {
			test = false;
		}
	}
	if (!test) {
		cout<<"Ne norm"<<endl;
		return 1;
	} else {
		cout<<"Norm"<<endl;
	}
	return 0;
}
