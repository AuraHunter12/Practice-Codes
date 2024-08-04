// BINARY SEARCHING OF AN ARRAY

#include <iostream> 
using namespace std;
int main (){
    int arr[6]={10,20,30,40,50,60} ;
    bool flag=false ;
    int target;
    int i,j,n=6;
    i=0; j= n-1;
    
    while (i<=j){
       int mid=(i+j)/2;
        if(arr[mid]==target){
         flag=true; 
           break;
        }
        else if(arr[mid]<target){
            i=mid+1;
         }
         else(arr[mid]>target);{
            j=mid-1;
         }

         } 
         if (flag==true){
    cout<<"Found";
  }
   else
    {
    cout<<"Not Found";
      }
        return 0;
}