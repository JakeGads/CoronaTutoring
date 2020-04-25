/**
 * An online newspaper class
 * @author Kolby Miller
 */
public class OnlineNewspaperSubscription_Miller extends NewspaperSubscription_Miller{
	
	/**
	 * Online Newspaper Subscription info
	 * @param n Subscriber's name
	 * @param a Subscriber's address
	 */
	public OnlineNewspaperSubscription_Miller(String n, String a)
	{
		super(n, a);
		this.setAddress(a);
	}
	/**
	 * Asks if the address is valid
	 */
	public boolean isAddressValid(String address) {
		
		if (address.contains("@"))
		{
			return true;
		}
		else
		{
			System.out.println("invalid input");
			this.subscriberAddress = " ";
			return false;
		}
	}
	/**
	 *Sets address 
	 */
	public void setAddress(String subscriberAddress) {	
		if (this.isAddressValid(subscriberAddress))
		{
			this.subscriberAddress = subscriberAddress;
			this.rate = 9.00;
		}
		else{
			this.subscriberAddress = "";
			this.rate = 0.00;
		}
	}
}