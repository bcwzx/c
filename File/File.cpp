#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = { 100,3.14f,"abcdef" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//把格式化的数据转换为字符串存储到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr );
	//从buf中读取格式化的信息到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
	
	return 0;
}













//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0};
//	/*FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}*/
////格式化的输入数据
//	fscanf(stdin,"%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	/*printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;*/
//	return 0;
//}











//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}









//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//	/*gets(buf);
//	puts(buf);*/
//
//	return 0;
//}









//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}












//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgetc(buf,1024,pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgetc(buf,1024, pf);
//	/*printf("%s", buf);*/
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}









//int main()
//{
//	FILE*pf=fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	/*fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);*/
//	
//	//读文件
//	int ch=fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}









//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}










//int main()
//{
//	FILE* pfRead = fopen("TEST.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}










//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}





//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}