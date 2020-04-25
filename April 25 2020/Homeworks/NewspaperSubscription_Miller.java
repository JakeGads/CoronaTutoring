/**
 * An Abstract Newspaper Subscription Class
 * @author Kolby Miller
 *
 */
public abstract class NewspaperSubscription_Miller {
	//fields for the subscriber name, address, and rate.
	protected String subscriberName;
	protected String subscriberAddress;
	protected double rate = 55;
	/**
	 * Newspaper Subscription info
	 * @param n Subscriber's Name
	 * @param a Subscriber's Address
	 */
	public NewspaperSubscription_Miller(String n, String a)
	{
		this.subscriberName = n;
		this.subscriberAddress = a;
	}
	/**
	 * The getSubscriberName method returns the Subscriber's name.
	 * @return the Subscriber's name
	 */
	public String getSubscriberName() {
		return subscriberName;
	}
	/**
	 * Sets the subscriber's name
	 * @param subscriberName 
	 */
	public void setSubscriberName(String subscriberName) {
		this.subscriberName = subscriberName;
	}
	/**
	 * The getAddress method returns the Subscriber's Address
	 * @return the Subscriber's Address
	 */
	public String getAddress() {
		return subscriberAddress;
	}
	/**
	 * Sets the subscriber's Address
	 * @param Address
	 */
	public abstract void setAddress(String a);
	/**
	 * Asks if the address is valid
	 * @param Address
	 */
	public abstract boolean isAddressValid(String a);
	/**
	 * The getRate method returns the Subscriber's rate
	 * @return the Subscriber's Rate
	 */
	public double getRate() {
		return rate;
	}
	/**
    toString method
    @return A reference to a String representation of
            the object.
	 */
	public String toString()
	{
		//making the return statement null until instructed otherwise.
		String str = "\nName: " + getSubscriberName() + "\nAddress: "+ getAddress() + "\nRate: " + getRate();
		
		return str;
	}
}
