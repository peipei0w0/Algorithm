#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> A, int len ) {
    
    int min;
    for(int i=0;i<len-1;i++){
        min = i;
        for(int j = i+1;j<len;j++){
            if(A[min] > A[j]) min = j;
        }
        int temp = 0;
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
        
        for(int j=0;j<len;j++)
            cout<<A[j]<<" ";
        cout<<endl;
    }
}

int main(int argc, char *argv[]){   

    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	
	SelectionSort(A, A.size());
	
}
