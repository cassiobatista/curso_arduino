void setup() {
	Serial.begin(9600);

	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
}

void loop() {
	/* tensao: [0--5V] */
	int tensao = 5*analogRead(A0)/1024.0;
	acender((tensao+8));
	delay(300);
}

void acender(int pin) {
	digitalWrite(8,  LOW);
	digitalWrite(9,  LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	digitalWrite(12, LOW);
	digitalWrite(pin, HIGH);
}
