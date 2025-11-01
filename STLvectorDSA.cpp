#include<iostream>
#include<vector>
using namespace std;


int main(){

   vector<int> v;

  



   vector<int> a(5,1); //5 element initialise with 1
   cout<<"print a"<<endl;
   for(int i:a){
    cout<<i<<" ";
   }

   vector<int> last(a); //gets value from last vector above from a

   cout<<"print last"<<endl;
   for(int i:last){
    cout<<i<<" ";
   }

   cout<<"capacity->"<<v.capacity()<<endl;

   v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;

     v.push_back(3);  //capacity doubles
    cout<<"capacity->"<<v.capacity()<<endl; //capacity=space assigned available for elements
    cout<<"size->"<<v.size()<<endl; //no of elements
    

     cout<<"element at 2nd index "<<v.at(2)<<endl;

  

   

    cout<<"first element->"<<v.front()<<endl;

    cout<<"last element->"<<v.back()<<endl;
     cout<<"empty or not->"<<v.empty()<<endl;

    cout<<"before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";

    } cout<<endl;

    v.pop_back(); //removes element 

    cout<<"after pop back "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;

    v.clear();

    cout<<"after clear size "<<v.size()<<endl;
}