/**
 * @Author Ir1d (srius.caffrey@gmail.com)
 * @Copyright SATA
 * @Example http://codevs.cn/problem/1200/
 */
#include <bits/stdc++.h>  // NOLINT
#include <cmath>          // NOLINT
#include <cstdio>         // NOLINT
#include <cstring>        // NOLINT
#define x1 x11
#define y1 y11

#define f(x, y, z) for (int x = (y), __ = (z); x < __; ++x)
#define g(x, y, z) for (int x = (y), __ = (z); x <= __; ++x)
#define fd(x, y, z) for (int x = (y), __ = (z); x > __; --x)
#define gd(x, y, z) for (int x = (y), __ = (z); x >= __; --x)

#ifdef WIN32
#define LLD "%I64d"
#define LLU "%I64u"
#else
#define LLD "%lld"
#define LLU "%llu"
#endif

typedef long long LL;  // NOLINT
typedef long double real;

const double INF = 1e100;
const int oo = ~0u >> 2;
const double pi = acos(-1.0);
const double EPS = 1e-8;
const int MAXN = 100033;

int a, b;
int extGcd(int a, int b, int &x, int &y) {  // NOLINT
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int res = extGcd(b, a % b, y, x);
  y -= a / b * x;
  return res;
}
int x, y;
int main() {
#ifdef LOCAL
  freopen("a.in", "r", stdin);
  freopen("a.out", "w", stdout);
#endif

  scanf("%d%d", &a, &b);
  extGcd(a, b, x, y);
  printf("%d\n", (x % b + b) % b);

#ifdef LOCAL
  fclose(stdin);
  fclose(stdout);
#endif
  return 0;
}
