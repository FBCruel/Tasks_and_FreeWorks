#include <stdio.h>
#include <stdlib.h>

void fun1(int a,int b);
void fun2(int *c,int *d);
void distance(int km, int *m, int *cm);
void modifier(int *first, int *sec);

int main(void){
	//question1
	int a =5;
	int *p = &a;
	printf("%d %d\n",a,*p);
	printf("%p\n",p);// address of variable a
	a=6;
	printf("%d %d\n",a,*p);
	*p = 7;
	printf("%d %d\n",a,*p);	
	(*p)++;
	printf("%d %d\n",a,*p);
	*p++;
	printf("%d %d\n",a,*p);
	printf("when we use () marks, it takes adress of *p. However when we didn't use (), it takes the value in adress of p");
	
	//question2
	int c, d;
	c=5;
	d=4;
	printf("\nIn the main function => %d %d\n",c,d);
	fun1(c,d);
	printf("After the fun1 function => %d %d\n",c,d);
	fun2(&c,&d);
	printf("After the fun2 function => %d %d\n",c,d);
	printf("In the fun1 function, numbers change in local. However if we send the adress of variables like fun2, the values which is hold in adress will change\n");
	
	//question3
	int km, m, cm;
	printf("\nenter a kilometer value: ");
	scanf("%d", &km);
	distance(km, &m, &cm);
	
	//question4
	int first, sec, cont=0;
	while(cont < 5){
		printf("enter a pair of integer: ");
		scanf("%d %d", &first, &sec);
		modifier(&first, &sec);
		cont++;
	}
	return 0;	
}

void fun1(int c,int d)
{
c=12;
d=15;
printf("In the function fun1 => %d %d\n\n",c,d);
}
void fun2(int *c,int *d)
{
*c=12;
*d=15;
printf("In the function fun2 => %d %d\n\n",*c,*d);
}
void distance(int km, int *m, int *cm){
	*m = km * 1000;
	*cm = km * 1000000;
	printf("it is %d meter or %d cantimeter\n\n", *m, *cm);
}
void modifier(int *first, int *sec){
	int number = *first, ef = *sec;
	while(ef > 0){
		number = number / 10;
		ef--;
	}
	*first = number;
	printf("%d\n", *first);	
}










