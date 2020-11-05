//模拟实现strcmp（复制字符串）
#include<stdio.h>
void my_strcpy(char* dest, const char* src)//因为my_strcpy有返回值（为字符串地址），故用char*
//const在指针运用中的理解（const char* src：指针不能变）（ char*  const src：指针的内容不能变）
{
	while(*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//'\0'赋给*dest
}
int main()
{
	char arr1[] = "###";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
}