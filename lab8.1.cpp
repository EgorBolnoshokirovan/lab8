#define_CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<time.h>
#include<locale.h>
#include<queue>
usingnamespacestd;

#defineN 5

voidnewMat(int* mas) {
	srand(time(0));

	for (inti = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				mas[N * i + j] = 0;
			}
			if (i < j) {
				mas[N * i + j] = rand() % 2;
				mas[j * N + i] = mas[N * i + j];
			}
		}
	}
}

voidprintMat(int* mas) {

	for (inti = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", mas[N * i + j]);
		}
		printf("\n");
	}
}

void BFS(ints, int* G, int* num) {

	queue<int> q;
	q.push(s);
	num[s] = 1;
	while (!q.empty()) {
		s = q.front();
		printf("%d ", s);
		q.pop();

		for (inti = 0; i < N; i++) {
			if (G[s * N + i] == 1 && num[i] == 0) {
				q.push(i);
				num[i] = 1;
			}
		}
	}
}

int main() {
	int G[N][N], num[N], s;
	setlocale(LC_ALL, "rus");

	newMat(&G[0][0]);
	printMat(&G[0][0]);

	for (inti = 0; i < N; i++) {
		num[i] = 0;
	}

	printf("Введите номер вершины: ");
	scanf("%d", &s);
	printf("Результат: ");
}
