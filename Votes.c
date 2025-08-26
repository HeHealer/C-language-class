#include <stdio.h>
int main() {
    int vote;
    int x=5,y=3,z=8;
    printf("Enter 1 for X\nEnter 2 for Y\nEnter 3 for Z");
    printf("\nEnter your vote: ");
    scanf("%d",&vote);
    switch(vote)
    {
        case 1:
        x=x+1;
        printf("You voted for X");
        break;
        case 2:
        y=y+1;
        printf("You voted for Y");
        break;
        case 3:
        z=z+1;
        printf("You voted for Z");
        break;
    }
    return 0;
}
