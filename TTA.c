#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000], n, i;
    printf("Press Tab+Enter key once you finish.\nStart writing...\n\n");
    scanf("%[^\t]s",&a);
    n=strlen(a);
    for(i=0; i<n; i++)
    {
        if(a[i]==32) printf(" ");
        else if(a[i]==10) printf("\n");
        else if(a[i]==39) printf(",");
        else if(a[i]==33) printf("!");
        else if(a[i]==63) printf("?");
        else if(a[i]==46) printf(".");
        else
        {
            if(a[i]<100&&!(a[i]==a[0]&&a[1]==32)) printf("0%d", a[i]);
            else printf("%d", a[i]);
        }

    }
}
