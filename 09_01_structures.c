#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];

};


int main(){
int a = 34;
char b = 'g';
float d = 234.3543;


struct employee e1;
e1.code = 100;
e1.salary = 34.45;-

strcpy(e1.name,"Harry");
//printf("%d",e1.code);

printf("%d\n",e1.code);
printf("%d.3f\n",e1.salary);
printf(e1.name);

    
    return 0;

}