#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void abbriviate(char *s){
    int k=0,flag=1,i,l,j=0;
    l=strlen(s);
    char a[l];
    for(i=l-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            flag=0;
            if(k>0)
            {
                a[j]='.';
                j++;
                a[j]=s[i+1];
                j++;

            }
            k=1;
        }
        if(flag==1)
        {
            a[j]=s[i];
            j++;
        }
        if(i==0)
        {
            a[j]='.';
            j++;
            a[j]=s[0];
            j++;

        }
    }
    for(i=j-1;i>=0;i--)
        printf("%c",a[i]);

}
int main(){
    char str[100];
    fgets(str,100,stdin);
    char *name=strtok(str,",");
    char *age=strtok(NULL,",");
    abbriviate(name);
    printf(",");
    abbriviate(age);
}