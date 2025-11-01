#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("love1");
    q.push("love2");
    q.push("love3");

    cout<<"first element "<<q.front()<<endl;
    q.pop();
        cout<<"first element after pop"<<q.front()<<endl;

            cout<<"size after pop "<<q.size()<<endl;

            


}