main() {
  int n = 15;
  int rd = 10;
  int m = (rd << 7) + (n << 2) + 1;
  printf("%d,%d\n", m & 0xff, m >> 8);
}
