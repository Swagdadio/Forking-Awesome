#include <stdio.h>

void member1(void){
	printf("Shawn Bingham\n");
	printf("Junior\n");
	printf("Major: Computational Physics\n");
	printf("From: Sun Valley, Id\n");
	printf("I'm a single father\n");
}
void member2(void) {
	printf("Max Brandwine\n");
	printf("2nd year\n");
	printf("Computer Science\n");
	printf("My dog\n");
	printf("Atlanta, GA (unfortunately)\n");
	printf("Nothing\n");
}
void member3(void) {
	printf("Name: Cole Brooks\n");
	printf("Year in school: Sophomore\n");
	printf("Major: Computer Science with Mathematics minor\n");
	printf("Hobbies: Linux, skiing, math, cars\n");
	printf("Grew up in: Missoula MT\n");
	printf("\n");
}
void member4(void) {
	printf("Nathan Burkhart\n");
	printf("1st year in school\n");
	printf("Computer Science Major\n");
	printf("Hobbies include video games and D&D\n");
	printf("Grew up in Hillsboro, Or\n");
	printf("Non-traditional freshman after taking a break for 6 years\n");	

}
void member5(void) {
	printf("Kevin Christensen.\n");
	printf("Like, third year or something. It's been on and off.\n");
	printf("Computer Science.\n");
	printf("Having coffee with old people.\n");
	printf("Anchorage, AK.\n");
	printf("Contrary to popular belief, I'm not actually a professional.\n");
}

int main(void) {
	printf("\n----------------------------------\n");
	printf("Our Group is called: Forking Awesome\n");
	printf("Group Members:\n");
	printf("Shawn Bingham\n");
	printf("Max Brandwine\n");
	printf("Cole Brooks\n");
	printf("Nathan Burkhart\n");
	printf("Kevin Christensen\n");
	printf("----------------------------------\n");

	member1();
	printf("----------------------------------\n");
	member2();
	printf("----------------------------------\n");
	member3();
	printf("----------------------------------\n");
	member4();
	printf("----------------------------------\n");
	member5();
	printf("----------------------------------\n");

	return 0;
}
