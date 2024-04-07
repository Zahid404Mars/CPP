//255423216	Apr/07/2024 12:06UTC+6	jahid_hasan_metnick	71A - Way Too Long Words	C++17 (GCC 7-32)	Accepted	61 ms	100 KB
#include<iostream>
#include<String>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>s;
       if(s.length()>10)
       {
          cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
       }

       else
          cout<<s<<endl;


    }
}
