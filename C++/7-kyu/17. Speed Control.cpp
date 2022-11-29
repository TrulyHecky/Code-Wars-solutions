class GpsSpeed
{
public:
  static int gps(int s, std::vector<double> &x) {
      if(x.size() < 1)
          return 0;
      std::vector<double> bar(x.size());
      std::transform(x.begin()+1, x.end(), x.begin(), bar.begin(), std::minus<double>());
      return (3600 * (*max_element(bar.begin(), bar.end())) / s);
  }

};
