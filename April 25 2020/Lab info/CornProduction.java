
public class CornProduction implements CarbonFootPrint{
	private double annualPoundsProduced;
	
	public CornProduction(double app)
	{
		this.annualPoundsProduced = app;
	}
	
	@Override
	public double getCarbonFootPrint() {
		return annualPoundsProduced * 0.000068039;
	}
	
	public double getAnnualPoundsProduced()
	{
		return annualPoundsProduced;
	}
}
