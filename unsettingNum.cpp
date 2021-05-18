//unsetting the  given position
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos,res;
    cout<<"Enter number "<<endl;
    cin>>num;
    cout<<"Enter position"<<endl;
    cin>>pos;
    res=(num ^((pos-1)<<1));
    cout<<" unsetted number is "<<res<<endl;
       
       return 0;
}