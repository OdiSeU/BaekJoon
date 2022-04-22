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
        int[] arr = new int[N];

        for(int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        bw.write(Bj_10886.solution(N, arr));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_10886 {
        public static String solution(int N, int[] arr) {
            int[] cnt = {0, 0};

            for(int i = 0; i < N; i++) cnt[arr[i]]++;
            
            return cnt[0] > cnt[1] ? "Junhee is not cute!" : "Junhee is cute!";
        }
    }
}