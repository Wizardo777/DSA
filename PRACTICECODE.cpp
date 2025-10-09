   #include<iostream>
   #include<climits>
using namespace std;   

int getMAX(int array[], int n){

   int maxVal=INT_MIN;

   for(int i=0;i<n;i++){
      

      if(array[i]>maxVal){
         maxVal=array[i];
      }
   }
   return maxVal;
}


int main(){

   int arr[5]={1,2,3,4,77};

   cout<<getMAX(arr,5);
   return 0;
    
}

