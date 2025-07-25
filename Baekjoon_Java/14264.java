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
        
        bw.write(Bj_14264.solution(N)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_14264 {
        public static double solution(int N) {
            return Math.sqrt(3) / 4 * N * N;
        }
    }
}