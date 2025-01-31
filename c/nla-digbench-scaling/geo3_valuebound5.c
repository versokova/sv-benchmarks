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
int main() {
    int z, a, k;
    int x, y, c;
    z = __VERIFIER_nondet_int();
    assume_abort_if_not(z>0 && z<=5);
    a = __VERIFIER_nondet_int();
    assume_abort_if_not(a>0 && a<=5);
    k = __VERIFIER_nondet_int();
    assume_abort_if_not(k>0 && k<=5);

    x = a;
    y = 1;
    c = 1;

    while (1) {
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
