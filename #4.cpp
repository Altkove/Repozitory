#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string z(string &s)
{
    int x;
    for (x = 0; x < s.length(); x++)
 {
     if(s[x]=='O')
            s[x]=char(s[x]+32);
     if(s[x]=='E')
            s[x]=char(s[x]+32);
     if(s[x]=='I')
            s[x]=char(s[x]+32);
     if(s[x]=='A')
            s[x]=char(s[x]+32);
     if(s[x]=='U')
            s[x]=char(s[x]+32);
     if(s[x]=='Y')
            s[x]=char(s[x]+32);
 } 
    return s;
}

int main()
{
     string s;
 getline(cin,s);
 s.length();
    z(s);
     cout << z(s) << endl;
 return 0;
}
