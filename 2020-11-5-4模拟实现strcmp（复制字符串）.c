//////模拟实现strcmp（复制字符串）
#include<stdio.h>
#include<assert.h>//assert的头文件
char* my_strcpy(char* dest, const char* src)//因为my_strcpy有返回值（为字符串地址），故用char*
//const在指针运用中的理解（const char* src：指针不能变）（ char*  const src：指针的内容不能变）
{
	char* ret=dest;//这里ret可以保持dest的起点的地址
	assert(dest!=NULL);//断言,当为空指针就会出现问题
	assert(src!= NULL);//断言
	while (*dest++ = *src++)//后置++先赋值，后使用，当最后一位为‘\0’,则为假，退出循环
	{
		;
	}
	return ret;//这里直接return dest就会报错？？？？（因为dest的地址已经改变）
}
int main()
{
	char arr1[] = "###";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
}