void setup() {
	Serial.begin(9600); //baud rate

	/* define os pinos de saída (LEDs) */
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}

void loop() {
	float T_sensor = 100.0*analogRead(A0)/1024.0;
	Serial.print("Sensor: ");
	Serial.println(T_sensor);

	if(T_sensor > 80.0) {
		Serial.println(" TA CLARO! ");
		digitalWrite(12, LOW);
		digitalWrite(13, LOW);
	} else if(T_sensor < 20.0) {
		Serial.println(" TA ESCURO! ");
		digitalWrite(12, HIGH);
		digitalWrite(13, HIGH);
	} else {
		Serial.println(" TA OTIMO! ");
		digitalWrite(12, HIGH);
		digitalWrite(13, LOW);
	}
	delay(800); //1 second
}
