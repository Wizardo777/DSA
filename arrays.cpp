#include<iostream>
using namespace std;


//arrays using function 
void printArray(int arr[],int size){
    cout<<"printing the array "<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done "<<endl;

}
int main(){
    //declare
    int num[15]={1};

    int fifthSize=sizeof(num)/sizeof(int);
    

    cout<<fifthSize;

    printArray(num,10);



}