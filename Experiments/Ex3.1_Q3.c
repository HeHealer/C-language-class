//3.WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter coordinates of the first  point(x1,y1)");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of the second  point(x2,y2)");
    scanf("%f%f",&x2,&y2);
    printf("Enter coordinates of the third  point(x3,y3");
    scanf("%f%f",&x3,&y3);
    float area=0.5*((x1*(y2-y3))+(x2*(y3-1))+(x3*(y1-y2)));
    if(area==0)
    {
        printf("The points are collinear");
    }
    else
    {
        printf("The points are not collinear");
    }
}