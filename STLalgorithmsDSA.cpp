/*#include<iostream>
#include<algorithm>
#include<vector>*/
#include<bits/stdc++.h>


using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;


   cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
cout << "upper bound -> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

     int a=3;
     int b=5;

     cout<<"max : "<<max(a,b);

     swap(a,b);

     string abcd="abcd";
     reverse(abcd.begin(),abcd.end());
     cout<<"string->"<<abcd<<endl;





}