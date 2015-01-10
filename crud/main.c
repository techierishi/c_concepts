#include <stdio.h>
#include <stdarg.h>
#include "main.h"


void getEmpValAndInsert();
int insertEmp(emp_model *emp);

int insertEmp(emp_model *emp){
	
   char *sql;

   sql = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  \
         "VALUES (%s, %d, %s, %g);";

	//printf("%s\n", emp->ename);
	//printf("%d\n", emp->eage);
	//printf("%s\n", emp->addrss);
	//printf("%g\n", emp->salary);

   sql = varconcat(sql,emp->ename,emp->eage,emp->addrss,emp->salary);

   printf("%s\n", sql);

   free(emp);
}

int main(int argc, char* argv[]){

	int opt;
	
	printf("1 : Insert student \n");
	printf("2 : Show student \n");

	printf("Enter you choice :");
	scanf("%d",&opt);

	//createDb();

	printf(" Your choice is %d \n", opt);

	switch(opt){
		case 1:
		getEmpValAndInsert();
		break;
		case 2:

		break;
	}
	return 0;
}

void getEmpValAndInsert(){

	emp_model em;
	printf(" Enter name :");
	scanf("%s",em.ename);

	printf(" Enter age :");
	scanf("%d",&em.eage);

	printf(" Enter address :");
	scanf("%s",em.addrss);

	printf(" Enter salary :");
	scanf("%g",&em.salary);


	insertEmp(&em);
}




