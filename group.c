#include <stdio.h>
#include <stdlib.h>


void member1(void){
	printf("Shawn Bingham\n");
	printf("Junior\n");
	printf("Major: Computational Physics\n");
	printf("From: Sun Valley, Id\n");
}
void member2(void){
}
void member3(void){
}
void member4(void){
}
void member5(void){
}

int main(void){
	printf(\n----------------------------------\n");
	printf(\nOur Group is called: \n");
	printf(\nGroup Members:\n");
	printf(\nShawn Bingham\n");
	printf(\nMax Brandwine\n");
	printf(\nCole Brooks\n");
	printf(\nNathan Burkhart\n");
	printf(\nKevin Christensen\n");
	printf(\n----------------------------------\n");
	
	member1();
	member2();
	member3();
	member4();
	member5();
   
   return 0;  
}