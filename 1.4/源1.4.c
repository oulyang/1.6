#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//������һ�������Ԫ�ص�ַ��������������
//	//1.sizeof����������--��������ʾ�������飻
//	//2.&�������������������������飬ȡ��������������ĵ�ַ��
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
////ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð����������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int flag = 1;//�Ż�
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)//ע����������j<sz-1-i
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,5,4,6,7,9,8,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	//ð�ݺ��� ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3 },{ 4, 5 } };//3������ �Ȱ�һ�з����ٷ���һ��   �Ӵ�����
//	//��ά�����������е���ֵ����ʡ
//	//char arr1[][4] = { {1,2,3,},{4,5,6,7} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p=arr[%d][%d]\n", &arr[i][j], i, j);
//			//int arr2[i][j];
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() 
//{
//	int arr[3][4] = { {1,2,3 },{ 4, 5 } };//3������ �Ȱ�һ�з����ٷ���һ��   �Ӵ�����
//	//��ά�����������е���ֵ����ʡ
//	//char arr1[][4] = { {1,2,3,},{4,5,6,7} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//int arr2[i][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//TDD������������ ���ú��������
//쳲��������У���������Ϊǰ�������ĺͣ�����1 1 2 3 5 8 13...
//int count = 0;
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////int Fib(int n)
////{
////	//if (n == 3)
////	////{
////	////	count++;
////	////}
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fib(n);
//	printf("���Ϊ%d", ret);
//	return 0;
//}
//n�Ľ׳�
//int mal1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int mal2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * mal2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = mal2(n);
//	printf("�׳˽��Ϊ%d", ret);
//	return 0;
//}
//int len(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + len(arr + 1);
//	else
//		return 0;
//	//�жϵ�һ���ַ��Ƿ�Ϊ\0
//	//len("hello);
//	//1+len("ello");
//	//...
//	//1+1+1+1+1+len("\0")
//}
////int len(char* arr)
////{
////	int count = 0;
////	while (*arr != '\0')
////	{
////		count++;
////		arr++;
////	}
////	return count;
////}
//int main()
//{
//	char arr[] = "hello";
//	int ret = len(arr);
//	printf("len=%d", ret);
//	//int ret = strlen(arr);
//	//printf("%d ", ret);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)//1.ע����������
//	{
//		print(n / 10);//2.ÿ�εݹ��Խ��Խ�ӽ�����
//	}
//	printf("%d ", n % 10);
//	//print(123  4)
//	//print(12 3)
//	//print(1  2)
//	//print(1)
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//%10��/10�� 4 3 2 1
//	print(num);
//	return 0;
//
//}
//int main()
//{
//	printf("hello");
//	main();
//	return 0;
//}