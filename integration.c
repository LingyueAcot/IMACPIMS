#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int menu(){
	int ot;
	do{
        system("cls");
	printf("________________________________________________________\n");
	printf("|                  IMA��Ա����ϵͳ                      |\n");
	printf("|_______________________________________________________|\n");
	printf("|                                                       |\n");
	printf("|                  1.��½                               |\n");
	printf("|                  2.ע��                               |\n");
	printf("|                  3.�˳�ϵͳ                           |\n");
	printf("|                  4.����                               |\n");
	printf("|                                                       |\n");
	printf("|_______________________________________________________|\n");
	printf("����������ѡ��ѡ��\n");

	scanf("%c",&ot);
	}
	while(ot>'4' || ot<'1');
}
int adminlogin()
{
	char adminid[MAX],password[MAX];
	int judge1,judge2,flag = 0;
	do{
        printf("���������Ա�˺�\n");
	scanf("%s",&adminid);
	printf("����������\n");
	scanf("%s",&password);
        judge1 = strcmp(adminid,"10001");
        if (judge1==0)
	{
		judge2 = strcmp(password,"148694");
		if (judge2==0)
		{
			printf("��¼�ɹ�");
			flag = 2;
			return 1;
		}
		else
		{
			printf("�������������\n\n\n");
			flag = 1;
		}

	}
	else {
		printf("���޴˹���Ա,������\n\n\n");
		flag = 1;
	}

	}while(flag==1);

	return 0;
}
