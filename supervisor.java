import java.util.*;
class supervisor{
	static int power(int P, int N){
		if (P==0)
			return 1;
		else 
			return N * power(P, N-1);
	}
	public static void main(String[] args){
		int N, M, P;
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		M = sc.nextInt();
		P = sc.nextInt();
		int ans = M;
		/*while (i < N-1){
			ans = (P * ans)/100;
			i++;
		}*/
		for (int i = 0; i < N-1; i++){
			ans = (P* ans)/100;
		}
	//	ans = (power(P, N-1) * M)/ power(100, N-1);
		System.out.println(ans);
	}
}
