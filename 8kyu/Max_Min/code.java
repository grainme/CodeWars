public class Kata {

    public int max(int[] list) {
      int max = list[0];
      for (int i : list) {
        if(max<i){max=i;}
      }
      return max;
    }
    
    public int min(int[] list) {
      int min = list[0];
      for(int i : list){
        if(i<min){min=i;}
      }
      return min;
    }
}
