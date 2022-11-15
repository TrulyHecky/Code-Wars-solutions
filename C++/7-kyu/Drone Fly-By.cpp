std::string flyBy(std::string lamp, std::string drone){
  for (int index = 0; index < drone.length(); index++) {
    lamp[index] = 'o';
  }
  return lamp;
}
