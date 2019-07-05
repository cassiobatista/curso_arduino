char str[30] = ""; // minha string

void setup() {
	Serial.begin(9600); //baud rate
	Serial.println("Escreva uma mensagem acima");
}

void loop() {
	int i = 0; //iterator
	if(Serial.available() > 0) {
		while(Serial.available()) {
			str[i++] = (char) Serial.read(); // le char por char
		}
		for(i=0; i<30; i++) {
			Serial.print(str[i]);
		}
		Serial.println("");
	}
}
