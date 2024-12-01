#include <stdio.h>
#include <string.h>

int main() {

	printf("\n");
	char s1[20] = {'A', 'Y', 'O', 'N', 'A', '\0'};
	char s2[20] = {'A', 'S', 'I', 'M', '\0'};
	char s3[20] = "Black Hole";
	char s4[] = "Computer Science";
	char *cp = "Super String";
	char s5[20];
	char s6[20];
	char *cp1 = NULL;

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("cp: %s\n\n", cp);
	printf("s1[0] = %c, s2[1] = %c, s3[2] = %c, cp[3] = %c\n\n", s1[0], s2[1], s3[2], cp[3]);

	printf("Enter name of student 5: ");
	scanf("%s", s5);
	printf("s5: %s\n", s5);

	getchar();

	printf("Enter name of student 6: ");
//	scanf("%[^\n]s", s6);
//	gets(s6);
	fgets(s6, 20, stdin);
	printf("%s\n", s6);

	printf("Enter a name for cp1 pointer: ");
//	gets(cp1);   // This won't work
//	fgets(cp1, 15, stdin);

	printf("Length of s2: %d\n", strlen(s2));
	printf("Length of cp: %d\n", strlen(cp));

	// Testing the difference between str and &str
	char str[10];
	scanf("%s", str);

	printf("&str: %u\n", &str);
	printf("str: %u\n", str);

	printf("&str[0] + 1: %u\n", &str[0] + 1);

	printf("&str + 1: %u\n", &str + 1);
	printf("str + 1: %u\n", str + 1);

	return 0;
}