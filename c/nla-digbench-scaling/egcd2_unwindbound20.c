/* extended Euclid's algorithm */
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
    int a, b, p, q, r, s, c, k;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    assume_abort_if_not(x >= 1);
    assume_abort_if_not(y >= 1);

    a = x;
    b = y;
    p = 1;
    q = 0;
    r = 0;
    s = 1;
    c = 0;
    k = 0;
    while (counter++<20) {
        if (!(b != 0))
            break;
        c = a;
        k = 0;

        while (counter++<20) {
            __VERIFIER_assert(a == k * b + c);
            __VERIFIER_assert(a == y*r + x*p);
            __VERIFIER_assert(b == x * q + y * s);
	    __VERIFIER_assert(q*x*y + s*y*y - q*x - b*y - s*y + b == 0);
            if (!(c >= b))
                break;
            c = c - b;
            k = k + 1;
        }

        a = b;
        b = c;

        int temp;
        temp = p;
        p = q;
        q = temp - q * k;
        temp = r;
        r = s;
        s = temp - s * k;
    }
    

    __VERIFIER_assert(q*x + s*y == 0);
    __VERIFIER_assert(p*x + r*y == a);
    return a;
}
