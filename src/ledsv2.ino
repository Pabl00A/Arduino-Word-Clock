void actualizeTimeWordv2(int fhour, int fminute, int fsecond) {
  //WORD CLOCK

//  FastLED.clear();

  int vec[200]; //vector que contiene las psoiciones de los leds
  int o=-1;//contador de posiciones del vector

  //THE TIME IS

 vec[o++]=0;
 vec[o++]=1;
 vec[o++]=2;
 vec[o++]=4;
 vec[o++]=5;
 vec[o++]=6;
 vec[o++]=7;
 vec[o++]=9;
 vec[o++]=10;




  ////HOUR///
  if (fhour > 12) {
    fhour -= 12;
    if (fhour < 5) {
      //IN
     vec[o++]=183;
     vec[o++]=184;
      // The
     vec[o++]=196;
     vec[o++]=197;
     vec[o++]=198;
      // afternoon
     vec[o++]=215;
     vec[o++]=216;
     vec[o++]=217;
     vec[o++]=218;
     vec[o++]=219;
     vec[o++]=220;
     vec[o++]=221;
     vec[o++]=222;
     vec[o++]=223;
    }
    else if (fhour < 8) {
      //IN
     vec[o++]=183;
     vec[o++]=184;
      // The
     vec[o++]=196;
     vec[o++]=197;
     vec[o++]=198;
      // evening
     vec[o++]=208;
     vec[o++]=209;
     vec[o++]=210;
     vec[o++]=211;
     vec[o++]=212;
     vec[o++]=213;
     vec[o++]=214;

    }
    else {
      //AT
     vec[o++]=185;
     vec[o++]=186;

      //Night
     vec[o++]=192;
     vec[o++]=193;
     vec[o++]=194;
     vec[o++]=195;
     vec[o++]=196;
    }
  }
  else {

    if (fhour == 12) {
      //IN
     vec[o++]=183;
     vec[o++]=184;
      // The
     vec[o++]=196;
     vec[o++]=197;
     vec[o++]=198;
      // afternoon
     vec[o++]=215;
     vec[o++]=216;
     vec[o++]=217;
     vec[o++]=218;
     vec[o++]=219;
     vec[o++]=220;
     vec[o++]=221;
     vec[o++]=222;
     vec[o++]=223;
    }
    else if (fhour < 6) {
      //AT
     vec[o++]=185;
     vec[o++]=186;

      //Night
     vec[o++]=192;
     vec[o++]=193;
     vec[o++]=194;
     vec[o++]=195;
     vec[o++]=196;
    }
    else {
      //IN
     vec[o++]=183;
     vec[o++]=184;
      // The
     vec[o++]=196;
     vec[o++]=197;
     vec[o++]=198;
      // Morning
     vec[o++]=200;
     vec[o++]=201;
     vec[o++]=202;
     vec[o++]=203;
     vec[o++]=204;
     vec[o++]=205;
     vec[o++]=206;
    }
  }

  
  //if minutes>30 hour +1 because says 15 minutes to next hour
  if (fminute > 30) {
    fhour++;
  }
  switch (fhour) {
    case 0:
     vec[o++]=154;
     vec[o++]=155;
     vec[o++]=156;
     vec[o++]=157;
     vec[o++]=158;
     vec[o++]=159;
      break;
    case 1:
     vec[o++]=130;
     vec[o++]=131;
     vec[o++]=132;
      break;
    case 2:
     vec[o++]=128;
     vec[o++]=129;
     vec[o++]=130;
      break;
    case 3:
     vec[o++]=149;
     vec[o++]=150;
     vec[o++]=151;
     vec[o++]=152;
     vec[o++]=153;
      break;
    case 4:
     vec[o++]=160;
     vec[o++]=161;
     vec[o++]=162;
     vec[o++]=163;
      break;
    case 5:
     vec[o++]=165;
     vec[o++]=166;
     vec[o++]=167;
     vec[o++]=168;
      break;
    case 6:
     vec[o++]=141;
     vec[o++]=142;
     vec[o++]=143;
      break;
    case 7:
     vec[o++]=144;
     vec[o++]=145;
     vec[o++]=146;
     vec[o++]=147;
     vec[o++]=148;
      break;

    case 8:
     vec[o++]=168;
     vec[o++]=169;
     vec[o++]=170;
     vec[o++]=171;
     vec[o++]=172;

      break;

    case 9:
     vec[o++]=137;
     vec[o++]=138;
     vec[o++]=139;
     vec[o++]=140;
      break;

    case 10:
     vec[o++]=172;
     vec[o++]=173;
     vec[o++]=174;

      break;


    case 11:
     vec[o++]=132;
     vec[o++]=133;
     vec[o++]=134;
     vec[o++]=135;
     vec[o++]=136;
     vec[o++]=137;
      break;

    case 12:
     vec[o++]=154;
     vec[o++]=155;
     vec[o++]=156;
     vec[o++]=157;
     vec[o++]=158;
     vec[o++]=159;
      break;

    default: break;
  }

  /////////////minute///////////////
  if (fminute <= 30 && fminute != 0) {
    if (fminute != 15 && fminute != 30) {
      //minutes
     vec[o++]=112;
     vec[o++]=113;
     vec[o++]=114;
     vec[o++]=115;
     vec[o++]=116;
     vec[o++]=117;
     vec[o++]=118;
    }
    //past
   vec[o++]=120;
   vec[o++]=121;
   vec[o++]=122;
   vec[o++]=123;
  }
  else if (fminute > 30) {
    if (fminute != 30) {
      //minutes
     vec[o++]=112;
     vec[o++]=113;
     vec[o++]=114;
     vec[o++]=115;
     vec[o++]=116;
     vec[o++]=117;
     vec[o++]=118;
    }

    //to
   vec[o++]=123;
   vec[o++]=124;

  }
  

  switch (fminute) {
    case 0:
      //Oclock
     vec[o++]=176;
     vec[o++]=177;
     vec[o++]=178;
     vec[o++]=179;
     vec[o++]=180;
     vec[o++]=181;
      break;
    case 1:
     vec[o++]=44;
     vec[o++]=45;
     vec[o++]=46;
      break;
    case 2:
     vec[o++]=42;
     vec[o++]=43;
     vec[o++]=44;
      break;
    case 3:
     vec[o++]=107;
     vec[o++]=108;
     vec[o++]=109;
     vec[o++]=110;
     vec[o++]=111;
      break;
    case 4:
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
      break;
    case 5:
     vec[o++]=56;
     vec[o++]=57;
     vec[o++]=58;
     vec[o++]=59;
      break;
    case 6:
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
      break;
    case 7:
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
      break;
    case 8:
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
      break;
    case 9:
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
      break;
    case 10:
     vec[o++]=32;
     vec[o++]=33;
     vec[o++]=34;
      break;
    case 11:
     vec[o++]=101;
     vec[o++]=102;
     vec[o++]=103;
     vec[o++]=104;
     vec[o++]=105;
     vec[o++]=106;
      break;
    case 12:
     vec[o++]=96;
     vec[o++]=97;
     vec[o++]=98;
     vec[o++]=99;
     vec[o++]=100;
     vec[o++]=101;
      break;
    case 13:
     vec[o++]=88;
     vec[o++]=89;
     vec[o++]=90;
     vec[o++]=91;
     vec[o++]=92;
     vec[o++]=93;
     vec[o++]=94;
     vec[o++]=95;
      break;
    case 14:
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
     vec[o++]=84;
     vec[o++]=85;
     vec[o++]=86;
     vec[o++]=87;
      break;
    case 15:
     vec[o++]=13;

     vec[o++]=16;
     vec[o++]=17;
     vec[o++]=18;
     vec[o++]=19;
     vec[o++]=20;
     vec[o++]=21;
     vec[o++]=22;
      break;
    case 16:
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
     vec[o++]=38;
     vec[o++]=39;
     vec[o++]=40;
     vec[o++]=41;
      break;
    case 17:
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
     vec[o++]=69;
     vec[o++]=70;
     vec[o++]=71;
     vec[o++]=72;
      break;
    case 18:
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
     vec[o++]=53;
     vec[o++]=54;
     vec[o++]=55;
      break;
    case 19:
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
     vec[o++]=76;
     vec[o++]=77;
     vec[o++]=78;
     vec[o++]=79;
      break;
    case 20:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
      break;
    case 21:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=44;
     vec[o++]=45;
     vec[o++]=46;
      break;
    case 22:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=42;
     vec[o++]=43;
     vec[o++]=44;
      break;
    case 23:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=107;
     vec[o++]=108;
     vec[o++]=109;
     vec[o++]=110;
     vec[o++]=111;
      break;
    case 24:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
      break;
    case 25:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=56;
     vec[o++]=57;
     vec[o++]=58;
     vec[o++]=59;
      break;
    case 26:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
      break;
    case 27:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
      break;
    case 28:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
      break;
    case 29:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
      break;
    case 30:

     vec[o++]=12;
     vec[o++]=13;
     vec[o++]=14;
     vec[o++]=15;
      break;
    case 59:
     vec[o++]=44;
     vec[o++]=45;
     vec[o++]=46;
      break;
    case 58:
     vec[o++]=42;
     vec[o++]=43;
     vec[o++]=44;
      break;
    case 57:
     vec[o++]=107;
     vec[o++]=108;
     vec[o++]=109;
     vec[o++]=110;
     vec[o++]=111;
      break;
    case 56:
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
      break;
    case 55:
     vec[o++]=56;
     vec[o++]=57;
     vec[o++]=58;
     vec[o++]=59;
      break;
    case 54:
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
      break;
    case 53:
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
      break;
    case 52:
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
      break;
    case 51:
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
      break;
    case 50:
     vec[o++]=32;
     vec[o++]=33;
     vec[o++]=34;
      break;
    case 49:
     vec[o++]=101;
     vec[o++]=102;
     vec[o++]=103;
     vec[o++]=104;
     vec[o++]=105;
     vec[o++]=106;
      break;
    case 48:
     vec[o++]=96;
     vec[o++]=97;
     vec[o++]=98;
     vec[o++]=99;
     vec[o++]=100;
     vec[o++]=101;
      break;
    case 47:
     vec[o++]=88;
     vec[o++]=89;
     vec[o++]=90;
     vec[o++]=91;
     vec[o++]=92;
     vec[o++]=93;
     vec[o++]=94;
     vec[o++]=95;
      break;
    case 46:
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
     vec[o++]=84;
     vec[o++]=85;
     vec[o++]=86;
     vec[o++]=87;
      break;
    case 45:
     vec[o++]=13;

     vec[o++]=16;
     vec[o++]=17;
     vec[o++]=18;
     vec[o++]=19;
     vec[o++]=20;
     vec[o++]=21;
     vec[o++]=22;
      break;
    case 44:
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
     vec[o++]=38;
     vec[o++]=39;
     vec[o++]=40;
     vec[o++]=41;
      break;
    case 43:
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
     vec[o++]=69;
     vec[o++]=70;
     vec[o++]=71;
     vec[o++]=72;
      break;
    case 42:
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
     vec[o++]=53;
     vec[o++]=54;
     vec[o++]=55;
      break;
    case 41:
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
     vec[o++]=76;
     vec[o++]=77;
     vec[o++]=78;
     vec[o++]=79;
      break;
    case 40:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
      break;
    case 39:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=44;
     vec[o++]=45;
     vec[o++]=46;
      break;
    case 38:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=42;
     vec[o++]=43;
     vec[o++]=44;
      break;
    case 37:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=107;
     vec[o++]=108;
     vec[o++]=109;
     vec[o++]=110;
     vec[o++]=111;
      break;
    case 36:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=80;
     vec[o++]=81;
     vec[o++]=82;
     vec[o++]=83;
      break;
    case 35:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=56;
     vec[o++]=57;
     vec[o++]=58;
     vec[o++]=59;
      break;
    case 34:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=35;
     vec[o++]=36;
     vec[o++]=37;
      break;
    case 33:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=64;
     vec[o++]=65;
     vec[o++]=66;
     vec[o++]=67;
     vec[o++]=68;
      break;
    case 32:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=48;
     vec[o++]=49;
     vec[o++]=50;
     vec[o++]=51;
     vec[o++]=52;
      break;
    case 31:
     vec[o++]=23;
     vec[o++]=24;
     vec[o++]=25;
     vec[o++]=26;
     vec[o++]=27;
     vec[o++]=28;
     vec[o++]=72;
     vec[o++]=73;
     vec[o++]=74;
     vec[o++]=75;
      break;
  }



  for(int ii=0; ii<o;ii++){
    delay(100);
    FastLED.clear();
    leds[vec[ii]] = COLOUR[theColour];
    Serial.println(vec[ii]);
     FastLED.show();
}

  

}
/*

void actualizeTimeDigitalv2(int fhour, int fminute, int fsecond) {
  //WORD CLOCK
 String cad="";
  FastLED.clear();
  if (fhour < 10) {
    printDigitalv2(fhour, 7);
  }
  else {
    String strHour = (String)fhour;
    String  shour1 = strHour.substring(0, 1);
    String  shour2 = strHour.substring(1, 2);
    printDigitalv2(shour1.toInt(), 0);
    printDigitalv2(shour2.toInt(), 7);
  }

  if (fminute < 10) {
    printDigitalv2(0, 130);
    printDigitalv2(fminute, 137);
  }
  else {
    String strMin = (String)fminute;
    String  smin1 = strMin.substring(0, 1);
    String  smin2 = strMin.substring(1, 2);
    printDigitalv2(smin1.toInt(), 130);
    printDigitalv2(smin2.toInt(), 137);
  }

  //	Serial.println("Hora" + (String)fhour);
  //	Serial.println("Minutes" + (String)fminute);


  //2 puntos :
 vec[o++]=46;
 vec[o++]=78;

  FastLED.show();
}

void printDigitalv2(int digit, int valPosition2) {
    String cad="";
  switch (digit) {
    case 0:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 65;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 81;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;
    case 1:
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 18;
     vec[o++]=valPosition2 + 19;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 35;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 67;
     vec[o++]=valPosition2 + 83;
     vec[o++]=valPosition2 + 99;
      break;
    case 2:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 65;
     vec[o++]=valPosition2 + 81;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;
    case 3:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;
    case 4:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 101;
      break;
    case 5:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;
    case 6:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 65;
     vec[o++]=valPosition2 + 81;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;
    case 7:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 101;
      break;
    case 8:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 65;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 81;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 97;
     vec[o++]=valPosition2 + 98;
     vec[o++]=valPosition2 + 99;
     vec[o++]=valPosition2 + 100;
     vec[o++]=valPosition2 + 101;
      break;

    case 9:
     vec[o++]=valPosition2 + 1;
     vec[o++]=valPosition2 + 2;
     vec[o++]=valPosition2 + 3;
     vec[o++]=valPosition2 + 4;
     vec[o++]=valPosition2 + 5;
     vec[o++]=valPosition2 + 21;
     vec[o++]=valPosition2 + 17;
     vec[o++]=valPosition2 + 33;
     vec[o++]=valPosition2 + 37;
     vec[o++]=valPosition2 + 49;
     vec[o++]=valPosition2 + 50;
     vec[o++]=valPosition2 + 51;
     vec[o++]=valPosition2 + 52;
     vec[o++]=valPosition2 + 53;
     vec[o++]=valPosition2 + 69;
     vec[o++]=valPosition2 + 85;
     vec[o++]=valPosition2 + 101;
      break;
  }

}


String clockSecondsv2(int fsecond, String cad) {
  ///////seconds////////////////
  int  valLen = 1;
  if (fsecond > 9) {//if > 9 2 digits the seconds
    valLen = 2;
  }
  String  subscent = "";
  String strSeconds = (String)fsecond;
  if (valLen == 1) {
    subscent = strSeconds.substring(0, 1);
   vec[o++]=224; //0

  }
  else {
    String  subsdec = strSeconds.substring(0, 1);
    subscent = strSeconds.substring(1, 2);
    int isubsdec = subsdec.toInt();

    switch (isubsdec) {//part of seconds left
      case 0:
       vec[o++]=224;
        break;
      case 1:
       vec[o++]=225;
        break;
      case 2:
       vec[o++]=226;
        break;
      case 3:
       vec[o++]=227;
        break;
      case 4:
       vec[o++]=228;
        break;
      case 5:
       vec[o++]=229;
        break;
    }
  }
  int isubscent = subscent.toInt();
  switch (isubscent) {//part of seconds right
    case 0:
     vec[o++]=230;
      break;
    case 1:
     vec[o++]=231;
      break;
    case 2:
     vec[o++]=232;
      break;
    case 3:
     vec[o++]=233;
      break;
    case 4:
     vec[o++]=234;
      break;
    case 5:
     vec[o++]=235;
      break;
    case 6:
     vec[o++]=236;
      break;
    case 7:
     vec[o++]=237;
      break;
    case 8:
     vec[o++]=238;
      break;
    case 9:
    vec[o++]=239;
      break;
  }
  return cad;
}

*/
