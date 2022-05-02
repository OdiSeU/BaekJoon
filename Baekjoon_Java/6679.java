import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        bw.write(Bj_6679.solution());
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_6679 {
        public static int customSum(int n, int radix) {
            String s = Integer.toString(n, radix);
            int sum = 0;

            for(int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if('0' <=  c && c <= '9') sum += c - '0';
                else sum += c - 'a' + 10;
            }

            return sum;
        }

        public static String solution() {
            StringBuilder s = new StringBuilder();

            for(int i = 1000; i <= 9999; i++) {
                int sum10 = customSum(i, 10);
                int sum12 = customSum(i, 12);
                int sum16 = customSum(i, 16);
                if(sum10 == sum12 && sum12 == sum16) {
                    s.append(i+"\n");
                }
            }
            return s.toString();
        }
    }
}