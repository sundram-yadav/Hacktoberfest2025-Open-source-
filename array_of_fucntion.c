#include<stdio.h>

int ex1(char* str)
 {
	if(*str == '\0')
		return 0;
	else
		return 1 + ex1(str+1); // recursion ka matlab hi hota hai ki baar baar apne function ko bulaye
 }

int main(){
	char str[100];
	char str2[100];
	char str3[100];
	

	printf ("enter your string: ");
	scanf("%s",str);
	int result;
	result=ex1( str);
	printf("length of input string = %d\n",result);
	printf ("enter your second string: ");
	scanf("%s",str2);
	printf("length of input string Hello World = %d\n",ex1(str2));
	
	printf("length of input string Hello World = %d\n",ex1("Hello World"));
	//char arr[10]={'H','e','l','l','o'};
	char arr[10];
	arr[0]='H';
	arr[1]='e';
	arr[2]='l';
	arr[3]='l';
	arr[4]='o';
	printf("length of sequence of chars in arr = %d\n",ex1(arr));
}
