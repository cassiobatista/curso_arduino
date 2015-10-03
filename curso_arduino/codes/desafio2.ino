void loop() {
	int i = 0;
	if(Serial.available() > 0) {
		while(Serial.available() && i<30) 
			str[i++] = (char) Serial.read();
		if(str[0]=='A' || str[0]=='a')
			digitalWrite(LED_Y, HIGH);
		else if (str[0]=='V' && strlen(str)==1)
			digitalWrite(LED_G, HIGH);
		else if (strlen(str)==3) {
			for(i=0; i<strlen(str); i++)
				if(str[i]<91)
					str[i]=str[i]+('a'-'A');
			if(strcmp(str, "red")==0)
				digitalWrite(LED_G, LOW);
		}
		delay(100);
	}//close if
}//close loop
