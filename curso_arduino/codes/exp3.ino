#define SENSOR 0

#define LED_R 11 //LED vermelho (R)ed
#define LED_Y 12 //LED amarelo  (Y)ellow
#define LED_G 13 //LED verde    (G)reen

const int otima = 25;
const int thres = 5;

void setup() {
	Serial.begin(9600); //baud rate

	/* define os pinos de entrada (Sensor) */
	pinMode(SENSOR, INPUT);

	/* define os pinos de saída (LEDs) */
	pinMode(LED_R, OUTPUT);
	pinMode(LED_Y, OUTPUT);
	pinMode(LED_G, OUTPUT);
}

void loop() {
	float T_sensor = 5.0*analogRead(sensor)/1024.0;
	Serial.print(T_sensor);
	Serial.print(" graus C ->> ");

	if(T_sensor > (otima+thres)) {
		Serial.println(" TA QUENTE! ");
		digitalWrite(LED_R, HIGH);
		digitalWrite(LED_Y, LOW);
		digitalWrite(LED_G, LOW);
	} else if(T_sensor < (otima-thres)) {
		Serial.println(" TA FRIO! ");
		digitalWrite(LED_R, LOW);
		digitalWrite(LED_Y, HIGH);
		digitalWrite(LED_G, LOW);
	} else {
		Serial.println(" TA OTIMO! ");
		digitalWrite(LED_R, LOW);
		digitalWrite(LED_Y, LOW);
		digitalWrite(LED_G, HIGH);
	}
	delay(1000); //1 second
}
