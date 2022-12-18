#include<iostream>
#include<vector>
using namespace std;

void swap(int* a, int* b){
	    int c=*b;
           *b=*a;
           *a=c;
   }
   
int partiton(vector<int>& v, int s, int e){
	 int pivot=v[s];
     int i=s;
	 for(int i=s+1;i<=e;i++){
		 if (v[i]<pivot)
		 {           
			 i++;
		     swap(&v[i],&v[s]);
		 }  
	 }
	     swap(&v[i],&v[s]);
		 return i;
 }
void quickSort(vector<int>& v, int s, int e) {
	if(s>=e)
	   return;
	int k=partiton(v,s,e);
    quickSort(v, s, k-1);
	quickSort(v, k+1, e);
}

int main() {
	int n;
	vector<int> v;
	cout << "Enter Size of Vector : ";
	cin >> n;
	v = vector<int>(n);
	cout << "Enter Elements of Vector : ";
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	quickSort(v, 0, n - 1);
	cout << "\nVector Obtained After Sorting: ";
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ' ';
	}
}