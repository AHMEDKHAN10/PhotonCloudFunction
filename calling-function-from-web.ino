int RedLeD = D3;
int GreenLeD = D4;
int BlueLeD = D6;
//int ledToggle(String command);

void setup() {
    Serial.begin();
    pinMode(RedLeD, OUTPUT);
    pinMode(GreenLeD, OUTPUT);
    pinMode(BlueLeD, OUTPUT);
    Particle.function("led",ledToggle);
    // Particle.function("Greenled",ledToggle);
    // Particle.function("Blueled",ledToggle);
    digitalWrite(RedLeD, LOW);
    digitalWrite(GreenLeD, LOW);
    digitalWrite(BlueLeD, LOW);
    
}

void loop() {
    

}
int ledToggle(String command)
{
    if (command=="onred") 
    {
		digitalWrite(RedLeD,HIGH);
		digitalWrite(GreenLeD,LOW);
		digitalWrite(BlueLeD,LOW);
		return 1;
	}
	else if (command=="offred") 
	{
		digitalWrite(RedLeD,LOW);
		digitalWrite(GreenLeD,LOW);
		digitalWrite(BlueLeD,LOW);
		return 0;
	}
	else if (command=="ongreen") 
	{
		digitalWrite(GreenLeD,HIGH);
		digitalWrite(BlueLeD,LOW);
		digitalWrite(RedLeD,LOW);
		return 1;
	}
		
	else if (command=="offgreen") 
	{
		digitalWrite(GreenLeD,LOW);
		digitalWrite(RedLeD,LOW);
        digitalWrite(BlueLeD,LOW);
        return 0;
	}
	
	else if (command=="onblue") 
	{
		digitalWrite(BlueLeD,HIGH);
		digitalWrite(GreenLeD,LOW);
		digitalWrite(RedLeD,LOW);
		return 1;
	}
	else if (command=="offblue") 
	{
		digitalWrite(BlueLeD,LOW);
		digitalWrite(GreenLeD,LOW);
		digitalWrite(RedLeD,LOW);
		return 0;
	}
	else 
	{
		return -1;
	}


}