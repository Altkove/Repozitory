#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int z(string &s, int &d, int &f, int &g, int &h, int &j, int &k)
{
    for (int x = 0; x < s.length(); x++)
    {
            if (s[x] == 'o')
                d++;
        while (s[x] == 'o')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'e')
                f++;
        while (s[x] == 'e')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'i')
                g++;
        while (s[x] == 'i')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'a')
                h++;
        while (s[x] == 'a')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'u')
                j++;
        while (s[x] == 'u')
        {
            s.erase(x,1);
            x--;
        }
            if (s[x] == 'y')
                k++;
        while (s[x] == 'y')
        {
            s.erase(x,1);
            x--;
        }
    }  
    return d;
}
int main()
{
    string s;
int d = 0, f = 0, g = 0, h = 0, j = 0, k = 0;
int x=0;
    getline(cin,s);
    s.length();   
    z(s, d, f, g, h, j, k);
    cout << "o = " << d << "; " << "e = " << f << "; " << "i = " << g << "; " << "a = " << h << "; " << "u = " << j << "; " << "y = " << k << "; " << endl;
    return 0;
}
