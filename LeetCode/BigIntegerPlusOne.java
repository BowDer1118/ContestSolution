import java.math.BigInteger;

class Solution {
    public int[] plusOne(int[] digits) {
        String s = "";
        for (int i = 0; i < digits.length; i++) {
            s += digits[i];
        }
        BigInteger bi = new BigInteger(s);
        bi = bi.add(BigInteger.ONE);
        s = bi.toString();
        char[] c = s.toCharArray();
        int[] d = new int[c.length];
        for (int i = 0; i < c.length; i++) {
            d[i] = c[i] - '0';
        }
        return d;
    }

    public static void main(String[] args) {
        int[] d = { 4, 3, 2, 1 };
        new Solution().plusOne(d);
    }
}