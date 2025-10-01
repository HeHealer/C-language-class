//5.WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.

#include<stdio.h>
int main(){
    int l1,l2,l3,b1,b2,b3,p1,p2,p3,max;
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d%d",&l1,&b1);
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d%d",&l2,&b2);
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d%d",&l3,&b3);
    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    max=(p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
    printf("Perimeter of rectangle 1: %d\n",p1);
    printf("Perimeter of rectangle 2: %d\n",p2);
    printf("Perimeter of rectangle 3: %d\n",p3);
    (max==p1)?printf("Rectangle 1 has the highest perimeter.\n"):(max==p2)?printf("Rectangle 2 has the highest perimeter.\n"):printf("Rectangle 3 has the highest perimeter.\n");
}
