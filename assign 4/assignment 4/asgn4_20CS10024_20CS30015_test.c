static a1 = 20;
register a2 = 24;
extern a3 = 15;

enum State {red = 1, yellow = 2, green = 3 };

volatile int color(){
	return red;
}

const inline void signal(){
	int t = color();
	t+=7;
}

int stop(){
	signal();
	return 7;
}

restrict void fun(int para, int param){
	while (para){
		param++;
	}
	return a1;
}

int main(){
	int n, Arr[2000];
	int c, d, t;
	signed a = Arr[0];

	for (int i = 0; i < n; i++){
		// running a loop
	}
	for (;;){
		break;
		continue;
	}

	for (c = n - 1; c >= 0; c--){
		d += c;

		while (d > 0 && Arr[d - 1] > Arr[d]){
			t = Arr[d];
			Arr[d] = Arr[d - 1];
			Arr[d - 1] = t;
			d--;
		}
	}
	int ghost = 3.14;
	float b = 24;
	double deepiha = =15.0;
	unsigned dev = b;
	a = b + 64;
	int z = a;
	for (c = 0; c <= n - 1; c++){
		if(dev == deepiha)
			return 24;
		goto loop;
	}

	// checking operations
	int *x = &a;
	x->a;
	*x.a;
	a++;
	b--;
	b = ++a;
	b = a++;
	a = b--;
	a = --b;

	a = (int)b & 1;
	a = a | 1;
	a = a ^ 2;
	a = !a;
	a = a * c;
	a = a / b;
	a = a + b;
	a = a % 3;
	a += 2;
	b -= 3;
	c *= d;
	c /= 5;
	c %= 1;
	c <<= 2;
	c >>= z;
	c &= 2;
	c |= 1;
	c ^= 0;
	int b = a && c;
	int bb = b || (c == -c) && (!a);

	&a; *a; +a; -a; ~a; ! a;

	// single line comment
	_Bool boolian = 1;
	_Complex witch = 1 * x + 6;
	_Imaginary x = witch;
	long all = 45;

	boolian += all;
	boolian -= witch;
	for (short love = 0; love < 45; love++){
		int crush = love; 
	}
}

