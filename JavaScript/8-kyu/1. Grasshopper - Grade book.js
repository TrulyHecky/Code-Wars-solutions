function getGrade (s1, s2, s3) {
  let avg = (s1 + s2 + s3) / 3;
  if (avg <= 100 && avg >= 90) {
    return 'A';
  } else if (avg < 90 && avg >= 80) {
    return 'B';
  } else if (avg < 80 && avg >= 70) {
    return 'C';
  } else if (avg < 70 && avg >= 60) {
    return 'D';
  } else {
    return 'F';
  }
}
