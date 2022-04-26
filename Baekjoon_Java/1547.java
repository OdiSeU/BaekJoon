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
        int[][] arr = new int[N][2];
        
        for(int i = 0; i < N; i++) {
            String[] input = br.readLine().split(" ");
            arr[i][0] = Integer.parseInt(input[0]);
            arr[i][1] = Integer.parseInt(input[1]);
        }

        bw.write(Bj_1547.solution(N, arr)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_1547 {
        public static long solution(int N, int[][] arr) {
            int ans = 1;

            for(int i = 0; i < N; i++) {
                if(arr[i][0] == ans || arr[i][1] == ans) {
                    ans = arr[i][0] == ans ? arr[i][1] : arr[i][0];
                }
            }

            return ans;
        }
    }
}