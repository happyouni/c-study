//87페이지 문제
#include <stdio.h>

int main(void) {

    int a[3][3] = { {1,2,3},{4,5,6,},{7,8,9} };//초기값
    //{ {0행} { 1행 } { 2행 } { 3행 }  }
    //a[행][열] 0~2행  0~2열 -> 9개 요소 구성

    int i, j;

    for (i = 0; i < 3; i++) 
    { //i 행 의미 0~2
        for (j = 0; j < 3; j++) //j 는 열 의미 0~2
        {
            printf("%d\t", a[i][j]);
        } 
        
        printf("\n");
    }

    return 0;
}