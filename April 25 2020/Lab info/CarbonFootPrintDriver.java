
public class CarbonFootPrintDriver {
	public static void main(String[] args)
	   {
		PassengerFuelCar passengerFuelCar = new PassengerFuelCar(35, 36000);
		CornProduction cornProduction = new CornProduction(5000);
		
		
		System.out.println("The car produces " + passengerFuelCar + " metric tons of CO2 annually."
				+ "\nProducing 5000 pounds of corn yields " + cornProduction + " metric tons of CO2.");
		
	   }
}
