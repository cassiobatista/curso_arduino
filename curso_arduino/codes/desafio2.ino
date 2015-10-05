void loop() {
	int i = 0;
	if(Serial.available() > 0) {
		while(Serial.available() && i<30) 
			str[i++] = (char) Serial.read(); //compose string
		if(str[0]=='A' || str[0]=='a') //amarelo
			digitalWrite(LED_Y, HIGH);
		//else if (strcmp(str, "V"==0)
		else if (str[0]=='V' && strlen(str)==1) //verde
			digitalWrite(LED_G, HIGH);
		else if (strlen(str)==3) {
			for(i=0; i<strlen(str); i++)
				if(str[i]<91) //check ascii code out
					str[i]=str[i]+('a'-'A'); //tolower()
			if(strcmp(str, "red")==0)
				digitalWrite(LED_G, HIGH);
		}
		delay(100);
	}//close if
}//close loop
