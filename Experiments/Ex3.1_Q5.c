//5.WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.

#include <stdio.h>
int main() {
    int length1, breadth1, length2, breadth2, length3, breadth3;
    int perimeter1, perimeter2, perimeter3;
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &length1, &breadth1);
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &length2, &breadth2);
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &length3, &breadth3);
    perimeter1 = 2 * (length1 + breadth1);
    perimeter2 = 2 * (length2 + breadth2);
    perimeter3 = 2 * (length3 + breadth3);
    int maxPerimeter = (perimeter1 > perimeter2) ? 
                        ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) 
                        : ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);
    printf("Perimeter of rectangle 1: %d\n", perimeter1);
    printf("Perimeter of rectangle 2: %d\n", perimeter2);
    printf("Perimeter of rectangle 3: %d\n", perimeter3);
    (maxPerimeter == perimeter1) ? printf("Rectangle 1 has the highest perimeter.\n") :
    (maxPerimeter == perimeter2) ? printf("Rectangle 2 has the highest perimeter.\n") :
    printf("Rectangle 3 has the highest perimeter.\n");
}
