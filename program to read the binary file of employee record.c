#include<stdio.h>
int main()
{
    typedef struct employee
    {
        int emp_code;
        char name[20];
        int hra;
        int da;
        int ta;
    }EMPLOYEE;

    FILE *fp;
    EMPLOYEE e;
    system("cls");
    fp = fopen("employee.txt","rb");
    if(fp == NULL)
    {
        printf("\n File opening error");
        return 0;
    }
    printf("\n The Details of the employee are");
    while(1)
    {
        fread(&e,sizeof(e),1,fp);
        if(!feof(fp))
        {
         printf("\n\n Employee Code: %d",e.emp_code);
        printf("\n Name: %s",e.name);
        printf("\n HRA, DA, TA: %d %d %d",e.hra, e.da, e.ta);

        }else{
            break;
        }


    }
    fclose(fp);
    return 0;
}
