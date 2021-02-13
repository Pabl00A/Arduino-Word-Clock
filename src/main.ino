
//custom leds digital


	//hola 

// ----------------------------
// Standard Libraries
// ----------------------------

#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <Wire.h>    // incluye libreria para interfaz I2C
#include <RTClib.h>   // incluye libreria para el manejo del modulo RTC
RTC_DS3231 rtc;      // crea objeto del tipo RTC_DS3231

// ----------------------------
// Additional Libraries
// ----------------------------

#include "UniversalTelegramBot.h"

#include <ArduinoJson.h>

// Initialize Wifi connection to the router
char ssid[] ="*********************";     // your network SSID (name)
char password[] ="**************************";              // your network key

// Initialize Telegram BOT
#define BOTtoken "****************************************"  // your Bot Token (Get from Botfather)
String chat_id = "**************************";   // Get chat_id
//------- ------------------------ ------


WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);//


//int Bot_mtbs = 15000; //mean time between scan messages
//long Bot_lasttime;   //last time messages' scan has been done


int periodo = 300000;//60000=1min
unsigned long TiempoAhora = 0;
unsigned long TiempoHigh = 0;

/////////////LEDS///////
#include <FastLED.h>

#define LED_PIN     3
#define NUM_LEDS    240
#define LED_TYPE    WS2812
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];
int theColour = 2;
long COLOUR[9] = { 0x00ff00, 0xff0000, 0x0000ff, 0xFFFF00, 0xFF00FF , 0x00ffff , 0x9900FF , 0xFF9900 , 0xFFFFFF }; //green , red , blue , yellow , pink , paleblue , purple , orange , white
int mode2 = 0;
//snake
int sSnk = 2;
//PIR
#define PIR_PIN   4 
int brightMatrix=1500;
//efectos
/*CRGBPalette16 currentPalette;
TBlendType    currentBlending;

extern CRGBPalette16 myRedWhiteBluePalette;
extern const TProgmemPalette16 myRedWhiteBluePalette_p PROGMEM;
#define UPDATES_PER_SECOND 100*/
////////////////////////////

