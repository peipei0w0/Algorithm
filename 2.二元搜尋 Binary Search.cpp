#include <iostream>
#include <vector>
using namespace std;

void BinarySearch(vector<int> A, int low, int high, int v){
	while(low <= high){
		for(int j = low; j <= high; j++)
			cout << A[j] << " " ; 
		cout << endl;
		
		int mid = (high + low) / 2;
		
		if(A[mid] == v){
			cout << A[mid];
			break;
		}
		else if(v < A[mid])  high = mid - 1;
		
		else low = mid + 1;
	}
}

int main(int argc, char *argv[]) {   
    vector<int> A;
	int i, n, v;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	
	BinarySearch(A, 0, A.size() - 1, v);
	
}
