//1.Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. 

#include<stdio.h>
int FACT(int n)
{
    return (n==0)?1:n*FACT(n-1);
}
int fact2(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res *=i;
    }
    return res;
}
int main(){
    int n,r,choice,n_fact,r_fact,nr_fact,ans;
    printf("Enter n and r(r<n): ");
    scanf("%d%d",&n,&r);
    if(r>n||r<0||n<0)
    {
        printf("Invalid");
        return 1;
    }
    printf("Choose method: 1.Recursive 2. Non recursive: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        n_fact=fact(n);
        r_fact=fact(r);
        nr_fact=fact(n-r);
    }
    else
    {
        n_fact=fact2(n);
        r_fact=fact2(r);
        nr_fact=fact2(n-r);
    }
    ans=n_fact/(r_fact*nr_fact);
    printf("C(%d,%d)=%d\n",n,r,ans);
}