#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> a,int size){
    
    for(int i=1;i<size;i++){
        int key = a[i];
        int j = i - 1;
    
        while(key<a[j] && j>=0){
            a[j+1] = a[j];
            j--;
        }
    
        a[j+1] = key;
    
        for(int j=0;j<size;j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }
}

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	InsertionSort(A,A.size());
}
