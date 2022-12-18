#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){

vector<int> helper;
 int i=low;
 int j=mid+1;
 int current=0;


while(i<=mid&&j<=high){

  if(arr[i]<=arr[j])
     helper.push_back(arr[i++]);
  else
     helper.push_back(arr[j++]);

}


while(i<=mid)
  helper.push_back(arr[i++]);

while(j<=high)
  helper.push_back(arr[j++]);

 for(int i=low;i<=high;i++){
   arr[i]=helper[i-low];
//    cout<<helper[i]<<endl;

 }
    
}

void mergeSort(vector<int>& arr, int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}
int main(){

vector<int> arr{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
mergeSort(arr, 0, arr.size()-1);
  
for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";

  }   
return 0;
}