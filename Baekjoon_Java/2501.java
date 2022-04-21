import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] input = br.readLine().split(" ");
        int N = Integer.parseInt(input[0]), K = Integer.parseInt(input[1]);

        bw.write(Bj_2501.solution(N, K)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_2501 {
        public static int solution(int N, int K) {
            ArrayList<Integer> arr = new ArrayList<>();
            double x = Math.sqrt(N);

            for(int i = 1; i < x; i++) {
                if(N % i == 0) {
                    arr.add(arr.size()/2, N/i);
                    arr.add(arr.size()/2, i);
                }
            }
            if(x == (int)x) arr.add(arr.size()/2, (int)x);
            return arr.size() >= K ? arr.get(K-1) : 0;
        }
    }
}