#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define PASSWORD "admin@123"

struct Student {
    int no,present,total;
    char name[100];
};

int login();
void add_attendance();
void monthly_report();
void low_attendance();
void summary();
void edit();
void delete_attendance();
void individual();

int main(){
    int choice;
    if(!login())
    {
        printf("Access Denied.\n");
        return 0;
    }

    do{
        printf("STUDENT ATTENDANCE SYSTEM!!\n");
        printf("Choose What you want to do?\n");
        printf("1. Add Attendance.\n2. Generate Monthly Report.\n3.Search Low Attendance.\n4.Class Summary.\n5.Edit Attendance.\n6.Delete Attendance.\n7.Individual Student Report.\n8.Exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            add_attendance();
            break;
        case 2:
            monthly_report();
            break;
        case 3:
            low_attendance();
            break;
        case 4:
            summary();
            break;
        case 5:
            edit();
            break;
        case 6:
            delete_attendance();
            break;
        case 7:
            individual();
            break;
        case 8:
            printf("Exiting....");
            break;
        default:
            printf("Invalid Choice.");
            break;
        }
    } while(choice!=8);

    return 0;
}

int login(){
    char pass[100];
    printf("Enter admin password: ");
    scanf("%s",pass);
    return strcmp(pass,PASSWORD)==0;
}

void add_attendance(){
    FILE *fp;
    fp=fopen("attendance.txt","a");
    if(!fp)
    {
        printf("ERROR\n");
        return;
    }

    struct Student s;
    {
        printf("Enter roll no.: ");
        scanf("%d",&s.no);
        getchar();
        printf("Enter name: ");
        fgets(s.name,sizeof(s.name),stdin);
        printf("Enter Total no. of days: ");
        scanf("%d",&s.total);
        printf("Enter Present days: ");
        scanf("%d",&s.present);
    };
    fprintf(fp,"%d\t%s\t%d\t%d\n",s.no,s.name,s.total,s.present);
    fclose(fp);
    printf("Entered Attendance has been recorded.\n");

}
void monthly_report()
{
    FILE *fp;
    fp=fopen("attendance.txt","r");
    if(!fp)
    {
        printf("Error\n");
        return;
    }

    int count=0;
    struct Student s;
    printf("MONTHLY ATTENDANCE REPORT\n");
    while(fscanf(fp,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present)==4)
    {
        float percent=(s.total>0)?((s.present*100.0)/s.total):0;
        printf("Roll No: %d\nName: %s\nPresent Days: %d\nPercent: %2f\n",s.no,s.name,s.present,percent);
    }

    fclose(fp);
}

void low_attendance()
{
    FILE *fp;
    fp=fopen("attendance.txt","r");
    if(!fp)
    {
        printf("Error\n");
        return;
    }

    int min_attendance;
    printf("Enter Minimum Attendance required: ");
    scanf("%d",&min_attendance);

    struct Student s;
    printf("Total students below %d attendance.\n",min_attendance);
    int found=0;
    while(fscanf(fp,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present)==4)
    {
        float percent=(s.total>0)?((s.present*100.0)/s.total):0;
        if(percent<min_attendance)
        {
            printf("Roll No: %d\nName: %s\nPresent Days: %d\nPercent: %2f\n",s.no,s.name,s.present,percent);
            found=1;
        }
    }

    if(!found)
    {
        printf("Not Found\n");
    }

    fclose(fp);
}

void summary()
{
    FILE *fp;
    fp=fopen("attendance.txt","r");
    if(!fp)
    {
        printf("Error\n");
        return;
    }

    int count=0;
    float total_percent=0.0;
    struct Student s;

    while(fscanf(fp,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present)==4)
    {
        if(s.total>0)
        {
            total_percent+=(s.present*100.0)/s.total;
        }
        count++;
    }

    if(count>0)
    {
        printf("Average Attendace: %.2f%%\n",total_percent/count);
    }
    else
    {
        printf("No records available.\n");
    }

    fclose(fp);
}

void edit()
{
    FILE *fp;
    FILE *temp;
    fp=fopen("attendance.txt","r");
    temp=fopen("temp.txt","w");
    if(!fp||!temp)
    {
        printf("ERROR\n");
        return;
    }

    int no,found=0;
    struct Student s;
    printf("Enter Roll no. you want to edit: ");
    scanf("%d",&no);
    char line[200];

    while(fgets(line,sizeof(line),fp))
    {
        sscanf(line,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present);
        if(s.no==no)
        {
            found=1;
            printf("Editing records of %s.\n",s.name);
            printf("Enter new total days: ");
            scanf("%d",&s.total);
            printf("Enter present days: ");
            scanf("%d",&s.present);
        }
        fprintf(temp,"%d\t%s\t%d\t%d\n",s.no,s.name,s.total,s.present);
    }

    fclose(fp);
    fclose(temp);
    remove("attendance.txt");
    rename("temp.txt","attendance.txt");

    if(found)
    {
        printf("New Record Updated Successfully\n");
    }
    else
    {
        printf("ERROR\n");
    }
}

void delete_attendance()
{
    FILE *fp;
    FILE *temp;
    fp=fopen("attendance.txt","r");
    temp=fopen("temp.txt","w");
    if(!fp || !temp)
    {
        printf("ERROR\n");
        return;
    }

    int no,found=0;
    struct Student s;

    printf("Enter the Roll No. you want to delete: ");
    scanf("%d",&no);

    while(fscanf(fp,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present)==4)
    {
        if(s.no==no)
        {
            found=1;
            continue;
        }
        fprintf(temp,"%d\t%s\t%d\t%d\n",s.no,s.name,s.total,s.present);
    }

    fclose(fp);
    fclose(temp);
    remove("attendance.txt");
    rename("temp.txt","attendance.txt");

    if(found)
    {
        printf("Record Deleted Successfully\n");
    }
    else
    {
        printf("ERROR\n");
    }
}

void individual()
{
    FILE *fp;
    fp=fopen("attendance.txt","r");
    if(!fp)
    {
        printf("ERROR\n");
        return;

    }

    int no,found=0;
    struct Student s;
    printf("Enter roll no.: ");
    scanf("%d",&no);
    while(fscanf(fp,"%d\t%[^\t]\t%d\t%d",&s.no,s.name,&s.total,&s.present)==4)
    {
        if(s.no==no)
        {
            found=1;
            float percent=0;
            percent=(s.total>0)?((s.present*100.0)/s.total):0;
            printf("Individual Report of %s\n",s.name);
            printf("Roll No.: %d\nName: %s\nTotal Days: %d\nPresent Days: %d\nAttendance: %.2f%%\n",s.no,s.name,s.total,s.present,percent);
            break;
        }
    }

    fclose(fp);
    if(!found)
    {
        printf("Error\n");
    }
}