#include<stdio.h>
#define EOS '\0'
int main(){
    char c, inpstr[50];
    int i=0, q=0;
    printf("Enter String: ");
    scanf("%s", inpstr);
    c = inpstr[i];
    printf("\n");
    printf("%s ", inpstr);
    while (c != EOS) {
    if(q==0 && c=='a')
    q = 1;
    else if(q==0 && c=='b')
    q = 0;
    else if(q==1 && c=='a')
    q = 1;
    else if(q==1 && c=='b')
    q = 2;
    else if(q==2 && c=='a')
    q = 3;else if(q==2 && c=='b')
    q = 0;
    else if(q==3 && c=='a')
    q = 1;
    else if(q==3 && c=='b')
    q = 0;
    else{
    q = 4;
    break;
    }
    i++;
    c = inpstr[i];
}
if(q==3)
printf(" accepted");
else
printf(" not accepted");
printf("\n");
return 0;
}