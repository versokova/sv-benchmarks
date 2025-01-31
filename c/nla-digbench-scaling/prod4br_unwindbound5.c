/* algorithm for computing the product of two natural numbers */

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
    int x, y;
    int a, b, p, q;

    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    assume_abort_if_not(y >= 1);

    a = x;
    b = y;
    p = 1;
    q = 0;

    while (counter++<5) {
        __VERIFIER_assert(q + a * b * p == x * y);

        if (!(a != 0 && b != 0))
            break;

        if (a % 2 == 0 && b % 2 == 0) {
            a = a / 2;
            b = b / 2;
            p = 4 * p;
        } else if (a % 2 == 1 && b % 2 == 0) {
            a = a - 1;
            q = q + b * p;
        } else if (a % 2 == 0 && b % 2 == 1) {
            b = b - 1;
            q = q + a * p;
        } else {
            a = a - 1;
            b = b - 1;
            q = q + (a + b + 1) * p; /*fix a bug here---  was (a+b-1)*/
        }
    }

    __VERIFIER_assert(q == x * y);
    __VERIFIER_assert(a * b == 0);
    return 0;
}
