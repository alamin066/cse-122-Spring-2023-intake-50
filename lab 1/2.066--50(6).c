//problem no:71A
//problem name:way too long words

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a;
    char s[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",&s);
        a=strlen(s);
        if(a<=10)
        {
          printf("%s\n",s);
        }
        else{
            printf("%c",s[0]);
            printf("%d",a-2);
            printf("%c\n",s[a-1]);
        }
    }
    return 0;
}
