#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
//int main()
//{
//	//�ַ�ת������
//	// int tolower(int c)
//	// int toupper(int c)
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}












//strerror
//int main()
//{
//	//errno��һ��ȫ�ִ�����ı���
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}











//strtok->�и��ַ���
//int main()
//{
//	char arr[] = "192.168.12.131";
//	const char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}










//strstr �����ַ���
//char* my_strstr( const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	const char* s1 = p1;
//    const char* s2 = p2;
//	char* cur =(char*) p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* p1 = "ab";
//	const char* p2 = "bcd";
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}










//strncmp-�ַ����Ƚ�
//int strncmp(const char* str1, const char* str2, size_t  count)
//{
//
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdqwer";
//	int ret=strncmp(p1,p2,4);
//	printf("%d\n", ret);
//	return 0;
//}








//strncat
//int main()
//{
//    char arr1[30] = "hello";
//    char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n",arr1);
//	return 0;
//}












//strncpy
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5);
//   ����
//	printf("%s\n", arr1);
//	return 0;
//}








//strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return(*str1 - *str2);
//}
//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "abc";
//	int ret = strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}












//strcat
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest!= '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}











//strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
////	//����srcָ����ַ�����destָ��Ŀռ������'\0'L
//	while (*dest++ = *src++)
//   {
//		/**dest=*src;
//		dest++;
//		src++ */
//		;
//	}
////	//���ؿռ����ʼ��ַ
//	// *dest=*src  //��ӡ��\0��
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}















//strlen  2.�ݹ�д��->��������ʱ����
//int main()
//{
//
//	return 0;
//}













//strlen  1.������
// size_t���޷��ŵ�
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}