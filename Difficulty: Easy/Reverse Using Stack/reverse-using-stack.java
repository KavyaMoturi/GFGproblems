class Solution {
    public String reverse(String s) {
       
        // Pop characters to form reversed string
        StringBuilder res = new StringBuilder(s);
        res.reverse();
        return res.toString();
    }
}