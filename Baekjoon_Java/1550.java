import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String input = br.readLine();

        bw.write(Bj_1550.solution(input)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_1550 {
        public static int solution(String s) {
            return Integer.parseInt(s, 16);
        }
    }
}