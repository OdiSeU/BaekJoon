import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] inputs = new int[5];
        for(int i = 0; i < 5; i++) {
            inputs[i] = Integer.parseInt(br.readLine());
        }

        
        bw.write(Bj_14470.solution(inputs)+"");
        bw.flush(); br.close(); bw.close();
    }

    static class Bj_14470 {
        public static int solution(int[] inputs) {
            int ans = 0;
            
            if(inputs[0] < 0) {
                ans += inputs[2] * (-inputs[0]) + inputs[3];
                inputs[0] = 0;
            }
            ans += inputs[4] * (inputs[1] - inputs[0]);

            return ans;
        }
    }
}