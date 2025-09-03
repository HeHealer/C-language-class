# include<stdio.h>
int main()
{
    int n,n1=0,n2=1,c,d;
    printf("Enter a number you need to find: \n");
    scanf("%d",&d);
    printf("Enter other number: \n");
    scanf("%d",&n);
    printf("%d",n1);
    printf("%d",n2);
    for(int i=2;i<n;i++)
    {
        c=n1+n2;
        printf("%d",c);
        n1=n2;
        n2=c;
        if(c==d)
        {
            printf("Found\n");
        }
    }
}