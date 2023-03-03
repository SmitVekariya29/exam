#include<stdio.h>
int s,m,p,c,e; 
int t,p,g;  

int r()
{
	      //s=science, m=maths, p=physics, c=chemistry, e=english
	
	printf("Enter Science mark:");
	scanf("%d",&s);
	
	printf("Enter Maths mark:");
	scanf("%d",&m);
	
	printf("Enter Physics mark:");
	scanf("%d",&p);
	
	printf("Enter Chemistry mark:");
	scanf("%d",&c);
	
	printf("Enter English mark:");
	scanf("%d",&e);
}

int i()
{
	//t=total, p=percentage, g=grade

	t=s+m+p+c+e;
	p=t/5;
	
	if (p>90)
		printf("Grade A");
	
	else if(p<=80 && p<90)
		printf("Grade B");
}

int main()
{
	printf("Science:   %d\n",s);
	printf("Maths:     %d\n",m);
	printf("Physics:   %d\n",p);
	printf("Chemistry: %d\n",c);
	printf("English:   %d\n",e);
	
	int r();
//	int i();
}