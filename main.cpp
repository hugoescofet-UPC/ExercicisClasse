#include <iostream>
using namespace std;

/*

// Exercici 1

class Persona
{
private:
	string nom;
	int edat;

public:
	Persona(string nomInicial, int edatInicial)
	{
		nom = nomInicial;
		edat = edatInicial;
	}

	void mostrarDades()
	{
		cout << "Nom: " << nom << "\nEdat: " << edat << endl;
	}

	bool comprovarMajor()
	{
		if (edat >= 18)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Persona juan("Juan", 13);
	Persona juliana("Juliana", 19);
	
	juan.mostrarDades();

	if (juan.comprovarMajor())
	{
		cout << "Es mayor de edad" << endl;
	}
	else
	{
		cout << "Es menor de edad" << endl;
	}


	juliana.mostrarDades();

	if (juliana.comprovarMajor())
	{
		cout << "Es major d'edat" << endl;
	}
	else
	{
		cout << "Es menor d'edat" << endl;
	}
}
*/

/*

// Exercici 2

class Rectangle
{
private:
	float amplada;
	float alcada;

public:
	Rectangle(float ampladaInicial, float alcadaInicial)
	{
		amplada = ampladaInicial;
		alcada = alcadaInicial;
	}

	float calculArea()
	{
		return (amplada * alcada);
	}

	float calculPerimetre()
	{
		return((amplada * 2) + (alcada * 2));
	}

	void mostrarDimensions()
	{
		cout << "\nLes dimensions del rectangle son:\nAmplada: " << amplada << "\nAlcada: " << alcada << endl;
	}
};

int main()
{
	Rectangle gavin(15, 7);

	cout << "L'area es: " << gavin.calculArea() << endl;
	cout << "El perimetre es: " << gavin.calculPerimetre() << endl;

	gavin.mostrarDimensions();
}

*/

/*

// Exercici 3

class Llum
{
private:
	bool llum;

public:
	Llum(bool estatInicial)
	{
		llum = estatInicial;
	}

	void encendreLlum()
	{
		if (llum == false)
		{
			llum = true;
		}
	}

	void apagarLlum()
	{
		if (llum == true)
		{
			llum = false;
		}
	}

	bool consultarLlum()
	{
		return llum;
	}
};

void escriureText(bool estatLlum)
{
	if (estatLlum == true)
	{
		cout << "La llum esta encesa" << endl;
	}
	else
	{
		cout << "La llum esta apagada" << endl;
	}
}

int main()
{
	Llum luxo(false);

	luxo.encendreLlum();
	escriureText(luxo.consultarLlum());

	luxo.apagarLlum();
	escriureText(luxo.consultarLlum());

	luxo.apagarLlum();
	escriureText(luxo.consultarLlum());

	luxo.encendreLlum();
	escriureText(luxo.consultarLlum());

	luxo.encendreLlum();
	escriureText(luxo.consultarLlum());
}

*/

/*

// Exercici 4

class Termometre
{
private: 
	float temperatura;

public:
	Termometre(float temperaturaInicial)
	{
		temperatura = temperaturaInicial;
	}

	float consultarTemperatura()
	{
		return temperatura;
	}

	void modificarTemperatura(float temperaturaNova)
	{
		if (temperaturaNova >= -50 && temperaturaNova <= 60)
		{
			temperatura = temperaturaNova;
		}
		else
		{
			cout << "La temperatura introduida (" << temperaturaNova << ") no es valida. Ha de ser entre -50 graus i 60 graus" << endl;
		}
	}
};

int main()
{
	Termometre gradial(12);

	cout << "La temperatura es: " << gradial.consultarTemperatura() << " graus" << endl;

	gradial.modificarTemperatura(25);

	cout << "La temperatura es: " << gradial.consultarTemperatura() << " graus" << endl;

	gradial.modificarTemperatura(-51);

	cout << "La temperatura es: " << gradial.consultarTemperatura() << " graus" << endl;

	gradial.modificarTemperatura(61);

	cout << "La temperatura es: " << gradial.consultarTemperatura() << " graus" << endl;

}

*/

