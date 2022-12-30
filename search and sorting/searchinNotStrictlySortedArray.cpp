#include<iostream>
#include<vector>
using namespace std;

vector<int> search(vector<vector<int>> arr, int target){


int r=0;
int c=arr.size()-1;

while(r<=c&&c>=0){
   
   if(arr[r][c]==target)
       return vector<int>{r,c};
   else
       if(arr[r][c]<target)  
         r++;
       else
         c--;  
}
return vector<int>{-1,-1};

}
int main(){

vector<vector<int>> arr={
    {10,20,30,40},
    {15,25,35,45},
    {28,29,37,49},
    {33,34,38,58}
    };

int target=37;
cout<<search(arr,target)[0];
cout<<search(arr,target)[1];
return 0;

}




