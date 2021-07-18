/*program to find smallest word in sentence*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
printf("enter the string\n");
gets(s);
int i,j,count=0,index=0;
char smallest[30];
int l;
 l=strlen(s);
int min=l;
for(i=0;i<l;i++){
 if(s[i]!=' '){
 count++;}
else
{
 if(min>count)
 {
  min=count;
 index=i-min;
 }
count=0;
}
}
if(min>count)
 {
  min = count;
  index = l-min;
 }
 j=0;
for(i=index;i<index+min;i++)
{
smallest[j]=s[i];
j++;
}
smallest[j]='\0';
printf("smallest word is %s and its length is %d",smallest,min);

}
