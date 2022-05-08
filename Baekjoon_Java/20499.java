import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        bw.write(Bj_20499.solution(br.readLine()));
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_20499 {
        public static String solution(String input) {
            String[] inputs = input.split("/");
            int K = Integer.parseInt(inputs[0]);
            int D = Integer.parseInt(inputs[1]);
            int A = Integer.parseInt(inputs[2]);

            return K + A < D || D == 0 ? "hasu" : "gosu";
        }
    }
}