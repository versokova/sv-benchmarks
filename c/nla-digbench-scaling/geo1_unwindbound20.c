/* 
Geometric Series
computes x=(z-1)* sum(z^k)[k=0..k-1] , y = z^k
returns 1+x-y == 0
*/

extern void abort(void);
void reach_error(){}
extern int __VERIFIER_nondet_int(void);
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
    if (!(cond)) {
    ERROR:
        {reach_error();}
    }
    return;
}
int counter = 0;
int main() {
    int z, k;
    int x, y, c;
    z = __VERIFIER_nondet_int();
    k = __VERIFIER_nondet_int();

    x = 1;
    y = z;
    c = 1;

    while (counter++<20) {
        __VERIFIER_assert(x*z - x - y + 1 == 0);

        if (!(c < k)) 
            break;

        c = c + 1;
        x = x * z + 1;
        y = y * z;

    }  //geo1

    x = x * (z - 1);

    __VERIFIER_assert(1 + x - y == 0);
    return 0;
}
