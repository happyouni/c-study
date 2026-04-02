#include <stdio.h>

int digit(int n) {
    if (n < 10) { 
        return n;
    }
   
    return (n % 10) + digit(n / 10);
  // (235%10) + digit(235/10)
  //  5 +digit(23)
  // (23 % 10) + digit(23 / 10)
//     3+digit(2)

    

}
int main() {
    printf("%d", digit(235)); //인수 235

    return 0;
}
