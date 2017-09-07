#include "stdio.h"
#define st_MAXSIZE 1000

typedef struct stu {
	char st_name[100];
	char st_id[100];
	int st_score;
}student;

int main() {
	student stu[st_MAXSIZE];
	int n, i;
	int min = 0, max = 0;
	int st_max, st_min;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%s%d", stu[i].st_id, stu[i].st_name, &stu[i].st_score);
	}
	st_max = stu[0].st_score;
	st_min = stu[0].st_score;

	for (i = 1; i < n; i++) {
		if (stu[i].st_score > st_max) {
			st_max = stu[i].st_score;
			max = i;
		}
		if (stu[i].st_score < st_min) {
			st_min = stu[i].st_score;
			min = i;
		}
	}
	printf("%s %s\n", stu[max].st_id, stu[max].st_name);
	printf("%s %s\n", stu[min].st_id, stu[min].st_name);

	return 0;
}
