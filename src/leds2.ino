void actualizeTimeWordv2(int fhour, int fminute, int fsecond) {
  //WORD CLOCK

//  FastLED.clear();

  String cad="";
  //THE TIME IS

  cad+=(String)0+",";
  cad+=(String)1+",";
  cad+=(String)2+",";
  cad+=(String)4+",";
  cad+=(String)5+",";
  cad+=(String)6+",";
  cad+=(String)7+",";
  cad+=(String)9+",";
  cad+=(String)10+",";




  ////HOUR///
  if (fhour > 12) {
    fhour -= 12;
    if (fhour < 5) {
      //IN
      cad+=(String)183+",";
      cad+=(String)184+",";
      // The
      cad+=(String)196+",";
      cad+=(String)197+",";
      cad+=(String)198+",";
      // afternoon
      cad+=(String)215+",";
      cad+=(String)216+",";
      cad+=(String)217+",";
      cad+=(String)218+",";
      cad+=(String)219+",";
      cad+=(String)220+",";
      cad+=(String)221+",";
      cad+=(String)222+",";
      cad+=(String)223+",";
    }
    else if (fhour < 8) {
      //IN
      cad+=(String)183+",";
      cad+=(String)184+",";
      // The
      cad+=(String)196+",";
      cad+=(String)197+",";
      cad+=(String)198+",";
      // evening
      cad+=(String)208+",";
      cad+=(String)209+",";
      cad+=(String)210+",";
      cad+=(String)211+",";
      cad+=(String)212+",";
      cad+=(String)213+",";
      cad+=(String)214+",";

    }
    else {
      //AT
      cad+=(String)185+",";
      cad+=(String)186+",";

      //Night
      cad+=(String)192+",";
      cad+=(String)193+",";
      cad+=(String)194+",";
      cad+=(String)195+",";
      cad+=(String)196+",";
    }
  }
  else {

    if (fhour == 12) {
      //IN
      cad+=(String)183+",";
      cad+=(String)184+",";
      // The
      cad+=(String)196+",";
      cad+=(String)197+",";
      cad+=(String)198+",";
      // afternoon
      cad+=(String)215+",";
      cad+=(String)216+",";
      cad+=(String)217+",";
      cad+=(String)218+",";
      cad+=(String)219+",";
      cad+=(String)220+",";
      cad+=(String)221+",";
      cad+=(String)222+",";
      cad+=(String)223+",";
    }
    else if (fhour < 6) {
      //AT
      cad+=(String)185+",";
      cad+=(String)186+",";

      //Night
      cad+=(String)192+",";
      cad+=(String)193+",";
      cad+=(String)194+",";
      cad+=(String)195+",";
      cad+=(String)196+",";
    }
    else {
      //IN
      cad+=(String)183+",";
      cad+=(String)184+",";
      // The
      cad+=(String)196+",";
      cad+=(String)197+",";
      cad+=(String)198+",";
      // Morning
      cad+=(String)200+",";
      cad+=(String)201+",";
      cad+=(String)202+",";
      cad+=(String)203+",";
      cad+=(String)204+",";
      cad+=(String)205+",";
      cad+=(String)206+",";
    }
  }

  
  //if minutes>30 hour +1 because says 15 minutes to next hour
  if (fminute > 30) {
    fhour++;
  }
  switch (fhour) {
    case 0:
      cad+=(String)154+",";
      cad+=(String)155+",";
      cad+=(String)156+",";
      cad+=(String)157+",";
      cad+=(String)158+",";
      cad+=(String)159+",";
      break;
    case 1:
      cad+=(String)130+",";
      cad+=(String)131+",";
      cad+=(String)132+",";
      break;
    case 2:
      cad+=(String)128+",";
      cad+=(String)129+",";
      cad+=(String)130+",";
      break;
    case 3:
      cad+=(String)149+",";
      cad+=(String)150+",";
      cad+=(String)151+",";
      cad+=(String)152+",";
      cad+=(String)153+",";
      break;
    case 4:
      cad+=(String)160+",";
      cad+=(String)161+",";
      cad+=(String)162+",";
      cad+=(String)163+",";
      break;
    case 5:
      cad+=(String)165+",";
      cad+=(String)166+",";
      cad+=(String)167+",";
      cad+=(String)168+",";
      break;
    case 6:
      cad+=(String)141+",";
      cad+=(String)142+",";
      cad+=(String)143+",";
      break;
    case 7:
      cad+=(String)144+",";
      cad+=(String)145+",";
      cad+=(String)146+",";
      cad+=(String)147+",";
      cad+=(String)148+",";
      break;

    case 8:
      cad+=(String)168+",";
      cad+=(String)169+",";
      cad+=(String)170+",";
      cad+=(String)171+",";
      cad+=(String)172+",";

      break;

    case 9:
      cad+=(String)137+",";
      cad+=(String)138+",";
      cad+=(String)139+",";
      cad+=(String)140+",";
      break;

    case 10:
      cad+=(String)172+",";
      cad+=(String)173+",";
      cad+=(String)174+",";

      break;


    case 11:
      cad+=(String)132+",";
      cad+=(String)133+",";
      cad+=(String)134+",";
      cad+=(String)135+",";
      cad+=(String)136+",";
      cad+=(String)137+",";
      break;

    case 12:
      cad+=(String)154+",";
      cad+=(String)155+",";
      cad+=(String)156+",";
      cad+=(String)157+",";
      cad+=(String)158+",";
      cad+=(String)159+",";
      break;

    default: break;
  }

  /////////////minute///////////////
  if (fminute <= 30 && fminute != 0) {
    if (fminute != 15 && fminute != 30) {
      //minutes
      cad+=(String)112+",";
      cad+=(String)113+",";
      cad+=(String)114+",";
      cad+=(String)115+",";
      cad+=(String)116+",";
      cad+=(String)117+",";
      cad+=(String)118+",";
    }
    //past
    cad+=(String)120+",";
    cad+=(String)121+",";
    cad+=(String)122+",";
    cad+=(String)123+",";
  }
  else if (fminute > 30) {
    if (fminute != 30) {
      //minutes
      cad+=(String)112+",";
      cad+=(String)113+",";
      cad+=(String)114+",";
      cad+=(String)115+",";
      cad+=(String)116+",";
      cad+=(String)117+",";
      cad+=(String)118+",";
    }

    //to
    cad+=(String)123+",";
    cad+=(String)124+",";

  }
  

  switch (fminute) {
    case 0:
      //Oclock
      cad+=(String)176+",";
      cad+=(String)177+",";
      cad+=(String)178+",";
      cad+=(String)179+",";
      cad+=(String)180+",";
      cad+=(String)181+",";
      break;
    case 1:
      cad+=(String)44+",";
      cad+=(String)45+",";
      cad+=(String)46+",";
      break;
    case 2:
      cad+=(String)42+",";
      cad+=(String)43+",";
      cad+=(String)44+",";
      break;
    case 3:
      cad+=(String)107+",";
      cad+=(String)108+",";
      cad+=(String)109+",";
      cad+=(String)110+",";
      cad+=(String)111+",";
      break;
    case 4:
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      break;
    case 5:
      cad+=(String)56+",";
      cad+=(String)57+",";
      cad+=(String)58+",";
      cad+=(String)59+",";
      break;
    case 6:
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      break;
    case 7:
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      break;
    case 8:
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      break;
    case 9:
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      break;
    case 10:
      cad+=(String)32+",";
      cad+=(String)33+",";
      cad+=(String)34+",";
      break;
    case 11:
      cad+=(String)101+",";
      cad+=(String)102+",";
      cad+=(String)103+",";
      cad+=(String)104+",";
      cad+=(String)105+",";
      cad+=(String)106+",";
      break;
    case 12:
      cad+=(String)96+",";
      cad+=(String)97+",";
      cad+=(String)98+",";
      cad+=(String)99+",";
      cad+=(String)100+",";
      cad+=(String)101+",";
      break;
    case 13:
      cad+=(String)88+",";
      cad+=(String)89+",";
      cad+=(String)90+",";
      cad+=(String)91+",";
      cad+=(String)92+",";
      cad+=(String)93+",";
      cad+=(String)94+",";
      cad+=(String)95+",";
      break;
    case 14:
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      cad+=(String)84+",";
      cad+=(String)85+",";
      cad+=(String)86+",";
      cad+=(String)87+",";
      break;
    case 15:
      cad+=(String)13+",";

      cad+=(String)16+",";
      cad+=(String)17+",";
      cad+=(String)18+",";
      cad+=(String)19+",";
      cad+=(String)20+",";
      cad+=(String)21+",";
      cad+=(String)22+",";
      break;
    case 16:
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      cad+=(String)38+",";
      cad+=(String)39+",";
      cad+=(String)40+",";
      cad+=(String)41+",";
      break;
    case 17:
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      cad+=(String)69+",";
      cad+=(String)70+",";
      cad+=(String)71+",";
      cad+=(String)72+",";
      break;
    case 18:
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      cad+=(String)53+",";
      cad+=(String)54+",";
      cad+=(String)55+",";
      break;
    case 19:
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      cad+=(String)76+",";
      cad+=(String)77+",";
      cad+=(String)78+",";
      cad+=(String)79+",";
      break;
    case 20:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      break;
    case 21:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)44+",";
      cad+=(String)45+",";
      cad+=(String)46+",";
      break;
    case 22:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)42+",";
      cad+=(String)43+",";
      cad+=(String)44+",";
      break;
    case 23:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)107+",";
      cad+=(String)108+",";
      cad+=(String)109+",";
      cad+=(String)110+",";
      cad+=(String)111+",";
      break;
    case 24:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      break;
    case 25:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)56+",";
      cad+=(String)57+",";
      cad+=(String)58+",";
      cad+=(String)59+",";
      break;
    case 26:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      break;
    case 27:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      break;
    case 28:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      break;
    case 29:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      break;
    case 30:

      cad+=(String)12+",";
      cad+=(String)13+",";
      cad+=(String)14+",";
      cad+=(String)15+",";
      break;
    case 59:
      cad+=(String)44+",";
      cad+=(String)45+",";
      cad+=(String)46+",";
      break;
    case 58:
      cad+=(String)42+",";
      cad+=(String)43+",";
      cad+=(String)44+",";
      break;
    case 57:
      cad+=(String)107+",";
      cad+=(String)108+",";
      cad+=(String)109+",";
      cad+=(String)110+",";
      cad+=(String)111+",";
      break;
    case 56:
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      break;
    case 55:
      cad+=(String)56+",";
      cad+=(String)57+",";
      cad+=(String)58+",";
      cad+=(String)59+",";
      break;
    case 54:
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      break;
    case 53:
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      break;
    case 52:
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      break;
    case 51:
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      break;
    case 50:
      cad+=(String)32+",";
      cad+=(String)33+",";
      cad+=(String)34+",";
      break;
    case 49:
      cad+=(String)101+",";
      cad+=(String)102+",";
      cad+=(String)103+",";
      cad+=(String)104+",";
      cad+=(String)105+",";
      cad+=(String)106+",";
      break;
    case 48:
      cad+=(String)96+",";
      cad+=(String)97+",";
      cad+=(String)98+",";
      cad+=(String)99+",";
      cad+=(String)100+",";
      cad+=(String)101+",";
      break;
    case 47:
      cad+=(String)88+",";
      cad+=(String)89+",";
      cad+=(String)90+",";
      cad+=(String)91+",";
      cad+=(String)92+",";
      cad+=(String)93+",";
      cad+=(String)94+",";
      cad+=(String)95+",";
      break;
    case 46:
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      cad+=(String)84+",";
      cad+=(String)85+",";
      cad+=(String)86+",";
      cad+=(String)87+",";
      break;
    case 45:
      cad+=(String)13+",";

      cad+=(String)16+",";
      cad+=(String)17+",";
      cad+=(String)18+",";
      cad+=(String)19+",";
      cad+=(String)20+",";
      cad+=(String)21+",";
      cad+=(String)22+",";
      break;
    case 44:
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      cad+=(String)38+",";
      cad+=(String)39+",";
      cad+=(String)40+",";
      cad+=(String)41+",";
      break;
    case 43:
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      cad+=(String)69+",";
      cad+=(String)70+",";
      cad+=(String)71+",";
      cad+=(String)72+",";
      break;
    case 42:
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      cad+=(String)53+",";
      cad+=(String)54+",";
      cad+=(String)55+",";
      break;
    case 41:
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      cad+=(String)76+",";
      cad+=(String)77+",";
      cad+=(String)78+",";
      cad+=(String)79+",";
      break;
    case 40:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      break;
    case 39:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)44+",";
      cad+=(String)45+",";
      cad+=(String)46+",";
      break;
    case 38:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)42+",";
      cad+=(String)43+",";
      cad+=(String)44+",";
      break;
    case 37:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)107+",";
      cad+=(String)108+",";
      cad+=(String)109+",";
      cad+=(String)110+",";
      cad+=(String)111+",";
      break;
    case 36:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)80+",";
      cad+=(String)81+",";
      cad+=(String)82+",";
      cad+=(String)83+",";
      break;
    case 35:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)56+",";
      cad+=(String)57+",";
      cad+=(String)58+",";
      cad+=(String)59+",";
      break;
    case 34:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)35+",";
      cad+=(String)36+",";
      cad+=(String)37+",";
      break;
    case 33:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)64+",";
      cad+=(String)65+",";
      cad+=(String)66+",";
      cad+=(String)67+",";
      cad+=(String)68+",";
      break;
    case 32:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)48+",";
      cad+=(String)49+",";
      cad+=(String)50+",";
      cad+=(String)51+",";
      cad+=(String)52+",";
      break;
    case 31:
      cad+=(String)23+",";
      cad+=(String)24+",";
      cad+=(String)25+",";
      cad+=(String)26+",";
      cad+=(String)27+",";
      cad+=(String)28+",";
      cad+=(String)72+",";
      cad+=(String)73+",";
      cad+=(String)74+",";
      cad+=(String)75+",";
      break;
  }

  
