import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine()), i = 0;
        int[] A = new int[N];
        for(String s : br.readLine().split(" ")) {
            A[i++] = Integer.parseInt(s);
        }
        String[] tmp = br.readLine().split(" ");
        int B = Integer.parseInt(tmp[0]), C = Integer.parseInt(tmp[1]);

        bw.write(Bj_13458.solution(N, A, B, C)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_13458 {
        public static long solution(int N, int[] A, int B, int C) {
            long count = N;
            
            for(int v : A) {
                if(v > B) count += Math.ceil((float)(v - B) / C);
            }

            return count;
        }
    }
}