/*

// Exercici 5

class Jugador
{
private:
	string nom;
	int punts;
	int vides;

public:
	Jugador(string nomInicial, int puntsInicials, int videsInicials)
	{
		nom = nomInicial;
		punts = puntsInicials;
		vides = videsInicials;
	}
	
	void afegirPunts(int puntsNous)
	{
		punts += puntsNous;
	}

	void perdreVida()
	{
		if (vides > 0)
		{
			vides--;
		}
	}

	int consultarPunts()
	{
		return punts;
	}

	int consultarVides()
	{
		return vides;
	}

	bool estatJugador()
	{
		if (vides > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Jugador gilbert("Gilbert", 0, 10);

	gilbert.afegirPunts(1000);
	gilbert.perdreVida();
	gilbert.afegirPunts(-200);

	cout << "El jugador te " << gilbert.consultarPunts() << " punts." << endl;
	cout << "El jugador te " << gilbert.consultarVides() << " vides." << endl;

	if (gilbert.estatJugador())
	{
		cout << "El jugador esta viu." << endl;
	}
	else
	{
		cout << "El jugador esta mort. GAME OVER" << endl;
	}

	gilbert.afegirPunts(5000);
	gilbert.perdreVida();
	gilbert.perdreVida();
	gilbert.perdreVida();

	cout << "El jugador te " << gilbert.consultarPunts() << " punts." << endl;
	cout << "El jugador te " << gilbert.consultarVides() << " vides." << endl;

	if (gilbert.estatJugador())
	{
		cout << "El jugador esta viu." << endl;
	}
	else
	{
		cout << "El jugador esta mort. GAME OVER" << endl;
	}
}

*/

/*

// Exercici 6

class Producte
{
private:
	string nom;
	float preu;
	int estoc;

public:
	Producte(string nomInicial, float preuInicial, int estocInicial)
	{
		nom = nomInicial;
		preu = preuInicial;
		estoc = estocInicial;
	}

	float consultarPreu()
	{
		return preu;
	}

	void canviarPreu(float preuNou)
	{
		preu = preuNou;
	}

	void afegirEstoc(int quantitatEstoc)
	{
		estoc += quantitatEstoc;
	}

	bool vendreUnitat()
	{
		if (estoc > 0)
		{
			estoc -= 1;
			return true;
		}
		else
		{
			return false;
		}
	}
};

void imprimirText(bool estatEstoc)
{
	if (estatEstoc)
	{
		cout << "S'ha venut una unitat del producte." << endl;
	}
	else
	{
		cout << "S'ha esgotat l'estoc, per tant, no s'ha pogut vendre el producte. '^^" << endl;
	}
}

int main()
{
	Producte his("His", 9.99, 3);

	cout << "El producte val " << his.consultarPreu() << " euros." << endl;

	his.canviarPreu(19.99);

	cout << "El producte val " << his.consultarPreu() << " euros." << endl;

	imprimirText(his.vendreUnitat());
	imprimirText(his.vendreUnitat());
	imprimirText(his.vendreUnitat());
	imprimirText(his.vendreUnitat());

	his.afegirEstoc(3);

	imprimirText(his.vendreUnitat());
}

*/

// Exercici 7

class Reserva
{
private:
	string nom;
	int nits;
	float preu;
	bool estat;

public:
	Reserva(string nomInicial, int nitsInicials, float preuInicial, bool estatInicial)
	{
		nom = nomInicial;
		nits = nitsInicials;
		preu = preuInicial;
		estat = estatInicial;
	}

	string consultarNom()
	{
		return nom;
	}

	void canviarNits(int nitsNoves)
	{
		if (estat)
		{
			nits = nitsNoves;
			cout << "\nS'ha canviat el numero de nits a " << nits << " nits." << endl;
		}
		else
		{
			cout << "\nLa reserva esta cancel.lada, per tant, no s'ha canviat el numero de nits." << endl;
		}
	}

	float calcularPreu()
	{
		return (preu * nits);
	}

	void cancellarReserva()
	{
		estat = false;
		cout << "\nS'ha cancel.lat la reserva." << endl;
	}

	bool consultarReserva()
	{
		return estat;
	}
};

int main()
{
	Reserva reserva1("Tilgert", 5, 49.99, true);

	cout << "Nom del client: " << reserva1.consultarNom() << endl;
	cout << "El preu de les nits seleccionades es " << reserva1.calcularPreu() << " euros.";

	reserva1.canviarNits(7);

	cout << "El preu de les nits seleccionades es " << reserva1.calcularPreu() << " euros.";

	if (reserva1.consultarReserva())
	{
		cout << "\nLa reserva esta activa." << endl;
	}
	else
	{
		cout << "\nLa reserva esta cancel.lada." << endl;
	}

	reserva1.cancellarReserva();

	if (reserva1.consultarReserva())
	{
		cout << "\nLa reserva esta activa." << endl;
	}
	else
	{
		cout << "\nLa reserva esta cancel.lada." << endl;
	}

	reserva1.canviarNits(5);
}