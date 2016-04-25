#include<iostream>
using namespace std;
void BubleSort(int *arr, int n);
int main()
{
	int a[] = { 1,3,5,7,9,0,2,4,6,8 };
	cout << "ÅÅÐòÇ°£º";
	for (int m = 0; m < 10; m++)
	cout << a[m] << " " ;
    cout << endl;
	BubleSort(a, 10);
	cout << "ÅÅÐòºó£º";
	for (int k = 0; k < 10; k++)
	cout << a[k] << " " ;
    system("pause");
	return 0;
}
void BubleSort(int *arr, int n)
{
	for (int i = 0; i < n - 1;i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j]>arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
	}
}
