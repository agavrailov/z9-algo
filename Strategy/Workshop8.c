// Workshop 8: Simple Option system //////////////////////////////////////////
#include <contract.c>

#define PREMIUM	3.00
#define WEEKS		6

void run() 
{
	StartDate = 20120101;
	EndDate = 20201231;
	BarPeriod = 1440;
	set(PLOTNOW,LOGFILE);

	History = "*.t8"; // options data for price history
	assetList("AssetsIB");
	asset("SPY");
	Multiplier = 100;

// load today's contract chain
	if(!contractUpdate(Asset,0,CALL|PUT)) return;

// Enter new positions
	if(!NumOpenShort && !is(LOOKBACK)) { 
		if(combo(
			contractFind(CALL,WEEKS*7,PREMIUM,2),1, 
			contractFind(PUT,WEEKS*7,PREMIUM,2),1,
			0,0,0,0)) 
		{
			MarginCost = comboMargin(-1,3);
			enterShort(comboLeg(1));
			enterShort(comboLeg(2));
		}
	}
}