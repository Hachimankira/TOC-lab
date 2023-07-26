#include<stdio.h>
#define EOS '\0'
int main(){
    char c, inpstr[50];
    int i=0, q=0;
    printf("Enter String: ");scanf("%s", inpstr);
    c = inpstr[i];
    printf("\n");
    printf("%s ", inpstr);
    while (c != EOS) {
        if(q==0 && c=='0')
        q = 1;
        else if(q==0 && c=='1')
        q = 3;
        else if(q==1 && c=='0')
        q = 3;
        else if(q==1 && c=='1')
        q = 2;
        else if(q==2 && c=='0')
        q = 2;
        else if(q==2 && c=='1')
        q = 2;
        else if(q==3 && c=='0')
        q = 3;
        else if(q==3 && c=='1')
        q = 3;
        else{
            q = 4;
            break;
        }
        i++;
        c = inpstr[i];
    }   
if(q==1 || q==3)
printf(" accepted");
else
printf(" not accepted");
printf("\n");
return 0;
}