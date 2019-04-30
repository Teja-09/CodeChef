import java.util.*;
class december1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		long n,i,r,kr;
		n= sc.nextInt();
		r = sc.nextInt();
		for(i=1;i<=n;i++)
		{
			kr = sc.nextInt();
			if(kr >= r && (1300<=r && r<=1501 && 1300<=kr && kr<=1501))
			{
				System.out.println("Good boi");
			}
			else
			{
				System.out.println("Bad boi");
			}
		}
	}

}
