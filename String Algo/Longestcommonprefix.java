link - https://workat.tech/problem-solving/practice/longest-common-prefix
class Solution {
   String longestCommonPrefix(String[] str) {
       Arrays.sort (str);
       int n = str.length - 1;
       String lcp = "";
       for (int i = 0; i < Math.min (str[0].length(), str[n].length()); i++) {
           if (str[0].charAt(i) == str[n].charAt(i)) {
               lcp += str[0].charAt(i);
           } else {
               break;
           }
       }
       return lcp;
   }
}
