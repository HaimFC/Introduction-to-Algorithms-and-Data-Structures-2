#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "limits.h"

typedef struct Patient{
    long int id;
    long int priority_queue_index;
    double priority_val;
}Patient;

/* Iceland trip
 * ------------
 */

long long int iceland_trip()
{
	long long int cost = 0;	
	return cost;
}


/* transplant list
 * ------------
 */


long int transplant_list()
{
    long int ans;
    int N, K, M;
    double input_age, input_year_to_live;
    Patient *arr;
    scanf("%d", &N);
    scanf("%d", &K);
    scanf("%d", &M);
    arr = (Patient*)malloc(sizeof(Patient) * (N+1));
    
    // YOUR CODE HERE //

    ans = 0;

    ////////////////////
    
    free(arr);
    return ans;
}





/* 
 * Farthest enemy
 * ----------------------
 * Given a matrix NxM filled with 0's and 1's
 * Return the distance from the best location of the king to the farthest enemy
 * 
 */

int farthest_enemy()
 {
     int N, M, solution = -1;
     int i,j, **mat;
 
     scanf("%d", &N);
     scanf("%d", &M);
     mat = (int**)malloc(sizeof(int*) * N);
     for (i = 0; i < N; i++)
         mat[i] = (int*)malloc(sizeof(int) * M);
 
     for (i = 0; i < N; i++)
         for (j = 0; j < M; j++)
             scanf("%d", &mat[i][j]);
 
     /// Enter your code here ///

     /// -------------------- ///
 
     for (i = 0; i < N; i++)
         free(mat[i]);
     free(mat);
     return solution;
 }


int main(int argc, char** argv) {
        int choice;
        scanf("%d", &choice);
        if (choice == 1) printf("%lld\n", iceland_trip());
        if (choice == 2) printf("%d\n", transplant_list());
        if (choice == 3) printf("%d\n", farthest_enemy());
	return 0;
}
