#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
//之前我们学习了简单选择排序的递归版；其实暴力搜索也可以解决
void SelectSort(int a[], int n)
//对a[0..n-1]元素进行递增简单选择排序
{
	int i, j, k;
	for (i = 0; i < n - 1; i++)	//进行n-1趟排序
	{
		k = i;			//用k记录每趟无序区中最小元素的位置
		for (j = i + 1; j < n; j++)	//在a[i+1..n-1]中穷举找最小元素a[k]
			if (a[j] < a[k])
				k = j;
		if (k != i)		//若a[k]不是最小元素,将a[k]与a[i]交换
			swap(a[i], a[k]);
	}
}