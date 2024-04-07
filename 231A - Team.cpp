//255438228	Apr/07/2024 14:04UTC+6	jahid_hasan_metnick	231A - Team	C++17 (GCC 7-32)	Accepted	92 ms	100 KB
#include<iostream>
#include<string>
 using namespace std;
 int main()
 {

     int n,p,r,t,count=0;
     cin>>n;
     while(n--)
     {
         cin>>p>>r>>t;
         if(p+r+t>=2)

            count+=1;
     }
     cout<<count<<endl;
 }
