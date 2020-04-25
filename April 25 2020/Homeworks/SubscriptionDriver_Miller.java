/**
 * The subscription driver class
 * @author Kolby Miller
 */
public class SubscriptionDriver_Miller {
	
	public static void main(String[] args)
	{
		//User's information
		NewspaperSubscription_Miller[] newspaperSubscription = new NewspaperSubscription_Miller[6];
		newspaperSubscription[0] = new PhysicalNewspaperSubscription_Miller("Normin Johnson, ", "115 Jerry Ave. ");
		newspaperSubscription[1] = new PhysicalNewspaperSubscription_Miller("Harry Osborn, ", "321 Nintendo Ave. ");
		newspaperSubscription[2] = new PhysicalNewspaperSubscription_Miller("Peter Parker, ", "123 Pickles Ave. ");
		newspaperSubscription[3] = new OnlineNewspaperSubscription_Miller("Harold Nimbleton, ", "kathleen.ryan@deslaes,edu ");
		newspaperSubscription[4] = new OnlineNewspaperSubscription_Miller("Edward Casamassima, ", "pranshu.gupta@desles.edu ");
		newspaperSubscription[5] = new OnlineNewspaperSubscription_Miller("Matthew Taggart, ", "carl.hammerstien@desales.edu ");
		//Display of User's information
		System.out.print("Physical Newspaper 1: " + " " + newspaperSubscription[0] + "\n");
		System.out.print("\nPhysical Newspaper 2: " + " " + newspaperSubscription[1] + "\n");
		System.out.print("\nPhysical Newspaper 3: " + " " + newspaperSubscription[2] + "\n");
		System.out.print("\nOnline Newspaper 1: " + " " + newspaperSubscription[3] + "\n");
		System.out.print("\nOnline Newspaper 2: " + " " + newspaperSubscription[4] + "\n");
		System.out.print("\nOnline Newspaper 3: " + " " + newspaperSubscription[5] + "\n");
	}
}