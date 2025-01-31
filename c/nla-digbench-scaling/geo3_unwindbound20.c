/* 
Geometric Series
computes x = sum(z^k)[k=0..k-1], y = z^(k-1)
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
    int z, a, k;
    int x, y, c;
    z = __VERIFIER_nondet_int();
    a = __VERIFIER_nondet_int();
    k = __VERIFIER_nondet_int();

    x = a;
    y = 1;
    c = 1;

    while (counter++<20) {
        __VERIFIER_assert(z*x - x + a - a*z*y == 0);

        if (!(c < k))
            break;

        c = c + 1;
        x = x * z + a;
        y = y * z;
    }
    __VERIFIER_assert(z*x - x + a - a*z*y == 0);
    return x;
}
