#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int l, int r, int x)
{
	
	int i;
	for (i=l; i<r; i++)
		if (arr[i] == x)
		break;
	swap(arr[i], arr[r]);

	
	i = l;
	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] <= x)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

int medianofarr(int arr[], int n)
{
	sort(arr, arr+n); 
	return arr[n/2]; 
}


int kthSmallestelement(int arr[], int l, int r, int k)
{
	
	if (k > 0 && k <= r - l + 1)
	{
		int n = r-l+1; 

		
		int i, median[(n+4)/5];
		for (i=0; i<n/5; i++)
			median[i] = medianofarr(arr+l+i*5, 5);
		if (i*5 < n) 
		{
			median[i] = medianofarr(arr+l+i*5, n%5);
			i++;
		}

		
		int medianofmedian ; 
		if(i == 1){
			medianofmedian = median[i-1] ; 
		}
		else{
			medianofmedian = kthSmallestelement(median, 0, i-1, i/2);
		}

		
		int pos = partition(arr, l, r, medianofmedian);

		
		if (pos-l == k-1)
			return arr[pos];
		if (pos-l > k-1) 
			return kthSmallestelement(arr, l, pos-1, k);

		
		return kthSmallestelement(arr, pos+1, r, k-pos+l-1);
	}

	
	return INT_MAX;
}




int main()
{
	int arr[] = {12, 3, 5, 7, 4, 19, 26};
	int n = sizeof(arr)/sizeof(arr[0]), k = 5;
	cout << "K'th smallest element is "
		<< kthSmallestelement(arr, 0, n-1, k);
	return 0;
}
