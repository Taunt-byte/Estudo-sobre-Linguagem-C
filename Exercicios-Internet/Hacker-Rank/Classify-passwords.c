// Classify each of the n passwords as "weak" or "strong"

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int minimumNumber(int n, char password[]) {
int upper = 0, lower = 0, digit = 0, special = 0, v = 0;
for (int i = 0; i < strlen(password); i++) {
char ch = password[i];
if (isupper(ch)) {
upper++;
} else if (islower(ch)) {
lower++;
} else if (isdigit(ch)) {
digit++;
} else {
special++;
}
}
if (upper == 0) {
v++;
}
if (lower == 0) {
v++;
}
if (digit == 0) {
v++;
}
if (special == 0) {
v++;
}
if (n <= 6) {
return fmax(v, 6 - n);
} else {
return v;
}
}

int main() {
int n, answer;
char password[100];
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%s", password);
answer = minimumNumber(strlen(password), password);
if (answer > 0) {
printf("weak\n");
} else {
printf("strong\n");
}
}
return 0;
}