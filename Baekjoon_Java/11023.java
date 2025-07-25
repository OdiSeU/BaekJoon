import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        bw.write(Bj_11023.solution(br.readLine())+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_11023 {
        public static int solution(String s) {
            int sum = 0;
            for(String n : s.split(" ")) {
                sum += Integer.parseInt(n);
            }
            return sum;
        }
    }
}