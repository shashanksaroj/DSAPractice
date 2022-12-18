#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){

   int l=0;
   int h=arr.size()-1;

  while(l<=h){
     
     int m=l+(h-l)/2;
    if(arr[m]==target)
       return m; 
    else if(arr[m]<target)
           l=m+1;
    else
        h=m-1;

  }


return -1;

}
int main(){

vector<int> arr{1,3,9,10,12,15};


int target=10;

cout<<"target element: "<<binarySearch(arr,target);


}
