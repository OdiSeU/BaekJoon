import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(Bj_13458.solution(br.readLine())+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_13458 {
        public static int solution(String s) {
            int answer = 1, len = s.length();
            
            for(int i = 0; i < len/2; i++) {
                if(s.charAt(i) != s.charAt(len-i-1)) {
                    answer = 0;
                    break;
                }
            }

            return answer;
        }
    }
}
