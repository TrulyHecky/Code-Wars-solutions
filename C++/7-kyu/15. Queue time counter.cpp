#include<vector>

long long queu e(const std::vector<int>& queuers, int pos)
{
  std::vector<int> queu = queuers;
  int = needTickets = queu[pos];
  int count = 0;
  
  while( needTickets > 0 )
  {
    if( queu[0] == 1 ){ if( pos == 0 ) break; }
    else queu.push_back( --queu[0] );
    
    queu.erase( queu.begin() );
    
    count++;
    pos--;
    if( pos < 0 ) pos = queu.size()-1;
    
    needTickets = queu[pos];
  }
  
  return ++count;
}
