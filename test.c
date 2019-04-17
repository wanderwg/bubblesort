#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void BubbleSort(int arr[], int size) {
	//每次找最小元素，从后往前排序
	//将整个数组分为待排序区间[bound,size)与已排序区间(0,bound]
	//初始情况下，待排序区间为整个数组[0,size)
	int bound = 0;
	//需要排序size-1次
	for (; bound < size; ++bound) {
		for (int cur = size - 1; cur > bound; --cur) {
			if (arr[cur - 1] > arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	int arr[] = { 5,14,10,1,20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}