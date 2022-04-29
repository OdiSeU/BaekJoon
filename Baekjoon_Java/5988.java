import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        StringBuilder answer = new StringBuilder();
        for(int i = 0; i < N; i++) {
            String result = Bj_5988.solution(br.readLine());
            answer.append(result+"\n");
        }

        
        bw.write(answer.toString());
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_5988 {
        public static String solution(String num) {
            int n = num.charAt(num.length()-1) - '0';

            return n % 2 == 0 ? "even" : "odd";
        }
    }
}