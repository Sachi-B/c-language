#include<stdio.h>

struct hotel{
    char hname[30];
    char address[40];
    char grade[10];
    int rcharges;
    int rooms;
};
void display(struct hotel h);
void main()
{
    struct hotel h;
    int i,n;
    printf("\nEnter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter the Hotel name:");
    scanf("%s",h.hname);
    printf("\nAddress:");
    scanf("%s",h.address);
    printf("\nGrade:");
    scanf("%s",h.grade);
    printf("\nRoom charges:");
    scanf("%d",&h.rcharges);
    printf("\nEnter the no of rooms:");
    scanf("%d",&h.rooms);
    display(h);
    }
}
    void display(struct hotel h)
    {
        int i,n;
     for(i=0;i<n;i++)
    {  
    printf("\nHotel name is %s",h.hname);
    printf("\nHotel address is %s",h.address);
    printf("\nHotel grade is %s",h.grade);
    printf("\nHotel room charge is %d",h.rcharges);
    printf("\nNo of rooms in hotel are %d",h.rooms);
    }
    }
    

