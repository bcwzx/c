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
	//ps->size = 0;//设置通讯录最初只有0个元素
}
void CheckCapacity(struct Contact*ps)
{
	if (ps->size==ps->capacity)
	{
		//增容
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");	
		}
	}
}
void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	//1.满了就增容
	//2.没满就不做任何操作
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
	/*if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}*/
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		//数据
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
	printf("请输入输出的人名字\n");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到了返回名字所在元素的下标
	//找不到返回-1
	pos = FindName(ps, name);
	//2.删除
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要查找人的名字\n");
	scanf("%s", name);
	 pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
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
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	FindName(ps, name);
    pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		printf("修改完成\n");
	}
}
void SortContact(struct Contact* ps)
{
	int i = 0;
	//外层循环=元素个数-1
	for (i = 0; i<ps->size-1; i++)
	{
		int j = 0;
		//内层循环(对比次数)=元素个数-当前轮数-1
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