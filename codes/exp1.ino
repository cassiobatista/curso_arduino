#define LED_R1 7 //R vermelho
#define LED_Y1 8 //Y amarelo
#define LED_G1 9 //B verde

#define LED_R2 10
#define LED_Y2 11
#define LED_G2 12

void setup() {
	Serial.begin(9600); //baud rate for serial monitor

	/* LEDs para o primeiro semaforo */
	pinMode(LED_R1, OUTPUT);
	pinMode(LED_Y1, OUTPUT);
	pinMode(LED_G1, OUTPUT);

	/* LEDs para o segundo semaforo */
	pinMode(LED_R2, OUTPUT);
	pinMode(LED_Y2, OUTPUT);
	pinMode(LED_G2, OUTPUT);
}//fecha setup()

void loop() {
	// #1 fechado na primeira via e aberto na segunda
	digitalWrite(LED_R1, HIGH);
	digitalWrite(LED_Y1, LOW);
	digitalWrite(LED_G1, LOW); //-
	digitalWrite(LED_R2, LOW);
	digitalWrite(LED_Y2, LOW);
	digitalWrite(LED_G2, HIGH);
	delay(2000); //2 seconds

	// #2 fechado na primeira via e atencao na segunda
	digitalWrite(LED_R1, HIGH);
	digitalWrite(LED_Y1, LOW);
	digitalWrite(LED_G1, LOW); //-
	digitalWrite(LED_R2, LOW);
	digitalWrite(LED_Y2, HIGH);
	digitalWrite(LED_G2, LOW);
	delay(2000); //2 seconds

	// #3 fechado na primeira via e fechado na segunda (precaucao)
	digitalWrite(LED_R1, HIGH);
	digitalWrite(LED_Y1, LOW);
	digitalWrite(LED_G1, LOW); //-
	digitalWrite(LED_R2, HIGH);
	digitalWrite(LED_Y2, LOW);
	digitalWrite(LED_G2, LOW);
	delay(1000); //1 second

	// #4 aberto na primeira via e fechado na segunda 
	digitalWrite(LED_R1, LOW);
	digitalWrite(LED_Y1, LOW);
	digitalWrite(LED_G1, HIGH); //-
	digitalWrite(LED_R2, HIGH);
	digitalWrite(LED_Y2, LOW);
	digitalWrite(LED_G2, LOW); 
	delay(2000); //2 seconds

	// #5 atencao na primeira via e fechado na segunda 
	digitalWrite(LED_R1, LOW);
	digitalWrite(LED_Y1, HIGH);
	digitalWrite(LED_G1, LOW); //-
	digitalWrite(LED_R2, HIGH);
	digitalWrite(LED_Y2, LOW);
	digitalWrite(LED_G2, LOW); 
	delay(2000); //2 seconds

	// #6 fechado na primeira via e fechado na segunda (precaucao)
	digitalWrite(LED_R1, HIGH);
	digitalWrite(LED_Y1, LOW);
	digitalWrite(LED_G1, LOW); //-
	digitalWrite(LED_R2, HIGH);
	digitalWrite(LED_Y2, LOW);
	digitalWrite(LED_G2, LOW);
	delay(2000); //2 seconds
}//EOF
