#include <stdio.h>

int checkPerfectNumber(int num);
double power_int(double base, int exp);

int main(void) {
    // test case for even perfect number
    int p = 496;
    int n = 36;

    printf("checkPerfectNumber(%d) = %d\n", p, checkPerfectNumber(p));
    printf("checkPerfectNumber(%d) = %d\n", n, checkPerfectNumber(n));

    // if you finished the vonus question
    double b1 = -7.1, b2 = -3.0;
    int e1 = -4, e2 = 4;
    printf("power_int(%lf, %d) = %lf\n", b1, e1,  power_int(b1, e1));
    printf("power_int(%lf, %d) = %lf\n", b2, e2,  power_int(b2, e2));

    return 0;

}

int checkPerfectNumber(int num){

    int sum = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    return sum == num;

}

double power_int(double base, int exp){

    if(exp < 0){
        base = 1/base;
        exp *= -1;
    }
    
    double result = 1;

    while(exp > 0){
        if (exp % 2 == 1) {
            result = result * base;
        }
        base = base * base;
        exp = exp / 2;
    }


    return result;


}