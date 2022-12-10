#include <stdio.h>

#define MAXLINE 1000

int mreverse(char s[], char r[], int maxline);

main ()
{
    int len;
    char line[MAXLINE], rline[MAXLINE];
    while ((len=mreverse(line,rline,MAXLINE))>0)
        printf ("%s",rline);
    return 0;
}

int mreverse (char s[], char r[], int lim)
{
    int i,j,c;
    for (i=0;i<lim-1&&((c=getchar())!=EOF)&&c!='\n';++i)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        ++i;
    }
    s[i]='\0';

    c=i;

    for (j=0;i>1;--i)
    {
        r[j]=s[i-2];
        ++j;
    }
    r[j]='\n';
    r[++j]='\0';

    return c;
}


