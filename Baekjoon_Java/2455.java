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

        int[][] arr = new int[4][2];

        for(int i = 0; i < 4; i++) {
            String[] input = br.readLine().split(" ");
            arr[i][0] = Integer.parseInt(input[0]);
            arr[i][1] = Integer.parseInt(input[1]);
        }

        bw.write(Bj_2455.solution(arr)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_2455 {
        public static int solution(int[][] arr) {
            int count = 0, max = 0;

            for(int i = 0; i < 4; i++) {
                count -= arr[i][0];
                count = count < 0 ? 0 : count;
                count += arr[i][1];
                max = Math.max(max, count);
            }
            
            return max;
        }
    }
}