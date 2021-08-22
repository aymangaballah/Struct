#include <stdio.h>
#include <stdlib.h>
struct course { //define struct named course that have many variable which just declaring their
	int credit_hours_math;
	int credit_hours_programming;
	float score_math;
	float score_programming;
	int total_credit_hours;
};
struct student {//define struct named student that have many variable which just declaring their(arr and GPA)
	char *arr[20];
	float GPA;
};
int main(){
	struct course c1;//declare variable name c1 data type struct course
	struct student s1;//declare variable name s1 data type struct student
	s1.arr[0]={"math"};// push first item to arr  that is where in s1 object named math
	s1.arr[1]={"programming"};// push second item to arr  that is where in s1 object named programming
	int chm=c1.credit_hours_math=3;// inital value to credit hours of math course that is where in c1 object
	int chp=c1.credit_hours_programming=4;//inital value to credit hours of programming course that is where in c1 object
	int total=c1.total_credit_hours=(chm+chp);// inital value to total credit hours(math,programming)that is equal sum of 
	
	printf("enter your score in %s:(out of 4)\n\n",s1.arr[0] );//take score of math from user
	scanf("%f",&c1.score_math);
	float sm=c1.score_math;
	printf("enter your score in %s:(out of 4)\n\n",s1.arr[1] );//take score of programming from user
	scanf("%f",&c1.score_programming);
	float sp=c1.score_programming;
	
	s1.GPA=((sm*chm)+(sp*chp))/total;// calculate GPA by sum of products these variable divided by total of credit hours
	printf("\nYour GPA is %.2f \n\n",s1.GPA);
	
	system("pause");
	return 0;
}