void handleNewMessages(int numNewMessages) {
	Serial.println("handleNewMessages");

	for (int i = 0; i < numNewMessages; i++) {
		// Chat id of the requester
		String CHAT_ID = String(bot.messages[i].chat_id);
		if (CHAT_ID != chat_id) {
			bot.sendMessage(CHAT_ID, "Sorry, this bot is no longer available", "");
			bot.sendMessage(chat_id, "Alguien entró", "");////////////////////////////////nse, puede ser errir
			continue;
		}

		String text = bot.messages[i].text;

		if (bot.messages[i].type == "callback_query") {

			if (text == "/colour") {
				String keyboardJson = F("[[{ \"text\" : \"🔴\", \"callback_data\" : \"/red\" },{ \"text\" : \"🟢\", \"callback_data\" : \"/green\" },{ \"text\" : \"🔵\", \"callback_data\" : \"/blue\" }, { \"text\" : \"🟠\", \"callback_data\" : \"/orange\" },{ \"text\" : \"🟡\", \"callback_data\" : \"/yellow\" }, { \"text\" : \"🟣\", \"callback_data\" : \"/purple\" }],");
				keyboardJson += F("[{ \"text\" : \"⚪️\", \"callback_data\" : \"/white\" }, { \"text\" : \"👅\", \"callback_data\" : \"/pink\" }, { \"text\" : \"💠\", \"callback_data\" : \"/paleblue\" }], [{ \"text\" : \"Menu\", \"callback_data\" : \"/menu\"}]]");

				bot.sendMessageWithInlineKeyboard(chat_id, "Color", "", keyboardJson);

			}
			else if (text == "/snake") {
				String keyboardJson = F("[[{ \"text\" : \"  _                             🔼                              _  \", \"callback_data\" : \"/up\" }],[{ \"text\" : \"◀\", \"callback_data\" : \"/left\" },{ \"text\" : \"▶\", \"callback_data\" : \"/right\" }], [{ \"text\" : \"🔽\", \"callback_data\" : \"/down\"}], [{ \"text\" : \"Menu\", \"callback_data\" : \"/menu\"}]]");

				bot.sendMessageWithInlineKeyboard(chat_id, "Snake", "", keyboardJson);
				mode2 = 1;

			}
      else if (text == "/brillo") {
        String keyboardJson = F("[[{ \"text\" : \"  _                             🔼                              _  \", \"callback_data\" : \"/brightup\" }], [{ \"text\" : \"🔽\", \"callback_data\" : \"/brightdown\"}],[{ \"text\" : \"MAX\", \"callback_data\" : \"/maxbright\" },{ \"text\" : \"min\", \"callback_data\" : \"/minbright\" }], [{ \"text\" : \"Menu\", \"callback_data\" : \"/menu\"}]]");

        bot.sendMessageWithInlineKeyboard(chat_id, "Brillo", "", keyboardJson);

      }  
      else if (text == "/menu") {
            String keyboardJson = F("[[{ \"text\" : \"Colores\", \"callback_data\" : \"/colour\" },{ \"text\" : \"Snake\", \"callback_data\" : \"/snake\" },{ \"text\" : \"Reloj\", \"callback_data\" : \"/reloj\" },{ \"text\" : \"Digital\", \"callback_data\" : \"/digital\" },{ \"text\" : \"Brillo\", \"callback_data\" : \"/brillo\" }]]");

           bot.sendMessageWithInlineKeyboard(chat_id, "Menu", "", keyboardJson);
      }  
			else if (text == "/red") {
				theColour = 1;
			}
			else if (text == "/green") {
				theColour = 0;
			}
			else if (text == "/blue") {
				theColour = 2;
			}
			else if (text == "/orange") {
				theColour = 7;
			}
			else if (text == "/yellow") {
				theColour = 3;
			}
			else if (text == "/purple") {
				theColour = 6;
			}
			else if (text == "/pink") {
				theColour = 4;
			}
			else if (text == "/white") {
				theColour = 8;
			}
			else if (text == "/paleblue") {
				theColour = 5;
			}
			else if (text == "/left") {
				sSnk = 2;
			}
			else if (text == "/right") {
				sSnk = 1;
			}
			else if (text == "/up") {
				sSnk = 3;
			}
			else if (text == "/down") {
				sSnk = 4;
			}
			else if (text == "/reloj") {
				mode2 = 0;
			}
			else if (text == "/digital") {
				mode2 = 2;
			}
      else if (text == "/brightup") {
        if(brightMatrix<=1700){
                 brightMatrix+=200;
        }
      }
      else if (text == "/brightdown") {
        if(brightMatrix>=250){
                 brightMatrix-=200;
        }
      }
      else if (text == "/maxbright") {
        brightMatrix=1900;
      }
      else if (text == "/minbright") {
            brightMatrix=50;
      }   
		}
		else {

			String keyboardJson = F("[[{ \"text\" : \"Colores\", \"callback_data\" : \"/colour\" },{ \"text\" : \"Snake\", \"callback_data\" : \"/snake\" },{ \"text\" : \"Reloj\", \"callback_data\" : \"/reloj\" },{ \"text\" : \"Digital\", \"callback_data\" : \"/digital\" },{ \"text\" : \"Brillo\", \"callback_data\" : \"/brillo\" }]]");

			bot.sendMessageWithInlineKeyboard(chat_id, "Menu", "", keyboardJson);

			delay(1000);

			/*  DateTime fecha = rtc.now();      // funcion que devuelve fecha y horario en formato
			 String tiempo=(String)fecha.day()+"/"+(String)fecha.month()+"/"+(String)fecha.year()+"  "+(String)fecha.hour()+":"+(String)fecha.minute()+":"+(String)fecha.second();*/
			 /*bot.sendMessage(chat_id,tiempo, "");*/
		}


	}
}



