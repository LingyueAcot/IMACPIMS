#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int menu(){
	int ot;
	do{
        system("cls");
	printf("________________________________________________________\n");
	printf("|                  IMA部员管理系统                      |\n");
	printf("|_______________________________________________________|\n");
	printf("|                                                       |\n");
	printf("|                  1.登陆                               |\n");
	printf("|                  2.注册                               |\n");
	printf("|                  3.退出系统                           |\n");
	printf("|                  4.帮助                               |\n");
	printf("|                                                       |\n");
	printf("|_______________________________________________________|\n");
	printf("请输入数字选择选项\n");

	scanf("%c",&ot);
	}
	while(ot>'4' || ot<'1');
}
int adminlogin()
{
	char adminid[MAX],password[MAX];
	int judge1,judge2,flag = 0;
	do{
        printf("请输入管理员账号\n");
	scanf("%s",&adminid);
	printf("请输入密码\n");
	scanf("%s",&password);
        judge1 = strcmp(adminid,"10001");
        if (judge1==0)
	{
		judge2 = strcmp(password,"148694");
		if (judge2==0)
		{
			printf("登录成功");
			flag = 2;
			return 1;
		}
		else
		{
			printf("密码错误，请重试\n\n\n");
			flag = 1;
		}

	}
	else {
		printf("查无此管理员,请重试\n\n\n");
		flag = 1;
	}

	}while(flag==1);

	return 0;
}
