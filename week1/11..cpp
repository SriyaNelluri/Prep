#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6,7,8,9,10};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	reverse(arr, 0, n-1);
	
	cout << "after" << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	

	
	return 0;
}

