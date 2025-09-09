#include<stdio.h>
int main(){
    int a[10000],sum=0,count=0,even=0,odd=0,positive=0,negative=0;
    char choice;
    do
    {
        printf("Enter number %d: ",count+1);
        scanf("%d",&a[count]);
        sum+=a[count];
        if(a[count]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a[count]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        count++;
        printf("Do you want to enter another number? (y/n):\n ");
        scanf(" %c", &choice);
    }
    while(choice == 'y' || choice == 'Y');
    printf("Total numbers entered: %d\n",count);
    printf("Sum: %d\n",sum);
    printf("Even count: %d\n",even);
    printf("Odd count: %d\n",odd);
    printf("Positive count: %d\n",positive);
    printf("Negative count: %d\n",negative);
    printf("\nNumbers in reverse order:\n");
    for (int i=count-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("Alternating Even and Odd:\n");
    int even_no=0,odd_no=0,ans=0;
    while(ans<count)
    {
        while(even_no<count && a[even_no]%2!=0)
        even_no++;
        if(even_no<count)
        {
            printf("%d",a[even_no]);
            even_no++;
            ans++;
        }
        while(odd_no<count && a[odd_no]%2==0)
        odd_no++;
        if(odd_no<count)
        {
            printf("%d",a[odd_no]);
            odd_no++;
            ans++;
        }
    }
    printf("\n");
}