/*# 大学生信息管理系统
##功能需求分析
1.列出学生信息
2.按某种条件进行排序(name, age)
3.按某种条件进行查找功能(native, hobby)

//数据文件格式：
//#  name       cname  age gender native      mobile       qq           email               hobby
//# yukeshuang  岳克爽 24   男    河南     13240896712   1920197386     1920197386@qq.com   篮球,羽毛球 
*/

struct student
{
	char name[32];
	char cname[16];
	int age;
	char gender[4];
	char native[16];
	char qq[16];
	char email[32];
	char hobby[128];
};
typedef struct student stu_t;
