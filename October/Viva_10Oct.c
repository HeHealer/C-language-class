/*
Smart billing system.
Create a function to calculate subtotal for each item.
Function to compute and return GSt 5-10% 
Demonstarte pass by value by returning subtotal from function.
*/

#include<stdio.h>
int total1(int price,int quantity);
int main(){
    int price,quantity,subtotal,gst,total;
    printf("Enter the price of the item: ");
    scanf("%d",&price);
    printf("Enter the quantity of the item: ");
    scanf("%d",&quantity);
    subtotal=total1(price,quantity);
    if(subtotal>500)
    {
        gst=10;
    }
    else
    {
        gst=5;
    }
    total=subtotal+gst;
    printf("Subtotal is: %d\n",subtotal);
    printf("GST is: %d\n",gst);
    printf("Total is: %d",total);
}
int total1(int price,int quantity)
{
    int total1=price*quantity;
    return total1;
}