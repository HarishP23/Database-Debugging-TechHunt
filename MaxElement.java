class MaxEelement {
    // public static int maxArea(int[] height) { either you can do this or
    // the code on line 24,25
     public int maxArea(int[] height) {
          int left = 0;
          int right = height.length - 1;
          int max = 0;
          while(left < right){
              int w = right - left;
              int h = Math.min(height[left], height[right]);
              int area = h * w;
              max = Math.max(max, area);
              if(height[left] < height[right]) left++;
              else if(height[left] > height[right]) right--;
              else {
                  left++;
                  right--;
              }
          }
          return max;
     public static void main (String args[]){
       int [] height = [1,4,7,8,9,11,5];
    //    Cannot make a static reference to the non-static method maxArea(int[]) from the type MaxEelement
    // MaxEelement obj = new MaxEelement();
    //    String result= obj.maxArea(height );
    String result= maxArea(height );
       System.out.println(result );
       
     }
  }