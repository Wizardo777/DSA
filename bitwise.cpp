#include<iostream>

using namespace std;

int main(){

    int a=4;
    int b=6;

    cout<<"a&b "<<(a&b)<<'\n';
    cout<<"a|b "<<(a|b)<<'\n';
    cout<<"~a "<<(~a)<<'\n';
    cout<<"a^b "<<(a^b)<<'\n';  //cin>>

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i=7;

    cout<<(++i)<<'\n';
    //8
    cout<<(i++)<<'\n';
    //8 i=9
    cout<<(i--)<<'\n';
    cout<<(--i)<<'\n';


}