#define _CRT_SECURE_NO_WARNINGS 1

//描述一个学生-一些数据
//名字
//年龄
//电话
//性别


//struct 结构体关键字  stu-结构体标签  struct stu - 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1,s2,s3; //s1，s2,s3是三个全局的结构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct stu s1 = {"张三", 10, "121313131", "男"};//局部变量
//	stu s2 = { "吃饭", 20, "312131123", "女"};
//	return 0;
//}

struct s
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct s a;
	char *pc;
};
int main()
{   
	char arr[] = { "hello world" };
	struct T t = { "hehe", {10, 'f', "xiba", 3.12}, arr };
	printf("%s\n", t.ch);//hehe
	printf("%s\n", t.a.arr);//xiba
	printf("%lf\n", t.a.d);// 3.12
	printf("%s\n", t.pc);// hello world

	return 0;
}



typedef struct stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;

int main()
{ 

	return 0;
}
