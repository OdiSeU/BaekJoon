import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int[] arr = new int[7];
        
        for(int i = 0; i < 7; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        bw.write(Bj_2576.solution(arr));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_2576 {
        public static String solution(int[] arr) {
            int sum = 0, min = 100;
            for(int i = 0; i < 7; i++) {
                if(arr[i] % 2 == 1) {
                    min = Math.min(min, arr[i]);
                    sum += arr[i];
                }
            }

            return min == 100 ? "-1" : sum + "\n" + min;
        }
    }
}