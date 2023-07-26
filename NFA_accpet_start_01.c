#include <stdio.h>
int main()
{ 
 enum states {q0, q1, qf}; 
 char input[20];
 enum states curr_state=q0;
 int i=0;
 int flag=0;
 printf("\n enter a binary string\t");
 gets(input);
 char ch=input[i];
 while(ch!='\0')
{
 switch(curr_state)
{ 
    case q0:
        if(ch=='0')
        curr_state=q1;
        else
        flag=1;
        break;
    case q1:
        if(ch=='1')
        curr_state=qf;
        else
        flag=1;
        break;
    case qf:
    if(ch=='0'|| ch=='1')
    curr_state=qf;
    break;
}
if(flag)
break;
ch=input[++i];
}
 if(curr_state==qf)
 printf("\n The string %s is accepted",input);
 else 
 printf("\n The string %s is rejected",input);
 return 0;
}
