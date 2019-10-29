#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define NUM 100
struct cjb{ 
	char name;
	int xuehao;
	int Philosophy;
	int Economics;
	int Law;
	int Math;
	int English;
	int Art;
}cjb[NUM];
void randdata(int *p)
{
	int j=0;
	int t,i;
	int i60=0;
	int i90=0;
	srand((unsigned)time(NULL));
	for(i=0;i<NUM;i++)
	{
		t=rand()%NUM+1;
		if(t<60)
		{
			
			if(i60<(NUM/10))
			{	i60++;
				*(p+i)=t;
			}
			else
			{
				i--;
			}
		}
		else if(t>90)
		{
			
			if(i90<(NUM/10))
			{	i90++;
				*(p+i)=t;
			}
			else
			{
				i--;
			}
		}
		else
		{
			*(p+i)=t;
		}
	}
}

void randname(char *p)
{
	int temp=0;
	char str;
	srand((unsigned)time(NULL));
	for(int i=0;i<NUM;i++)
	{
	   temp=rand()%2+2;
	   if(temp==2){
       str=(char)('A'+rand()%26);
       str=str+(char)('A'+rand()%26);
       *(p+i)=str;
	   }
	   if(temp==3){
       str=(char)('A'+rand()%26);
       str=str+(char)('A'+rand()%26);
       str=str+(char)('A'+rand()%26);
       *(p+i)=str;
	   }
	}
}

int main()
{	int k,m;
	char *p1;
	int *p2,*p3,*p4,*p5,*p6,*p7;
	char Name[NUM];
	int Philosophy[NUM];
	int Economics[NUM];
	int Law[NUM];
	int Math[NUM];
	int English[NUM];
	int Art[NUM];
	
	p1=Name;
	p2=Philosophy;
	p3=Economics;
	p4=Law;
	p5=Math;
	p6=English;
	p7=Art;
	
	randname(p1);

	randdata(p2);
	randdata(p3);
	randdata(p4);
	randdata(p5);
	randdata(p6);
	randdata(p7);
	
	for(k=0;k<NUM;k++)
	{
		cjb[k].name=Name[k];
		cjb[k].xuehao=k;
		cjb[k].Philosophy=Philosophy[k];
		cjb[k].Economics=Economics[k];
		cjb[k].Law=Law[k];
		cjb[k].Math=Math[k];
		cjb[k].English=English[k];
		cjb[k].Art=Art[k];
	}
	
	for(m=0;m<NUM;m++)
	{
		printf("name :%s\n",cjb[m].name);
		printf("xuehao :%d\n",cjb[m].xuehao);
		printf("Philosophy :%d\n",cjb[m].Philosophy);
		printf("Economics :%d\n",cjb[m].Economics);
		printf("Law :%d\n",cjb[m].Law);
		printf("Math :%d\n",cjb[m].Math);
		printf("English :%d\n",cjb[m].English);
		printf("Art :%d\n",cjb[m].Art);
		printf("\n");
	}
	
	return 0;
}

