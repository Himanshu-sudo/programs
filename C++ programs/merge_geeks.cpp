
#include <bits/stdc++.h>
using namespace std;


void merge(int a[], int const left, int const mid, int const right)
{
	auto const leftarrayv = mid - left + 1;
	auto const rightarrayv = right - mid;

	
	auto *leftArray = new int[leftarrayv],
		*rightArray = new int[rightarrayv];


	for (auto i = 0; i < left; i++)
		leftArray[i] = a[left + i];
	for (auto j = 0; j < right; j++)
		rightArray[j] = a[mid + 1 + j];

	auto i1 = 0, 
		i2 = 0; 
	int im = left ; 


	while (i1 < left && i2 < right) {
		if (leftArray[i1] <= rightArray[i2]) {
			a[im] = leftArray[i1];
			i1++;
		}
		else {
			a[im] = rightArray[i2];
			i2++;
		}
		im++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (i1 < left) {
		a[im] = leftArray[i1];
		i1++;
		im++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (i2 < right) {
		a[im] = rightArray[i2];
		i2++;
		im++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int a[], int const l, int const r)
{
	if (l >= r)
		return; // Returns recursively

	auto mid = l + (l - r) / 2;
	mergeSort(a, l, mid);
	mergeSort(a, mid + 1, r);
	merge(a, l, mid, r);
}

int main()
{
    int N ; 
    cin>>N ; 
	int arr[N];
    srand(100) ;
    for( int i = 0 ; i<N ; i++){
        arr[i] = rand() % 100 ; 
    }
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);
    auto start = chrono::steady_clock::now() ;
	mergeSort(arr, 0, arr_size - 1);
    auto end = chrono::steady_clock::now() ;
	// cout << "\nSorted array is \n";
	// printArray(arr, arr_size);
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"Elapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 
	return 0;
}


