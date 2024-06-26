#pragma once
#include "CVettCerchi.h"




class CGioco
{
private:

	CVettCerchi vettCerchi;
	int spessore;
	Color colore;
	int punteggio;

public:

	CGioco();
	int cont;
	uint64_t timeSinceEpochMillisec();
	void inizia();
	void disegnaRiquadro();
	void disegnaNote();
	bool controlla(CTastiera& tastiera, int pos);
	void controllaLimiteCerchio(int limite);
	int trovaCerchio(int xTastiera, int yTastiera);
	void elimina(int pos);
	void aggiornaDiscesa();
	bool isTuttiCerchiEliminati();
	void disegnaPunteggio();


};