//cad= clockSecondsv2(fsecond, cad);

//while(cad.length()>3){
//  FastLED.clear();
//  int pos_coma = cad.indexOf(",");   
//  leds[ cad.substring(0, pos_coma).toInt()] = COLOUR[theColour];
//  cad=cad.substring(pos_coma+1);
   Serial.println(cad);
//  Serial.println(cad.substring(0, pos_coma).toInt());
//  FastLED.show();
//}
  

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
  cad+=(String)46+",";
  cad+=(String)78+",";

  FastLED.show();
}

void printDigitalv2(int digit, int valPosition2) {
    String cad="";
  switch (digit) {
    case 0:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 65+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 81+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 1:
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 18+",";
      cad+=(String)valPosition2 + 19+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 35+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 67+",";
      cad+=(String)valPosition2 + 83+",";
      cad+=(String)valPosition2 + 99+",";
      break;
    case 2:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 65+",";
      cad+=(String)valPosition2 + 81+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 3:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 4:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 5:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 6:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 65+",";
      cad+=(String)valPosition2 + 81+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 7:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 101+",";
      break;
    case 8:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 65+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 81+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 97+",";
      cad+=(String)valPosition2 + 98+",";
      cad+=(String)valPosition2 + 99+",";
      cad+=(String)valPosition2 + 100+",";
      cad+=(String)valPosition2 + 101+",";
      break;

    case 9:
      cad+=(String)valPosition2 + 1+",";
      cad+=(String)valPosition2 + 2+",";
      cad+=(String)valPosition2 + 3+",";
      cad+=(String)valPosition2 + 4+",";
      cad+=(String)valPosition2 + 5+",";
      cad+=(String)valPosition2 + 21+",";
      cad+=(String)valPosition2 + 17+",";
      cad+=(String)valPosition2 + 33+",";
      cad+=(String)valPosition2 + 37+",";
      cad+=(String)valPosition2 + 49+",";
      cad+=(String)valPosition2 + 50+",";
      cad+=(String)valPosition2 + 51+",";
      cad+=(String)valPosition2 + 52+",";
      cad+=(String)valPosition2 + 53+",";
      cad+=(String)valPosition2 + 69+",";
      cad+=(String)valPosition2 + 85+",";
      cad+=(String)valPosition2 + 101+",";
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
    cad+=(String)224+","; //0

  }
  else {
    String  subsdec = strSeconds.substring(0, 1);
    subscent = strSeconds.substring(1, 2);
    int isubsdec = subsdec.toInt();

    switch (isubsdec) {//part of seconds left
      case 0:
        cad+=(String)224+",";
        break;
      case 1:
        cad+=(String)225+",";
        break;
      case 2:
        cad+=(String)226+",";
        break;
      case 3:
        cad+=(String)227+",";
        break;
      case 4:
        cad+=(String)228+",";
        break;
      case 5:
        cad+=(String)229+",";
        break;
    }
  }
  int isubscent = subscent.toInt();
  switch (isubscent) {//part of seconds right
    case 0:
      cad+=(String)230+",";
      break;
    case 1:
      cad+=(String)231+",";
      break;
    case 2:
      cad+=(String)232+",";
      break;
    case 3:
      cad+=(String)233+",";
      break;
    case 4:
      cad+=(String)234+",";
      break;
    case 5:
      cad+=(String)235+",";
      break;
    case 6:
      cad+=(String)236+",";
      break;
    case 7:
      cad+=(String)237+",";
      break;
    case 8:
      cad+=(String)238+",";
      break;
    case 9:
     cad+=(String)239+",";
      break;
  }
  return cad;
}

*/
