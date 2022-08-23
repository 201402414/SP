#include<stdio.h>
#include<string.h>
// 201402414 장수훈 
struct student { 
	char *ini;
	int num;
}a, b;

void swap(struct student* aa, struct student* bb) {
	struct student temp;
	temp = *aa;
	*aa = *bb;
	*bb = temp;
}

void main() {
	
	a.ini = "JSH";
	a.num = 201402414;
	b.ini = "JBK";
	b.num = 0;
	printf("myname : %s \nmynumber : %d \ntaname: %s \nclass : %d \n",a.ini,a.num,b.ini,b.num);

	printf("[before] myname = %s, taname : %s \n",a.ini,b.ini);
	printf("[before] mynum = %d, tanum : %d\n",a.num,b.num);
	swap(&a, &b);

	printf("swap Funtion call !! \n");

	printf("[after] myname = %s, taname : %s \n", a.ini, b.ini);
	printf("[after] mynum = %d, tanum : %d \n", a.num, b.num);
}


