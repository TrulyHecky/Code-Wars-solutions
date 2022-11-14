unsigned long long get_sum (unsigned int n) 
{
  unsigned long long i;
  unsigned long long is;
  unsigned long long sum = 0.0;
  unsigned long long new_n = (unsigned long long) n;
  
  sum += (new_n + 1) * ((new_n*new_n + 3*new_n + 2) / 2);
  sum += (4*new_n*new_n*(new_n+1))/4;
  sum += (3*new_n*(new_n+1)) / 4;
  sum -= (5*new_n*(new_n+1) * (2*new_n + 1)) / 12;
  
  return sum;
}
