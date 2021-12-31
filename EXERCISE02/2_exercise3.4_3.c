#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ��һ�����������в��Ҿ����ĳ�����֣����ֲ��ң�
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
            break;      //����Ҫ�У�����left=right��������ѭ��
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
    int length = sizeof(arr) / sizeof(arr[0]);//strlen�Ǽ����ַ�������
    int index = 0;//��¼�±�
    index = find(n,arr,length);
    printf("%d", index);

    return 0;
}




//��ˢ��break��ѭ��û�뵽���ҷ���ֵ��������
 
// �Լ��趨�������ҵ������±꣬û�ҵ�����-1
int Seek_n(int n, int arr[], int len) {
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;

		// ��һ��д�Ĵ������
		/*if (arr[mid] > n) {
			right = mid - 1;
		}
		if (arr[mid] < n) {
			left = mid + 1;
		}*/
		
		// �޸ģ�
		if (arr[mid] > n) {
			right = mid - 1;
		}
		else if (arr[mid] < n) {
			left = mid + 1;
		}
		else {
			// ��arr[mid] == n,left==right���˳�ѭ��
			break;
		}
	}

	// ��һ��д�Ĵ������
	/*if (left > right) {
		return mid;
	}
	return -1;*/

	// �޸ĵ�һ�Σ������Ǵ�����Ϊ���ܵ�left < rightʱҲ�����ҵ������ֲ�break����ѭ����
	/*if (left == right) {
		return mid;
	}
	return -1;*/

	// �޸ĵڶ��Σ�
	if (left > right) {
		return -1;
	}
	return mid;
}

//�Ż���
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
			//��arr[mid] == n,left==right��ֱ�ӷ���mid
			return mid;
		}
	}
	return -1;
}

int main() {

	int arr[] = { 0, 1, 2, 3, 4, 5 };
	// ��Ҫ������� 
	int n = 0;
	scanf("%d", &n);
	// ���ղ��ҷ���ֵ
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = Seek_n(n, arr, len);
	if (ret != -1) {
		printf("���ҵ����±�Ϊ%d\n", ret);
	}
	else {
		printf("����ʧ��\n");
	}

	return 0;
}