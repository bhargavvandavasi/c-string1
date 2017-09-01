i loved woth this logic and now im feeling like why wasted these many days by spending with friends ,family and with nonsense thingsso from now onwards 
i prepared to concentrate on programming which i like and also it gives money
let's start
with coding
#include<stdio.h>
void main()
{
char str[30],search[30];
int count1=0,count2=0,i=0,j=0;

printf("enter a string:");                                       conio.h and gets functions will not work with some compilers as far as i made search
gets(str);                                                       in google those functions will work with dos compilers and not with unix/linux compilers
printf("enter a search string:");                                instead u can use like this char *str,*search
gets(search);                                                                                 str="bhargav";
while(str[count1] != '\0')                                                                    search="rgv";
count1++;
while(search[count2] != '\0')
count2++;
for(i=0;i<count1-count2;i++)
{
for(j=i;j<i+count2;j++)
{
flag=1;
if(str[j] != serach[j-i])
{
flag=0;
break;
}
}
if(flag==1)
break;
}
if(flag==1)
printf("search successful");
if(flag==0)
printf("search not successful");
}
