
public class PassengerFuelCar implements CarbonFootPrint{
	private double mpg;
	private double milesDriven;
	
	public PassengerFuelCar(double m, double md)
	{
		this.mpg = m;
		this.milesDriven = md;
	}

	@Override
	public double getCarbonFootPrint() {
		return  (milesDriven/mpg) * 0.000411;
	}
	
	public double getMPG()
	{
		return mpg;
	}
}
