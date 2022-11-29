int divisors(int n){  
  int cnt = 1;
  for (int i = 1 ; i <= n/2 ; i++)
      if (n%i==0)
        cnt++;
  return cnt;
}
