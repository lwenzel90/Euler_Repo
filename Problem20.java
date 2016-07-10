import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Problem20{
	public static int sumDig(String str){
		int sum = 0;

		for(int i = 0; i < str.length(); i++){
			int j = Integer.parseInt(str.substring(i, i + 1));
			sum += j;
		}
		return sum;
	}

	public static void main(String[] args){
		int fact;
		BigInteger answer = BigInteger.ONE;
		Boolean check;
		Scanner input = new Scanner(System.in);
		System.out.println("What number would you like to find the factorial: ");
		fact = input.nextInt();
		for(int i = 2; i <= fact; i++){
			answer = answer.multiply(new BigInteger(String.valueOf(i)));
		}
		System.out.println(answer);
		System.out.println(sumDig(answer.toString()));

	}
}