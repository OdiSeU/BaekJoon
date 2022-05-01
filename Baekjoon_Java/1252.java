import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] inputs = br.readLine().split(" ");
        bw.write(Bj_1252.solution(inputs[0], inputs[1]));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_1252 {
        public static String solution(String a, String b) {
            BigInteger bigA = new BigInteger(a, 2);
            BigInteger bigB = new BigInteger(b, 2);
            return bigA.add(bigB).toString(2);
        }
    }
}