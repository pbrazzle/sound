#ifndef EFFECTSMANAGER
#define EFFECTSMANAGER

class EffectsManager
{
	private:
		double ampCoeff;
	public:
		EffectsManager();
		
		double processSample(double);
		
		void setAmpCoeff(double);
		double getAmpCoeff();
};

#endif