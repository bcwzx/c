#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ļ��������д
int main()
{
	//feof();//EOF-end of file �ļ�������־
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("open file text2.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}







//perror
//int main()
//{
//	//feof();//EOF-end of file �ļ�������־
//	FILE* pf = fopen("text2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file text2.txt");
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}









//rewind  �ļ�ָ��ص���ʼλ��
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	int ch=fgetc(pf);
//	//int pos = ftell(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//ftell
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	//fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}











//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "����",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1,pf);
//
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}