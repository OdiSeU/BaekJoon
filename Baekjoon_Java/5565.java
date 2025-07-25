import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int cost = Integer.parseInt(br.readLine());
        int[] arr = new int[9];
        for(int i = 0; i < 9; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        bw.write(Bj_2563.solution(cost, arr)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_2563 {
        public static int solution(int cost, int[] arr) {
            for(int i = 0; i < 9; i++) cost -= arr[i];
            return cost;
        }
    }
}
