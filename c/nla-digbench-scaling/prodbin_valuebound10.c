/* shift_add algorithm for computing the 
   product of two natural numbers
*/
extern void abort(void);
void reach_error(){}
extern double __VERIFIER_nondet_double(void);
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

int main() {
    int a, b;
    int x, y, z;

    a = __VERIFIER_nondet_double();
    assume_abort_if_not(a>0 && a<=10);
    b = __VERIFIER_nondet_double();
    assume_abort_if_not(b>0 && b<=10);
    assume_abort_if_not(b >= 1);

    x = a;
    y = b;
    z = 0;

    while (1) {
        __VERIFIER_assert(z + x * y == a * b);
        if (!(y != 0))
            break;

        if (y % 2 == 1) {
            z = z + x;
            y = y - 1;
        }
        x = 2 * x;
        y = y / 2;
    }
    __VERIFIER_assert(z == a * b);
    
    return 0;
}
