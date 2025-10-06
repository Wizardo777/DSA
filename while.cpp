#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   /* int i = 1; 
    int count=1; // row counter
    while (i <= n) {
        int j = 1;  // column counter
        while (j <= n) {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
    }
    cout<<endl;
    i=i+1;
} */

/*int row=1;
while(row<=n){
    int col =1;
    while(col<=row){
        cout<<"*";
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}*/
/*int i=1;
while(i<=n){
    int j=1;
    int value=i;
    while(j<=i){
        cout<<value;
        value=value+1;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/
/*int i=1;

while(i<=n){
    int j=1;
    

    while(j<=i){
        cout<<i-j+1;
        j=j+1;

    }cout<<endl;
    i=i+1;
}*/
/*int i=1;

while(i<=n){
    int j=1;
    while(j<=n){
        char ch ='A'+i-1;
        cout<<ch;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/

/*int i=1;

while(i<=n){
    int j=1;
    while(j<=n){
        int value=i;
        char ch ='A';
        
        cout<<ch;
        ch=ch+1;
        j=j+1;
        
    }cout<<endl;
    i=i+1;
}*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch= i+j-1 + 'A' -1;
        cout<<ch;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/

/*int i=1; //row vertical

while(i<=n){

    int j=1; //column horizontal
    while(j<=i){
        char ch='A'+i-1;
        cout<<ch;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/

/*int i=1; //row vertical

while(i<=n){

    int j=1; //column horizontal
    while(j<=i){
        char ch='A'+i+j-2;
        cout<<ch;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/
/*int i=1; //row vertical

while(i<=n){

    int j=1; //column horizontal
    while(j<=i){
        char ch='A'+i+j-2;
        cout<<ch;
        j=j+1;
    }cout<<endl;
    i=i+1;
}*/

/*int i=1; //row vertical

while(i<=n){

    int j=1; //column horizontal
    char ch='A'+n-i;
    while(j<=i){
        
        cout<<ch;
        ch=ch+1;
        j=j+1;
    }cout<<endl;
    i=i+1;}*/

   /* int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;}
            

            //stars

            int col=1;
            while(col<=i){
                cout<<"*";
                col=col+1;

            }cout<<endl;
            i=i+1;
        }  */

        /*int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;}
            

            //stars

            int j=1;
            while(j<=i){
                int star=n-i+1;
                cout<<"*";
                j=j+1;

            }cout<<endl;
            i=i+1;
        }*/


       /*int row=1;
       while(row<=n){
        //print space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //pritn1sttria

        int j=1;
        while(j<=row){
            cout<<j;
            j=j+1;
        }
        //print 2nd tria

        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
        }

       cout<<endl;
       row=row+1;}*/

    return 0;
}
