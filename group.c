#include <stdio.h>
#include <stdlib.h>

void member1(void) {

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

}
void member4(void) {

}
void member5(void) {
  printf("Kevin Christensen.");
	printf("Like, third year or something. It's been on and off.");
	printf("Computer Science.");
	printf("Having coffee with old people.");
	printf("Anchorage, AK.");
	printf("Contrary to popular belief, I'm not actually a professional.");
}

int main(void) {
	printf("\n----------------------------------\n");
	printf("Our Group is called: \n");
	printf("Group Members:\n");
	printf("Shawn Bingham\n");
	printf("Max Brandwine\n");
	printf("Cole Brooks\n");
	printf("Nathan Burkhart\n");
	printf("Kevin Christensen\n");
	printf("\n----------------------------------\n");

	member1();
	member2();
	member3();
	member4();
	member5();

	return 0;
}
