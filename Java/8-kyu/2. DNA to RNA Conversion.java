public class Bio {
    public String dnaToRna(String dna) {
        if (dna.contains("T")){
          dna = dna.replace('T', 'U');
        }
      return dna;
    } 
}
