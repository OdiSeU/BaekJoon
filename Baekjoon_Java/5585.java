import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        bw.write(Bj_5585.solution(n)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_5585 {
        public static int solution(int n) {
            int cnt = 0;
            n = 1000 - n;
            
            for(int i = 100; i > 0; i /= 10) {
                cnt += n / (i * 5);
                n %= i * 5;
                cnt += n / i;
                n %= i;
            }

            return cnt;
        }
    }
}
