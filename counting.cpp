#include<iostream>
using namespace std;
//fucntion signature
void printCounting(int n){
    //fucntion body
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    //fucntion call
    printCounting(n);

}