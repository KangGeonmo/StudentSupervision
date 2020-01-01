#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

void logo();
int menu();
void input();
void output();
void search();
void erase();
void end();

int count;

struct sungjuk *std, *first, *current;

struct sungjuk
{
	char name[100];
	int jumsu1;//컴퓨터프로그래밍
	int jumsu2;//대학수학1
	int jumsu3;//창의공학설계
	int jumsu4;//물리
	
	int rank;
	struct sungjuk *next;
};

int main(void)
{
	int m=0;
	logo();
	do
	{
		m=menu();
		if(1==m)
		{
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			printf("      1번을 입력하였습니다.\n");
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			input();
		}
		else if(2==m)
		{
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			printf("      2번을 입력하였습니다.\n");
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			output();
		}
		else if(3==m)
		{
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			printf("      3번을 입력하였습니다.\n");
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			search();
		}
		else if(4==m)
		{
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			printf("      4번을 입력하였습니다.\n");
			printf("━━━━━━━━━━━━━━━━━━━━\n");
			erase();
		}
		else if(5==m)
		{	end();
			exit(0);
		}
	}while(1);
}

void logo(void)
{
	while(1)
	{
	
	printf("\n\n\n\n");
	printf("\t\t  　　　　　　　　　　　　　　　　　　　　　　　　\n");
	printf("\t\t  　　　■■■　　　■　　　　　■　　■　■　　　\n");
	printf("\t\t  　　　　　　　　　■　　　　　■　　■　■　　　\n");
	printf("\t\t  　■■■■■■■　■　　　　■　■　■■■　　　\n");
	printf("\t\t  　　　■　■　　　■■　　　■　■　■　■　　　\n");
	printf("\t\t  　　■　　　■　　■　　　■　　　■■　■　　　\n");
	printf("\t\t  　　　■■■　　　■　　　　　　　　　　　　　　\n");
	printf("\t\t  　　　　　　　　　　　　　　　■■■■■　　　　\n");
	printf("\t\t  　　　■■■■■■　　　　　■　　　　　■　　　\n");
	printf("\t\t  　　　　　　　　　■　　　　■　　　　　■　　　\n");
	printf("\t\t  　　　　　　　　　■　　　　　■■■■■　　　　\n");
	printf("\t\t  　　　　　　　　　　　　　　　　　　　　　　　　\n");


	Sleep(1000);
	system("cls");


	printf("\n\n\n\n\n");
	printf("\t\t  　　　　　　　　　　　　　　　　　　　　　\n");
	printf("\t\t  　■■■■■　　■　　　■■■■　　　■　\n");
	printf("\t\t  　　　　　　■　■　　　　　　　■　　■　\n");
	printf("\t\t  　　　■　　■　■　　　　　　　■　　■　\n");
	printf("\t\t  　　　■　■　　■■　　　　　　■　　■　\n");
	printf("\t\t  　　　■　　　　■　　　　■■■　　　■　\n");
	printf("\t\t  　■■■■■■　■　　　■　　　　　　■　\n");
	printf("\t\t  　　　　　　　　■　　　■　　　　　　■　\n");
	printf("\t\t  　　■　　　　　　　　　■　　　　　　■　\n");
	printf("\t\t  　　■　　　　　　　　　　■■■■■　■　\n");
	printf("\t\t  　　　■■■■■■　　　　　　　　　　■　\n");
	printf("\t\t  　　　　　　　　　　　　　　　　　　　　　\n");
	Sleep(1000);
	system("cls");
	
	printf("\n\n\n\n\n");
	printf("\t\t1학년 1조\n");
	printf("\t\t\t┌─────────────┐\n");
	printf("\t\t\t│1260001│ 조장 │ 강건모  │\n");
	printf("\t\t\t│─────────────│\n");
	printf("\t\t\t│1260029│ 조원 │ 안중후  │\n");
	printf("\t\t\t│─────────────│\n");
	printf("\t\t\t│1260045│ 조원 │ 이호준  │\n");
	printf("\t\t\t│─────────────│\n");
	printf("\t\t\t│1260054│ 조원 │ 조근형  │\n");
	printf("\t\t\t└─────────────┘\n");
	
	
	printf("\n\n\n\n\n");
	printf("\t\t프로그램을 실행하려면 Enter를 누르세요.");
	
	
	if(getchar())
		break;
}
}

