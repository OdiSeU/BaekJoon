import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        bw.write(Bj_10822.solution(br.readLine())+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_10822 {
        public static int solution(String input) {
            int answer = 0;

            for(String s : input.split(",")) {
                answer += Integer.parseInt(s);
            }

            return answer;
        }
    }
}