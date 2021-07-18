/*program to find lomgest word in sentence*/
#include<stdio.h>
int main(){
char s[100];
printf("enter the string\n");
fgets(s,sizeof(s),stdin);
int max=0,i,j=0,count=0,index;
char longest[30];
int l=strlen(s);
for(i=0;i<l;i++)
{
 if(s[i]!=' ')
 count++;
else
{
 if(count>max){
 max=count;
 index=i-max;}
count=0;
}
}
if(count>max)
 {
  max = count;
  index = l-max;
 }
for(i=index;i<index+max;i++)
{
longest[j]=s[i];
j++;
}
longest[j]='\0';
printf("longest word is %s and its length is %d",longest,max);









}
