//       3
//       |
//   2-- 0 --1  
//       | 
//       4

String positions = "70,71,72,73,";
String actions = "2";

int numCubes = 4;

int randomNumber = 0;

void sSnake() {
	FastLED.clear();

int arrayPos[numCubes];
	int actual = 0;
	String actualActions = "";
	String actualPositions = "";

	for (int ii = 0; ii < numCubes; ii++) {
		int pos_coma = positions.indexOf(",");
		arrayPos[ii] = positions.substring(0, pos_coma).toInt();

		if (ii == 0) {
			actual = arrayPos[ii];
			int lastmov = actions.substring(0, 1).toInt();
			if (((sSnk == 1 || sSnk == 2) && (lastmov == 1 || lastmov == 2)) || ((sSnk == 3 || sSnk == 4) && (lastmov == 3 || lastmov == 4))) {
				sSnk = lastmov;

			}
			switch (sSnk) {//we use the before number movement

			case 1:  actual++;
				break;
			case 2:  actual--;
				break;
			case 3:  actual -= 16;
				break;
			case 4:  actual += 16;
				break;
			}

			if ((actual) % 16 == 0 && (arrayPos[ii] + 1) % 16 == 0) {
				actual -= 16;
			}
			else if ((actual + 1) % 16 == 0 && (arrayPos[ii]) % 16 == 0) {
				actual += 16;
			}
			else if (actual > 239) {
				actual = arrayPos[ii] - 224;
			}
			else if (actual < 0) {
				actual = arrayPos[ii] + 224;
			}
			actualActions += (String)sSnk;

		}
		else {
			actual = arrayPos[ii - 1];     
		}


      leds[actual] = COLOUR[theColour];
      FastLED.show();
		actualPositions += (String)actual + ",";
		positions = positions.substring(pos_coma + 1);
	}


	positions = actualPositions;
	actions = actualActions;
 
    genSnakeParts(arrayPos);
    
//	delay(500);
}

void genSnakeParts(int arrayy[]) {
  leds[randomNumber] = COLOUR[1];
  FastLED.show();
    if (arrayy[0] == randomNumber) {
		positions += (String)arrayy[numCubes - 1] + 1 + ",";
		numCubes++;
   
	sss:
		//Establecemos la semilla en un pin analogico	
		randomSeed(analogRead(A0));
		//Genera un numero aleatorio entre 1 y 100
		randomNumber = random(0, 239);


		for (int ii = 0; ii < numCubes; ii++) {
			if (arrayy[ii] == randomNumber) {
				goto sss;
			}
		}
    }
	


}


