//#pragma warning(disable:4996)
#include <cstdio>
#include <iostream>
#include <Windows.h>
using namespace std;
#define LEN(x) sizeof(x) / sizeof(x[0])
//ŷ����ó���
int Euclid_Div()
{
	int a, b, r;
	cin >> a >> b;

	while (b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	cout << "���Լ�� :" << a << endl;

	return 0;
}


//ŷ����ü���
int  Euclid_Sub()
{
	int a, b;
	cin >> a >> b;

	while (b != 0) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}

	cout << "���Լ�� :" << a << endl;
	return 0;
}

/*
int Partition(int r[], int first, int end)
{
	int i = first, j = end;
	while (i < j)
	{
		while (i < j && r[i] <= r[j])
			j--;
		if (i < j)
		{
			int temp = r[i]; r[i] = r[j]; r[j] = temp;
			i++;
		}


		while (i < j && r[i] <= r[j])
			i++;
		if (i < j)
		{
			int temp = r[i]; r[i] = r[j]; r[j] = temp;
			j--;
		}
	}

	return i;

}


void QuickSort(int* array, int first, int end)
{
	if (first >= end)//��ʾ�Ѿ����һ����
	{
		return;
	}
	int pivot = Partition(array, first, end);	//��ֵ��λ��
	QuickSort(array, first, pivot - 1);
	QuickSort(array, pivot + 1, end);
}

int Select_Difference(int* array, int n)
{
	int result = array[n - 1] - array[0], k, temp;
	for (int i = 0; i < n - 1; i++)
	{
		temp = array[i + 1] - array[i];
		if (temp < result)
		{
			result = temp;
			k = i;
		}
	}
	
	return result;
	//return k;
}

//////////////////////////////////////////
//int n = 5;
//int array[5] = { 2,6,1,6,8 };
////cout << "����Ҫ���������鳤��:";
////cin >> n;
//////���䶯̬һά���� 
////int *array = new int[n];
//
////for (int i = 0; i < n; i++)
////	cin >> array[i];
//
//QuickSort(array, 0, LEN(array) - 1);
//
//cout << "������Ϊ:";
//for (int i = 0; i < n; i++)
//	cout << array[i] << " ";
//cout << endl << "�ӽ���Ϊ: " << Select_Difference(array, LEN(array));
//
////�ͷ�arr���� 
////delete[] array;
//////////////////////////////////////////////
*/


/*
int Select_Perfect(int number)
{
	int i, sum = 1;
	for (i = 2; i * i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
			if (i * i != number)
			{
				sum += number / i;
			}
		}
	}
	return sum == number;
}
////////////////////////////////
//int i;
//for (i = 2; i<100000; i++)
//{
//	if (Select_Perfect(i))
//		cout << i << endl;
//}
////////////////////////////////
*/
int main()
{
	
	system("pause");
	return 0;
}


