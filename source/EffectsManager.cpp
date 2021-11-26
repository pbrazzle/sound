#include "EffectsManager.hpp"

EffectsManager::EffectsManager() : ampCoeff(0.5) { }

double EffectsManager::processSample(double s)
{
	return ampCoeff*s;
}

void EffectsManager::setAmpCoeff(double d) { ampCoeff = d; }

double EffectsManager::getAmpCoeff() { return ampCoeff; }