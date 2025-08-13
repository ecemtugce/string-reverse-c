#include<stdio.h>
#include<string.h>
void fonk(char *str){
        int i=0;
        char temp;
        int len=strlen(str);
        for(i;i<len/2;i++){
            temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
}
int main(){
    char metin[51];
    printf("enter a string please(most 50 character)=");
    fgets(metin,sizeof(metin),stdin);
    metin[strcspn(metin, "\n")] = '\0';
fonk(metin);
printf("%s",metin);
}