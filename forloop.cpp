#include<iostream>
using namespace std;

int main(){

    /*int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    for(;;){
        if(i<=n){
             cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }*/


    //int n;
   // cout<<"enter the value of n"<<endl;
    //cin>>n;

    /*int sum=0;

    for(int i=1;i<=n;i++){
        
        sum+=i;
    }

    cout<<sum<<endl;*/

    //FIBONACCI

    /*int n=20;
  
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){


        int nextNumber =a+b;

        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;

    }*/

    int n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){

            cout<<"not prime"<<'\n';
break;
        }

        else{
            cout<<"prime\n";
            break;
        }
    }
    
}