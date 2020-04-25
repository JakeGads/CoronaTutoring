/**
 * A physical newspaper subscription class
 * @author Kolby Miller
 */
public class PhysicalNewspaperSubscription_Miller extends NewspaperSubscription_Miller{
	/**
	 * Physical Newspaper Subscription info
	 * @param n
	 * @param a
	 */
	public PhysicalNewspaperSubscription_Miller(String n, String a)
	{
		super(n, a);
		this.rate = 15;
		this.setAddress(a);
	}
	/**
	 * asks if address is valid
	 */
	public boolean isAddressValid(String subscriberAddress) {
		char digit = subscriberAddress.charAt(0); 

		if (Character.isDigit(digit))
		{
			return true;
		}
		else
		{
			
			System.out.println("invalid input");
			return false;
		}
	}
	
	/**
	 * sets address
	 */
	@Override
	public void setAddress(String subscriberAddress) {
		if(this.isAddressValid(subscriberAddress)){
			this.subscriberAddress = subscriberAddress;
			this.rate = 15.00;
		}
		else{
			this.subscriberAddress = " ";
			this.rate = 0;
		}
	}
} 