int menu(void)
{
	int n;
	system("cls");
	do
	{
		printf("\n\n\n");
		printf("\t\t▣▣실행하고자 하는 번호를 입력하세요▣▣\n");
		printf("\n");
		printf("\t\t  ┌───────────────┐\n");
		printf("\t\t  │▷▶▷▶▷ ① 입력 ◁◀◁◀◁ │\n");
		printf("\t\t  │〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓│\n");
		printf("\t\t  │▷▶▷▶▷ ② 출력 ◁◀◁◀◁ │\n");
		printf("\t\t  │〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓│\n");
		printf("\t\t  │▷▶▷▶▷ ③ 검색 ◁◀◁◀◁ │\n");
		printf("\t\t  │〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓│\n");
		printf("\t\t  │▷▶▷▶▷ ④ 삭제 ◁◀◁◀◁ │\n");
		printf("\t\t  │〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓│\n");
		printf("\t\t  │▷▶▷▶▷ ⑤ 종료 ◁◀◁◀◁ │\n");
		printf("\t\t  └───────────────┘\n");
		printf("\n\n");
	
		printf("번호입력 : ");
		scanf("%d",&n);
		if(n>=1 && n<=5)
			break;
		else
			system("cls");
			printf("잘못 입력하셨습니다.\n");
		
	}while(1);
	return n;
}

void input()
{
	char ans;
	std=(struct sungjuk*)malloc(sizeof(struct sungjuk));
	first=std;
	current=std;

	while(1)
	{
		count++;
			printf("이름을 입력하세요 :");
			scanf("%s",std->name);
			printf("\"컴퓨터프로그래밍\" 점수를 입력하세요 :");
			scanf("%d",&std->jumsu1);
			printf("\"대학수학1\"점수를 입력하세요 :");
			scanf("%d",&std->jumsu2);
			printf("\"창의공학설계\"점수를 입력하세요 :");
			scanf("%d",&std->jumsu3);
			printf("\"물리\"점수를 입력하세요 :");
			scanf("%d",&std->jumsu4);
			
			std->rank=1;
			std->next=NULL;
			printf("continue?(Y?N)");
			fflush(stdin);
			scanf("%c",&ans);

			if(toupper(ans) == 'Y')
			{
				std=(struct sungjuk*)malloc(sizeof(struct sungjuk));
				current->next=std;
				current=std;
			}
			else
			{
				current->next=std;
				break;
			}
	}
}

void output()
{
	int i;
	std=(struct sungjuk*)malloc(sizeof(struct sungjuk));

	std=first;
	system("cls");
	printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n");
	printf("이름   컴퓨터프로그래밍  대학수학1  창의공학설계  물리\n");
	printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n");

	for(i=0 ; i<count ; i++)
	{
		printf("%s\t%3d %15d%13d%13d\n",std->name,std->jumsu1,std->jumsu2,std->jumsu3,std->jumsu4);
		std=std->next;
		if(std->next == NULL)
			break;
	}
	printf("\n\n");
	printf("메인화면으로 돌아가려면 enter를 누르세요");
	getchar();
	getchar();
	
}
void search(void)
{
	int i,r;
	char search_name[100];
	std=(struct sungjuk*)malloc(sizeof(struct sungjuk));

	std=first;

	system("cls");
	printf("검색할 이름 입력 :");
	scanf("%s",search_name);

	for(i=0;i<count;i++);
	{
		r=strcmp(search_name, std->name);
		if(r==0)
		{
			printf("이름 : %s\n\t컴퓨터프로그래밍 : %d\n\t대학수학1 : %d\n\t창의공학설계 : %d\n\t물리 : %d",std->name,std->jumsu1,std->jumsu2,std->jumsu3,std->jumsu4);
		}		
		std=std->next;
	}
	printf("\n\n");
	printf("메인화면으로 돌아가려면 enter를 누르세요");
	getchar();
	getchar();
}

void erase(void)
{
	char search_name[100];
	struct sungjuk*p,*prev;

	printf("삭제할 이름 입력 :");
	scanf("%s",search_name);

	p=first;

	while(1)
	{
		if(strcmp(p->name,search_name) == 0)
		{
			prev->next = p->next;
			free(p);
			break;
		}
	
	prev=p;
	p = p->next;

	if(p->next == NULL)
		break;
	}
}

void end()
{
	
	system("cls");
	printf("\n\n\n");
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	printf("▒▒▒▒▦▦▦▦▦▦▦▒▒▒▦▒▒▒▒▒▦▒▒▒▦▦▦▦▒▒▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▦▒▒▒▒▦▒▒▒▦▒▒▒▦▒▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▦▒▒▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▦▒▒▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▒▦▒▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▦▦▦▦▦▦▒▒▒▦▒▒▦▒▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▒▒▦▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▒▒▦▒▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▒▒▒▦▦▒▒▒▦▒▒▒▒▦▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▦▒▒▒▒▒▒▒▒▒▦▒▒▒▒▦▦▒▒▒▦▒▒▒▦▒▒▒▒▒▒▒▒▒▒▒");
	printf("▒▒▒▒▦▦▦▦▦▦▦▒▒▒▦▒▒▒▒▒▦▒▒▒▦▦▦▦▒▒▒▒▒▒▒▦▒▒▒▒");
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	printf("\n\n\n\t\t\t    ");
}