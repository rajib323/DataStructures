#include <stdio.h>
 
int ary[10][10], completed[10], n, cost = 0;
 
void mincost(int city) {
  int i, ncity;
 
  completed[city] = 1;
 
  //printf("%d--->", city + 1);
  ncity = least(city);
 
  if (ncity == 999) {
    ncity = 0;
    printf("%d", ncity + 1);
    cost += ary[city][ncity];
 
    return;
  }
 
  mincost(ncity);
}
 
int least(int c) {
  int i, nc = 999;
  int min = 999, kmin;
 
  for (i = 0; i < n; i++) {
    if ((ary[c][i] != 0) && (completed[i] == 0))
      if (ary[c][i] + ary[i][c] < min) {
        min = ary[i][0] + ary[c][i];
        kmin = ary[c][i];
        nc = i;
      }
  }
 
  if (min != 999)
    cost += kmin;
 
  return nc;
}
 
int main() {
    int n = 4;
    ary[0][0] = 0;
    ary[0][1] = 200;
    ary[0][2] = 42;
    ary[0][3] = 35;
    ary[1][0] = 200;
    ary[1][1] = 0;
    ary[1][2] = 30;
    ary[1][3] = 20;
    ary[2][0] = 42;
    ary[2][1] = 30;
    ary[2][2] = 0;
    ary[2][3] = 60;
    ary[3][0] = 35;
    ary[3][1] = 20;
    ary[3][2] = 60;
    ary[3][3] = 0;
    int i;
    for(i = 0 ; i < n; i++){
        completed[i] = 0;
    }
    mincost(0);
    printf("%d", cost);
    return 0;
}
