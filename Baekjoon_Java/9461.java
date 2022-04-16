import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringBuilder result = new StringBuilder();
        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i < T; i++) {
            int N = Integer.parseInt(br.readLine());
            result.append(Bj_9461.solution(N) + "\n");
        }
        
        bw.write(result.toString()); bw.flush(); bw.close();
    }

    static class Bj_9461 {
        public static long[] memoi = Arrays.copyOf(new long[] {0, 1, 1, 1, 2, 2}, 101);

        public static long solution(int N) {
            if(memoi[N] == 0) memoi[N] = solution(N-5) + solution(N-1);
            return memoi[N];
        }
    }
}