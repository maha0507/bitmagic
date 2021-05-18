#include<bits/stdc++.h>
using namespace std;
main()
{
   int num,res,position;
   cin>>num>>position;
   res=num^((position-1)<<1);
   cout<<res;	
}
