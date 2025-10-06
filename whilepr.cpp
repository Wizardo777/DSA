#include<iostream>
using namespace std;

int main(){

    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    
    /*int n;
    cin>>n;
    int i =1;

    while(i<=n){
       
        int j=1;

        while(j<=n){
            cout<<j;

            j=j+1;
        }cout<<endl;
        i=i+1;

    }*/

    /*int n;
    
    cin>>n;
    //123
    //456
    //789

    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        
        while(j<=n){
            
            
            cout<<count;
            count=count+1;
            
            j=j+1;
        }cout<<endl;
        i=i+1;
    }*/

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }*/

    //1
    //22
    //333
    //444
  /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //1
   //23
   //456
   //78910

   /*int n;
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n){
    int j=1;
    while(j<=i){

        cout<<count;
        count=count+1;

        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //1
   //23
   //345
   //4567

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){

        cout<<i+j-1;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //1
   //21
   //321
   //4321

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){

        cout<<i-j+1;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //AAA
   //BBB
   //CCC

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+i-1;
        cout<<ch;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //ABC
   //DEF
   //GHI

   /*int n;
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+count-1;
        cout<<ch;
        count=count+1;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //ABC
   //BCD
   //CDE

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A'+i+j-2;
        cout<<ch;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //A
   //BB
   //CCC

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
char ch='A'+i-1;
cout<<ch;

        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/


   //A
   //BC
   //DEF
   //GHIF


   /*int n;
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+count-1;
        cout<<ch;

        count=count+1;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //A
   //BC
   //CDE
   //DEFG

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+i+j-2;
        cout<<ch;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/


   //D
   //CD
   //BCD
   //ABCD

   /*int n;
   cin>>n;

   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+n-i+j-1;
        cout<<ch;


        j=j+1;
    }cout<<endl;
    i=i+1;
   }*/

   //   *
   //  **
   // ***
   //**** 
/*int n;
cin>>n;
   int i = 1;
    while (i <= n) {
        // print spaces
        int space = n - i;   // ✅ start with correct number of spaces
        while (space > 0) {
            cout << " ";
            space = space - 1;
        }

        // print stars
        int j = 1;
        while (j <= i) {     // ✅ print as many stars as row number
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }*/

    //****
    //*** 
    //** 
    //*

    /*int n;
cin>>n;
   int i = 1;
    while (i <= n) {
        // print spaces
        int space = n - i;   // ✅ start with correct number of spaces
        while (space > 0) {
            cout << "*";
            space = space - 1;
        }cout<<endl;
        i=i+1;
    }*/

    //****
    // *** 
    //  ** 
    //   *

    /*int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        // print spaces
        int j = 1;
        while (j < i) {
            cout << " ";
            j = j + 1;
        }

        // print stars
        int star = n - i + 1;
        while (star > 0) {
            cout << "*";
            star = star - 1;
        }

        cout << endl;  // ✅ move newline here
        i = i + 1;
    }*/


    //1111
    // 222
    //  33
    //   4
    /*int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        // print spaces
        int j = 1;
        while (j < i) {
            cout << " ";
            j = j + 1;
        }

        // print stars
        int star = n - i + 1;
        while (star > 0) {
            cout << i;
            star = star - 1;
        }

        cout << endl;  // ✅ move newline here
        i = i + 1;
    }*/

    //   1
    //  121
    // 12321
    //1234321

     int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        // print spaces
        int space = n - i;
        while (space > 0) {
            cout << " ";
            space = space - 1;
        }

        // print left side (1 to i)
        int j = 1;
        while (j <= i) {
            cout << j;
            j = j + 1;
        }

        // print right side (i-1 to 1)
        int k = i - 1;
        while (k > 0) {
            cout << k;
            k = k - 1;
        }

        cout << endl;
        i = i + 1;
    }
    return 0;
}