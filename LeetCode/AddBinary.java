import java.math.BigInteger;

class Solution {
    public String addBinary(String a, String b) {
        // 使用二進位解讀a,b字串
        BigInteger b1 = new BigInteger(a, 2);
        BigInteger b2 = new BigInteger(b, 2);
        BigInteger result = b1.add(b2);
        // 使用二進位表示法表示result
        return result.toString(2);
    }

    public static void main(String[] args) {
        System.out.print(new Solution().addBinary("11", "1"));
    }
}