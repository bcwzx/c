#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if(ps->data == NULL)
	{
		return ;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ ;
	//memset(ps->data,0,sizeof(ps->data));
	//ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}
void CheckCapacity(struct Contact*ps)
{
	if (ps->size==ps->capacity)
	{
		//����
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");	
		}
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//1.���˾�����
	//2.û���Ͳ����κβ���
	CheckCapacity(ps);
	//��������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		//����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);

        }
	}
}
static int FindName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
		
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	
	char name[MAX_NAME];
	int pos = 0;
	printf("�����������������\n");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	pos = FindName(ps, name);
	//2.ɾ��
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫ�����˵�����\n");
	scanf("%s", name);
	 pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);

	
	}
}
void ModifyContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	FindName(ps, name);
    pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		printf("�޸����\n");
	}
}
void SortContact(struct Contact* ps)
{
	int i = 0;
	//���ѭ��=Ԫ�ظ���-1
	for (i = 0; i<ps->size-1; i++)
	{
		int j = 0;
		//�ڲ�ѭ��(�Աȴ���)=Ԫ�ظ���-��ǰ����-1
		for (j = 0; j < ps->size-i-1; j++)
		{
			
			if (strcmp(ps->data[j].name, ps->data[j+1].name)<0)
			{
				struct PeoInfo tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
}
void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}