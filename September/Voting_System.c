#include <stdio.h>
int main() {
    int vote;
    int x=5,y=3,z=8,c;
    char s;
    printf("Do you want to continue?y for yes and n for no: ");
    scanf("%c",&s);
    if(s=='y')
    {
        while(1)
        {
            printf("Enter 1 for X\nEnter 2 for Y\nEnter 3 for Z");
            printf("\nEnter your vote: ");
            scanf("%d",&vote);
            switch(vote)
            {
                case 1:
                x=x+1;
                printf("You voted for X\n");
                break;
                case 2:
                y=y+1;
                printf("You voted for Y\n");
                break;
                case 3:
                z=z+1;
                printf("You voted for Z\n");
                break;
                default:
                printf("Wrong Choice\n");
            }
            printf("Do you want to continue?\n");
            scanf("%c",&c);
            if(c==10)
            break;
        }
    }
    printf("\nFinal Vote Count:\n");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);
    printf("Thanks For Voting!\n");
}
