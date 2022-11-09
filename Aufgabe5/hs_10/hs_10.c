/*Name = Bala Krishna Gopala Krishnan
 * Aufgabe = 5.1*/

#include<stdio.h>
void tausche(int *ptr_1, int *ptr_2);
void tausche(int *ptr_1, int *ptr_2){
	int temp;
	temp = *ptr_1;
	*ptr_1 = *ptr_2;
	*ptr_2 = temp;
}
int main(){
	int a = 2;
       	int b = 3;
	int *ptr_1;
	int *ptr_2;
	ptr_1 = &a;
        ptr_2 = &b;	
	tausche(ptr_1, ptr_2);
	printf("\na = %d und b = %d\n", a, b);
	return(0);	
}
#include<stdio.h>
int main (){
	int var1 = 5;
	int var2 = 7;
	printf("var1 before : %d\n",var1);
	printf("var2 before : %d\n",var2);
	swap(&var1, &var2);
	printf("var1 after : %d\n",var1);
	printf("var2 after : %d\n",var2);
	return 0;
}
void swap(int* p1, int* p2){
	int a = *p1;
	*p1 = *p2;
	*p2 = a;
}

