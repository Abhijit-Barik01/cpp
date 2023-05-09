//remove duplicate element from sorted array
//time complexity O(n) and auxilary space complexity O(1)
#include <iostream>
using namespace std;

int remove_duplicate(int arr[], int n)
{
	int res = 1;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}
int main()
{
	int arr[] = {1, 2, 3, 3, 5, 6, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = remove_duplicate(arr, n);
	cout << "after  the reverse array" << endl;
	for (int i = 0; i < x; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}