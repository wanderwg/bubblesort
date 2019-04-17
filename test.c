#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void BubbleSort(int arr[], int size) {
	//ÿ������СԪ�أ��Ӻ���ǰ����
	//�����������Ϊ����������[bound,size)������������(0,bound]
	//��ʼ����£�����������Ϊ��������[0,size)
	int bound = 0;
	//��Ҫ����size-1��
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