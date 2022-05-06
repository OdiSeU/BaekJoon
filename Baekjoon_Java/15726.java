import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String[] input = br.readLine().split(" ");
        int A = Integer.parseInt(input[0]);
        int B = Integer.parseInt(input[1]);
        int C = Integer.parseInt(input[2]);

        bw.write(Bj_15726.solution(A, B, C)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_15726 {
        public static int solution(int A, int B, int C) {
            return (int)Math.max((double)A*B/C, (double)A/B*C);
        }
    }
}