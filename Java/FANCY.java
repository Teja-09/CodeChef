
import java.util.*;
import java.math.BigInteger;
class interactiveProblen {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		sc.nextLine();
		while(t--!=0)
		{
			int count=1;
			String s = sc.nextLine();
			String arr[] = s.split(" ");
			for(int i=0;i<arr.length;i++)
			{	//System.out.println(arr[i]);
				if(arr[i].equals("not"))
				{
					System.out.println("Real Fancy");
					count = 0;
					break;
				}
			}
			if(count == 1)
			{
				System.out.println("regularly fancy");
			}
		}
	}
}