void setup() {
	Serial.begin(115200);
reconect:
	delay(3000);
	// Attempt to connect to Wifi network:
	Serial.print("Connecting Wifi: ");
	Serial.println(ssid);
	delay(2000);
	// Set WiFi to station mode and disconnect from an AP if it was Previously connected

	WiFi.mode(WIFI_STA);
	WiFi.begin(ssid, password);
	delay(2000);
	int iii = 0;
	while (WiFi.status() != WL_CONNECTED && iii < 15) {
		Serial.print(".");
		delay(200);
		iii++;
	}
	if (iii == 15) {
		goto reconect;
	}
	delay(100);
	Serial.println("");
	Serial.println("WiFi connected");
	Serial.print("IP address: ");
	Serial.println(WiFi.localIP());
	delay(100);
	if (!rtc.begin()) {                           // si falla la inicializacion del modulo
		Serial.println("Modulo RTC no encontrado !");  // muestra mensaje de error
		while (1);                                     // bucle infinito que detiene ejecucion del programa
	}
	//rtc.adjust(DateTime(__DATE__, __TIME__));        // funcion que permite establecer fecha y horario
													   // al momento de la compilacion. Comentar esta linea
												   // y volver a subir para normal operacion

   //PIR
	pinMode(PIR_PIN, INPUT);



	delay(100);

	/////Leds Setup//
	FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
	FastLED.setMaxPowerInVoltsAndMilliamps(5, 1900);
	Serial.println("Welcome");
	bot.sendMessage(chat_id, "Welcome", "");
  String keyboardJson = "[[{ \"text\" : \"Colores\", \"callback_data\" : \"/colour\" },{ \"text\" : \"Snake\", \"callback_data\" : \"/snake\" }";
  keyboardJson +=",{ \"text\" : \"Reloj\", \"callback_data\" : \"/reloj\" }";
  keyboardJson +=",{ \"text\" : \"Digital\", \"callback_data\" : \"/digital\" }";
  keyboardJson +=",{ \"text\" : \"Brillo\", \"callback_data\" : \"/brillo\" }]]";

  bot.sendMessageWithInlineKeyboard(chat_id, "Menu", "", keyboardJson);


  
	//create a task that will be executed in the Task1code() function, with priority 1 and executed on core 0
	xTaskCreatePinnedToCore(
		Task1code,   // Task function. 
		"Task1",     // name of task. 
		50000,       // Stack size of task 
		NULL,        // parameter of the task 
		1,           // priority of the task 
		NULL,      // Task handle to keep track of created task 
		0);          // pin task to core 0             
	delay(100);

	/* //efectos

	   currentPalette = RainbowColors_p;
	   currentBlending = LINEARBLEND;*/

	delay(3000);
}

void Task1code(void* pvParameters) {

	for (;;) {
		Serial.println("Aqui1");
		//new messages
		int numNewMessages = bot.getUpdates(bot.last_message_received + 1);
		while (numNewMessages) {
			Serial.println("got response");
			handleNewMessages(numNewMessages);
			numNewMessages = bot.getUpdates(bot.last_message_received + 1);
		}
	}

}

void loop() {

	if (digitalRead(PIR_PIN) == HIGH) {
		FastLED.setMaxPowerInVoltsAndMilliamps(5, brightMatrix);  //Voltage, miliAmps
		TiempoHigh = millis();
	}
	else if (millis() > TiempoHigh + periodo) {
		FastLED.setMaxPowerInVoltsAndMilliamps(5, 150);    //Voltage, miliAmps
	}


	DateTime fecha = rtc.now();      // funcion que devuelve fecha y horario en formato

	if (mode2 == 0) {
		actualizeTimeWord(fecha.hour(), fecha.minute(), fecha.second());
	}
	else if (mode2 == 1) {
		sSnake();
	}
	else if (mode2 == 2) {
		actualizeTimeDigital(fecha.hour(), fecha.minute(), fecha.second());
	}

}
