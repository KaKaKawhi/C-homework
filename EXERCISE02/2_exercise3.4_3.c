#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 在一个有序数组中查找具体的某个数字（二分查找）
int find(int n, int arr[],int length) {
    int left = 0;
    int right = length-1;
    int tmp = 0;
    while (left <= right) {
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }else if(arr[tmp] < n) {
            left = tmp + 1;
        }
        else {
            break;      //必须要有，否则当left=right，跳不出循环
        }
    }
    if (left > right) {
        return -1;
    }
    else {
        return tmp;
    }
}

int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);//strlen是计算字符串长度
    int index = 0;//记录下标
    index = find(n,arr,length);
    printf("%d", index);

    return 0;
}




//二刷，break出循环没想到，且返回值出现问题
 
// 自己设定函数：找到返回下标，没找到返回-1
int Seek_n(int n, int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;

		// 第一次写的错误代码
		/*if (arr[mid] > n) {
			right = mid - 1;
		}
		if (arr[mid] < n) {
			left = mid + 1;
		}*/
		
		// 修改：
		if (arr[mid] > n) {
			right = mid - 1;
		}
		else if (arr[mid] < n) {
			left = mid + 1;
		}
		else {
			// 当arr[mid] == n,left==right，退出循环
			break;
		}
	}

	// 第一次写的错误代码
	/*if (left > right) {
		return mid;
	}
	return -1;*/

	// 修改第一次：（还是错误，因为可能当left < right时也可能找到该数字并break跳出循环）
	/*if (left == right) {
		return mid;
	}
	return -1;*/

	// 修改第二次：
	if (left > right) {
		return -1;
	}
	return mid;
}

//优化：
int Seek_n(int n, int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (arr[mid] > n) {
			right = mid - 1;
		}
		else if (arr[mid] < n) {
			left = mid + 1;
		}
		else {
			//当arr[mid] == n,left==right，直接返回mid
			return mid;
		}
	}
	return -1;
}

int main() {

	int arr[] = { 0, 1, 2, 3, 4, 5 };
	// 所要查的数字 
	int n = 0;
	scanf("%d", &n);
	// 接收查找返回值
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = Seek_n(n, arr, len);
	if (ret != -1) {
		printf("已找到，下标为%d\n", ret);
	}
	else {
		printf("查找失败\n");
	}

	return 0;
}