import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String A = br.readLine();
        String B = br.readLine();

        bw.write(Bj_12813.solution(A, B));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_12813 {
        public static String solution(String A, String B) {
            char[] dict = {'0', '1'};
            char[][] ans = new char[5][100000];
            StringBuilder s = new StringBuilder();

            for(int i = 0; i < A.length(); i++) {
                int a = A.charAt(i) - '0';
                int b = B.charAt(i) - '0';
                ans[0][i] = dict[a & b];
                ans[1][i] = dict[a | b];
                ans[2][i] = dict[a ^ b];
                ans[3][i] = dict[a == 0 ? 1 : 0];
                ans[4][i] = dict[b == 0 ? 1 : 0];
            }

            for(int i = 0; i < 5; i++) {
                s.append(ans[i]).append("\n");
            }
            
            return s.toString();
        }
    }
}