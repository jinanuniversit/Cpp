#include<iostream>
using namespace std;
void SelectSort(int *arr, int n);
int main()
{
	int a[] = { 0,2,4,6,8,1,3,5,7,9 };
	cout << "ÅÅÐòÇ°£º" ;
	for (int m = 0; m < 10; m++)
		cout << a[m] << " ";
	SelectSort(a, 10);
	cout << endl;
	cout << "ÅÅÐòºó£º";
		for (int k = 0; k < 10; k++)
			cout << a[k] << " " ;
		cout << endl;

	system("pause");
	return 0;
}
void SelectSort(int *arr, int n)
{
	for (int i = 0; i < n;i++)
	{
		int min = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		std::swap(arr[i], arr[min]);
	}
}