#include <stdio.h>

int soln(int arr[][],6) {
    int i, j, sum,temp_sum;
    temp_sum = 0;
    sum = -9999999;
    for(i=0; i<6-2;i++) {
        for(j=0; j<6-2;j++){
            temp_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                                   arr[i+1][j+1] +
                       arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            printf("%d %d %d\n", arr[i][j], arr[i][j+1], arr[i][j+2]);
            printf("  %d   \n", arr[i+1][j+1]);
            printf("%d %d %d\n", arr[i+2][j] ,arr[i+2][j+1] ,arr[i+2][j+2]);
            printf("temp sum: %d \n\n", temp_sum);
            if(temp_sum > sum) {
                sum = temp_sum;
            }
        }
    }
    return sum;
}

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    printf("%d\n", soln(arr),6);
    return 0;
}