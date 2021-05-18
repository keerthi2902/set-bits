//check given position is set or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cout<<"Enter number "<<endl;
    cin>>num;
    cout<<"Enter position"<<endl;
    cin>>pos;
    if(num &((pos-1)<<1))
       {
           cout<<"Given position is set"<<endl;
       }
       else{
           cout<<"Given position is not set"<<endl;
       }
       return 0;
}