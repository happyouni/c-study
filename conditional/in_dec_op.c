//증가감소연산자
//++a   예) printf("%d", ++a)   ->  5였던 a가 1 증가된 후 6을 출력
//a++   예) printf("%d", a++)   ->  5를 출력한 후 1증가되어 6이 됨
//--a   예) printf("%d", --a)   ->  5였던 a가 1 감소된 후 4을 출력
//a--   예) printf("%d", a--)   ->  5를 출력한 후 1 감소되어 4가 됨

#include <stdio.h>
int main() {
    //int a = 10;
    //printf("%d\n", a++);  // 후위 증가 //10
    //printf("%d\n", ++a);  // 전위 증가 //12
    //printf("%d\n", a--);  // 후위 감소 //12
    //printf("%d\n", --a);  // 전위 감소 //10


        //int a, b, c;
        //a = 5 % 3; //나머지 2
        //a--; //1
        //b = (a++) + 3; //b=4
        //printf("%d, %d\n", a, b);//a=2
        //c = (++a) + 3; //c=6 a=3
        //printf("%d, %d, %d", a, b, c);

    float t;
    t = 10 / 3;
    printf("%f", t);
    t = (float)10 / 3;
    printf("%f", t);



        return 0;
}
