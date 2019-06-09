#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
 string s;
 int d = 0, f = 0, g = 0, h = 0, j = 0, k = 0;
 getline(cin,s);
 s.length();
 for (int x = 0; x < s.length(); x++)
 {
 {
      if (s[x] == 'o')
 d++;
    } 
     while (s[x] == 'o')
     {
         s.erase(x,1);
         x--;
     }
     {
              if (s[x] == 'e')
         f++;
     }
     while (s[x] == 'e')
     {
         s.erase(x,1);
         x--;
     }
      {
              if (s[x] == 'i')
         g++;
     }
     while (s[x] == 'i')
     {
         s.erase(x,1);
         x--;
     }
      {
              if (s[x] == 'a')
         h++;
     }
     while (s[x] == 'a')
     {
         s.erase(x,1);
         x--;
     }
      {
              if (s[x] == 'u')
         j++;
     }
     while (s[x] == 'u')
     {
         s.erase(x,1);
         x--;
     }
      {
              if (s[x] == 'y')
         k++;
     }
     while (s[x] == 'y')
     {
         s.erase(x,1);
         x--;
     }
 } 
    cout << "o = " << d << "; " << "e = " << f << "; " << "i = " << g << "; " << "a = " << h << "; " << "u = " << j << "; " << "y = " << k << "; " << endl;
 return 0;
}
