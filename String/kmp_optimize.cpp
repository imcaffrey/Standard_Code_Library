/**
 * @Author SCaffrey(sirius.caffrey@gmail.com)
 * @Copyright SATA
 * @Example http://hihocoder.com/problemset/problem/1015
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
const int MAXN = 1000033;

char p[MAXN], t[MAXN];
int d[MAXN];
int T;
int n, m, ans;
void get() {
  d[0] = d[1] = 0;
  int j = 0;
  f(i, 1, m) {
    while (j && p[i] != p[j]) j = d[j];
    if (p[i] == p[j]) {
      if (p[i + 1] == p[j + 1]) {
        d[i + 1] = d[j + 1];
      } else {
        d[i + 1] = j + 1;
      }
      ++j;
    } else {
      d[i + 1] = 0;
    }
  }
}
void kmp() {
  get();
  int j = 0;
  f(i, 0, n) {
    while (j && t[i] != p[j]) j = d[j];
    if (t[i] == p[j]) ++j;
    if (j == m) ++ans;
  }
}
int main() {
  scanf("%d", &T);
  while (T--) {
    scanf("%s%s", p, t);
    n = strlen(t);
    m = strlen(p);
    ans = 0;
    kmp();
    printf("%d\n", ans);
  }
}
