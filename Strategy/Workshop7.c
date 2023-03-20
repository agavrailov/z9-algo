// Machine learning ////////////////////////////
#include <profile.c>

function run()
{
	StartDate = 2010;
	EndDate = 2018;
	BarPeriod = 1440; // 1 day
	NumWFOCycles = 5;
	asset("EUR/USD");
	
	set(RULES,TESTNOW,LOGFILE);

	if(Train) Hedge = 2;	// for training, allow long + short	
	LifeTime = 1; 
	if(!Train) MaxLong = MaxShort = 1;
	
	if(adviseLong(PATTERN+FAST+2+RETURNS,0,
		priceHigh(2),priceLow(2),priceClose(2),
		priceHigh(1),priceLow(1),priceClose(1),
		priceHigh(1),priceLow(1),priceClose(1),
		priceHigh(0),priceLow(0),priceClose(0)) > 50)
		enterLong();
	
	if(adviseShort() > 50)
		enterShort();

	PlotWidth = 600;
	PlotHeight1 = 300;
	//plotTradeProfile(40);
	//plotWFOCycle(Equity,0);
	//plotWFOProfit();
}
