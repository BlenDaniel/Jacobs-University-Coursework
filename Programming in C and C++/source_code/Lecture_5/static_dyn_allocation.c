#include <stdio.h>
#include <stdlib.h>

// Version 1 static allocation: compile error
//void foo(int a[][], int n, int m) {

// Version 2a static allocation: compile error
//void foo(int a[10][], int n, int m) {

// Version 2b static allocation: ok
void foo(int a[][50], int n, int m) {

// Version 3 static allocation: ok
//void foo(int a[10][50], int n, int m) {
    
// Version 4 static allocation: compiler error
//void foo(int *a[50], int n, int m) {

// Version 5 static allocation: compiler error
//void foo(int **a, int n, int m) {


	
// Version 1 dynamic allocation: ok
//void foo(int **a, int n, int m) {

// Version 2a dynamic allocation: ok
//void foo(int *a[], int n, int m) {
    
// Version 2b dynamic allocation: ok
//void foo(int *a[50], int n, int m) {

// Version 3 dynamic allocation: compile error
//void foo(int a[][], int n, int m) {
	int i, j;
    printf("2D-matrix:\n");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

// Version 1 static allocation: compile error
//void foo3d(int a[][][], int n, int m, int p) {

// Version 2 static allocation: compile error
//void foo3d(int a[][][15], int n, int m, int p) {

// Version 3 static allocation: ok
//void foo3d(int a[][20][15], int n, int m, int p) {

// Version 4 static allocation: ok
void foo3d(int a[10][20][15], int n, int m, int p) {
    
// Version 5 static allocation: compile error
//void foo3d(int *a[20][15], int n, int m, int p) {

// Version 6 static allocation: compile error
//void foo3d(int **a[15], int n, int m, int p) {

// Version 7 static allocation: compile error
//void foo3d(int ***a, int n, int m, int p) {
    int i, j, k;
    printf("3D-matrix:\n");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
            for(k=0; k<p; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main() {
	int st_2d[10][50];
    int st_3d[10][20][15];
	int **dyn_2d;
	int n = 5, m = 15;
	dyn_2d = (int **)malloc(sizeof(int *)*n);
	if (!dyn_2d) {
		printf("Memory allocation error!\n");
		exit(1);
	}
	int i;
	for(i=0; i<n; i++) {
		dyn_2d[i] = (int *)malloc(sizeof(int)*m);
		if (!dyn_2d[i]) {
			printf("Memory alloint **tablecation error!\n");
			exit(1);
		}
	}
	// Call 1 with static matrix
	foo(st_2d, 3, 4);
    // Call 2 with static 3D-matrix
    foo3d(st_3d, 5, 10, 10);
	// Call 3 with dynamic matrix
	//foo(dyn_2d, 5, 15);
	//free(dyn_2d);
	return 0;
}
