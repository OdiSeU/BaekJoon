import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int T = Integer.parseInt(br.readLine());
        StringBuilder answer = new StringBuilder();

        for(int i = 0; i < T; i++) {
            int N = Integer.parseInt(br.readLine());
            int[] arr = new int[N];
            int j = 0;
            
            for(String s : br.readLine().split(" ")) {
                arr[j++] = Integer.parseInt(s);
            }
            answer.append(Bj_9085.solution(arr)+"\n");
        }
        
        bw.write(answer.toString());
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_9085 {
        public static int solution(int[] arr) {
            int sum = 0;
            for(int n : arr) sum += n;
            return sum;
        }
    }
}