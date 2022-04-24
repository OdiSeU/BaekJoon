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
        String[] input = br.readLine().split(" ");
        int[] arr = new int[N];
        
        for(int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(input[i]);
        }

        int disk = Integer.parseInt(br.readLine());

        bw.write(Bj_1350.solution(N, arr, disk)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_1350 {
        public static long solution(int N, int[] arr, int disk) {
            long ans = 0;

            for(int i = 0; i < N; i++) {
                ans += arr[i] / disk;
                if(arr[i] % disk != 0) ans++;
            }

            return disk * ans;
        }
    }
}