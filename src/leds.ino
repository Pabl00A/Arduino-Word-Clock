 void actualizeTime(int fhour,int fminute,int fsecond) {

       
    FastLED.clear(); 
//THE TIME IS

        leds[0] =COLOUR[theColour]; 
        leds[1] =COLOUR[theColour]; 
        leds[2] =COLOUR[theColour]; 
        leds[4] =COLOUR[theColour]; 
        leds[5] =COLOUR[theColour]; 
        leds[6] =COLOUR[theColour]; 
        leds[7] =COLOUR[theColour]; 
        leds[9] =COLOUR[theColour]; 
        leds[10] =COLOUR[theColour]; 
 



 ////HOUR///
  if(fhour>12){
    fhour-=12;
    if(fhour<5){
         //IN
        leds[183] =COLOUR[theColour]; 
        leds[184] =COLOUR[theColour]; 
        // The
        leds[196] =COLOUR[theColour]; 
        leds[197] =COLOUR[theColour]; 
        leds[198] =COLOUR[theColour]; 
       // afternoon
        leds[215] =COLOUR[theColour]; 
        leds[216] =COLOUR[theColour]; 
        leds[217] =COLOUR[theColour];    
        leds[218] =COLOUR[theColour]; 
        leds[219] =COLOUR[theColour]; 
        leds[220] =COLOUR[theColour]; 
        leds[221] =COLOUR[theColour]; 
        leds[222] =COLOUR[theColour]; 
        leds[223] =COLOUR[theColour]; 
    }else if(fhour<8){
       //IN
        leds[183] =COLOUR[theColour]; 
        leds[184] =COLOUR[theColour]; 
        // The
        leds[196] =COLOUR[theColour]; 
        leds[197] =COLOUR[theColour]; 
        leds[198] =COLOUR[theColour]; 
      // evening
        leds[208] =COLOUR[theColour]; 
        leds[209] =COLOUR[theColour]; 
        leds[210] =COLOUR[theColour];    
        leds[211] =COLOUR[theColour]; 
        leds[212] =COLOUR[theColour]; 
        leds[213] =COLOUR[theColour]; 
        leds[214] =COLOUR[theColour]; 

    }else{
      //AT
        leds[185] =COLOUR[theColour]; 
        leds[186] =COLOUR[theColour]; 

        //Night
        leds[192] =COLOUR[theColour]; 
        leds[193] =COLOUR[theColour]; 
        leds[194] =COLOUR[theColour];    
        leds[195] =COLOUR[theColour]; 
        leds[196] =COLOUR[theColour];  
    }
  }else{
   
     if(fhour==12){
       //IN
        leds[183] =COLOUR[theColour]; 
        leds[184] =COLOUR[theColour]; 
        // The
        leds[196] =COLOUR[theColour]; 
        leds[197] =COLOUR[theColour]; 
        leds[198] =COLOUR[theColour]; 
        // afternoon
        leds[215] =COLOUR[theColour]; 
        leds[216] =COLOUR[theColour]; 
        leds[217] =COLOUR[theColour];    
        leds[218] =COLOUR[theColour]; 
        leds[219] =COLOUR[theColour]; 
        leds[220] =COLOUR[theColour]; 
        leds[221] =COLOUR[theColour]; 
        leds[222] =COLOUR[theColour]; 
        leds[223] =COLOUR[theColour]; 
     }else if(fhour<6){
      //AT
        leds[185] =COLOUR[theColour]; 
        leds[186] =COLOUR[theColour]; 

      //Night
        leds[192] =COLOUR[theColour]; 
        leds[193] =COLOUR[theColour]; 
        leds[194] =COLOUR[theColour];    
        leds[195] =COLOUR[theColour]; 
        leds[196] =COLOUR[theColour];
     }else{
       //IN
        leds[183] =COLOUR[theColour]; 
        leds[184] =COLOUR[theColour]; 
        // The
        leds[196] =COLOUR[theColour]; 
        leds[197] =COLOUR[theColour]; 
        leds[198] =COLOUR[theColour]; 
         // Morning
        leds[200] =COLOUR[theColour]; 
        leds[201] =COLOUR[theColour]; 
        leds[202] =COLOUR[theColour];    
        leds[203] =COLOUR[theColour]; 
        leds[204] =COLOUR[theColour]; 
        leds[205] =COLOUR[theColour]; 
        leds[206] =COLOUR[theColour]; 
     }
  }
//if minutes>30 hour +1 because says 15 minutes to next hour
if(fminute>30){
  fhour++;
}
 switch (fhour){
  case 1:
        leds[130] =COLOUR[theColour]; 
        leds[131] =COLOUR[theColour]; 
        leds[132] =COLOUR[theColour];
        break;
  case 2:
        leds[128] =COLOUR[theColour]; 
        leds[129] =COLOUR[theColour]; 
        leds[130] =COLOUR[theColour];  
        break;
  case 3:
        leds[149] =COLOUR[theColour]; 
        leds[150] =COLOUR[theColour]; 
        leds[151] =COLOUR[theColour];    
        leds[152] =COLOUR[theColour]; 
        leds[153] =COLOUR[theColour];        
        break;
  case 4:
        leds[160] =COLOUR[theColour]; 
        leds[161] =COLOUR[theColour]; 
        leds[162] =COLOUR[theColour];    
        leds[163] =COLOUR[theColour];         
        break;
  case 5:
        leds[165] =COLOUR[theColour]; 
        leds[166] =COLOUR[theColour]; 
        leds[167] =COLOUR[theColour];    
        leds[168] =COLOUR[theColour];     
        break;
  case 6:
        leds[141] =COLOUR[theColour]; 
        leds[142] =COLOUR[theColour]; 
        leds[143] =COLOUR[theColour]; 
        break;
  case 7:
        leds[144] =COLOUR[theColour]; 
        leds[145] =COLOUR[theColour]; 
        leds[146] =COLOUR[theColour];    
        leds[147] =COLOUR[theColour]; 
        leds[148] =COLOUR[theColour];         
        break;

  case 8:
        leds[168] =COLOUR[theColour]; 
        leds[169] =COLOUR[theColour]; 
        leds[170] =COLOUR[theColour];    
        leds[171] =COLOUR[theColour]; 
        leds[172] =COLOUR[theColour]; 

        break;

  case 9:
        leds[137] =COLOUR[theColour]; 
        leds[138] =COLOUR[theColour]; 
        leds[139] =COLOUR[theColour];    
        leds[140] =COLOUR[theColour];        
        break;

  case 10:
        leds[172] =COLOUR[theColour]; 
        leds[173] =COLOUR[theColour]; 
        leds[174] =COLOUR[theColour];  
        
        break;


  case 11:
        leds[132] =COLOUR[theColour]; 
        leds[133] =COLOUR[theColour]; 
        leds[134] =COLOUR[theColour];    
        leds[135] =COLOUR[theColour]; 
        leds[136] =COLOUR[theColour];    
        leds[137] =COLOUR[theColour];         
        break;
        
  case 12:
        leds[154] =COLOUR[theColour]; 
        leds[155] =COLOUR[theColour]; 
        leds[156] =COLOUR[theColour];    
        leds[157] =COLOUR[theColour]; 
        leds[158] =COLOUR[theColour];    
        leds[159] =COLOUR[theColour];        
        break;

  default:break;
 }

 /////////////minute///////////////
if(fminute<=30 && fminute!=0){
   if(fminute!=15 && fminute!=30){
   //minutes
        leds[112] =COLOUR[theColour]; 
        leds[113] =COLOUR[theColour]; 
        leds[114] =COLOUR[theColour];    
        leds[115] =COLOUR[theColour]; 
        leds[116] =COLOUR[theColour];    
        leds[117] =COLOUR[theColour]; 
        leds[118] =COLOUR[theColour];
   }  
   //past
        leds[120] =COLOUR[theColour]; 
        leds[121] =COLOUR[theColour]; 
        leds[122] =COLOUR[theColour];    
        leds[123] =COLOUR[theColour];  
}else if(fminute>30){
  if(fminute!=30){
   //minutes
        leds[112] =COLOUR[theColour]; 
        leds[113] =COLOUR[theColour]; 
        leds[114] =COLOUR[theColour];    
        leds[115] =COLOUR[theColour]; 
        leds[116] =COLOUR[theColour];    
        leds[117] =COLOUR[theColour]; 
        leds[118] =COLOUR[theColour]; 
  }
 
  //to
        leds[123] =COLOUR[theColour]; 
        leds[124] =COLOUR[theColour]; 
        
}
   
  switch (fminute){
  case 0:
      //Oclock
        leds[176] =COLOUR[theColour]; 
        leds[177] =COLOUR[theColour]; 
        leds[178] =COLOUR[theColour];    
        leds[179] =COLOUR[theColour]; 
        leds[180] =COLOUR[theColour];    
        leds[181] =COLOUR[theColour]; 
        break;
  case 1:
        leds[44] =COLOUR[theColour]; 
        leds[45] =COLOUR[theColour]; 
        leds[46] =COLOUR[theColour]; 
        break;
  case 2:
        leds[42] =COLOUR[theColour]; 
        leds[43] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        break;
  case 3:
        leds[107] =COLOUR[theColour]; 
        leds[108] =COLOUR[theColour]; 
        leds[109] =COLOUR[theColour];    
        leds[110] =COLOUR[theColour]; 
        leds[111] =COLOUR[theColour];   
        break;
  case 4:
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        break;
  case 5:
        leds[56] =COLOUR[theColour]; 
        leds[57] =COLOUR[theColour]; 
        leds[58] =COLOUR[theColour]; 
        leds[59] =COLOUR[theColour]; 
        break;
  case 6:
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        break;
  case 7:
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        break;
  case 8:
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        break;
  case 9:
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour];
        break;
  case 10:
        leds[32] =COLOUR[theColour]; 
        leds[33] =COLOUR[theColour]; 
        leds[34] =COLOUR[theColour];
        break;
  case 11:
        leds[101] =COLOUR[theColour]; 
        leds[102] =COLOUR[theColour]; 
        leds[103] =COLOUR[theColour];    
        leds[104] =COLOUR[theColour]; 
        leds[105] =COLOUR[theColour];    
        leds[106] =COLOUR[theColour]; 
        break;
  case 12:
        leds[96] =COLOUR[theColour]; 
        leds[97] =COLOUR[theColour]; 
        leds[98] =COLOUR[theColour];    
        leds[99] =COLOUR[theColour]; 
        leds[100] =COLOUR[theColour];    
        leds[101] =COLOUR[theColour]; 
        break;
  case 13:
        leds[88] =COLOUR[theColour]; 
        leds[89] =COLOUR[theColour]; 
        leds[90] =COLOUR[theColour];    
        leds[91] =COLOUR[theColour]; 
        leds[92] =COLOUR[theColour]; 
        leds[93] =COLOUR[theColour]; 
        leds[94] =COLOUR[theColour]; 
        leds[95] =COLOUR[theColour]; 
        break;
  case 14:
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        leds[84] =COLOUR[theColour]; 
        leds[85] =COLOUR[theColour]; 
        leds[86] =COLOUR[theColour]; 
        leds[87] =COLOUR[theColour];    
        break;
  case 15:
        leds[13] =COLOUR[theColour];

        leds[16] =COLOUR[theColour]; 
        leds[17] =COLOUR[theColour]; 
        leds[18] =COLOUR[theColour]; 
        leds[19] =COLOUR[theColour]; 
        leds[20] =COLOUR[theColour];
        leds[21] =COLOUR[theColour]; 
        leds[22] =COLOUR[theColour];
        break;
  case 16:
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        leds[38] =COLOUR[theColour]; 
        leds[39] =COLOUR[theColour]; 
        leds[40] =COLOUR[theColour]; 
        leds[41] =COLOUR[theColour]; 
        break;
  case 17:
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        leds[69] =COLOUR[theColour]; 
        leds[70] =COLOUR[theColour]; 
        leds[71] =COLOUR[theColour];   
        leds[72] =COLOUR[theColour];   
        break;
  case 18:
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        leds[53] =COLOUR[theColour]; 
        leds[54] =COLOUR[theColour]; 
        leds[55] =COLOUR[theColour]; 
        break;
  case 19:
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour]; 
        leds[76] =COLOUR[theColour]; 
        leds[77] =COLOUR[theColour]; 
        leds[78] =COLOUR[theColour]; 
        leds[79] =COLOUR[theColour];  
        break;
  case 20:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        break;
  case 21:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        leds[45] =COLOUR[theColour]; 
        leds[46] =COLOUR[theColour]; 
        break;
  case 22:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        leds[42] =COLOUR[theColour]; 
        leds[43] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        break;
  case 23:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[107] =COLOUR[theColour]; 
        leds[108] =COLOUR[theColour]; 
        leds[109] =COLOUR[theColour];    
        leds[110] =COLOUR[theColour]; 
        leds[111] =COLOUR[theColour];   
        break;
  case 24:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        break;
  case 25:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[56] =COLOUR[theColour]; 
        leds[57] =COLOUR[theColour]; 
        leds[58] =COLOUR[theColour]; 
        leds[59] =COLOUR[theColour]; 
        break;
  case 26:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        break;
  case 27:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        break;
  case 28:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        break;
  case 29:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour];
        break;
  case 30:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[12] =COLOUR[theColour]; 
        leds[13] =COLOUR[theColour]; 
        leds[14] =COLOUR[theColour]; 
        leds[15] =COLOUR[theColour];
        break;
  case 59:
        leds[44] =COLOUR[theColour]; 
        leds[45] =COLOUR[theColour]; 
        leds[46] =COLOUR[theColour]; 
        break;
  case 58:
        leds[42] =COLOUR[theColour]; 
        leds[43] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        break;
  case 57:
        leds[107] =COLOUR[theColour]; 
        leds[108] =COLOUR[theColour]; 
        leds[109] =COLOUR[theColour];    
        leds[110] =COLOUR[theColour]; 
        leds[111] =COLOUR[theColour];   
        break;
  case 56:
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        break;
  case 55:
        leds[56] =COLOUR[theColour]; 
        leds[57] =COLOUR[theColour]; 
        leds[58] =COLOUR[theColour]; 
        leds[59] =COLOUR[theColour]; 
        break;
  case 54:
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        break;
  case 53:
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        break;
  case 52:
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        break;
  case 51:
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour];
        break;
  case 50:
        leds[32] =COLOUR[theColour]; 
        leds[33] =COLOUR[theColour]; 
        leds[34] =COLOUR[theColour];
        break;
  case 49:
        leds[101] =COLOUR[theColour]; 
        leds[102] =COLOUR[theColour]; 
        leds[103] =COLOUR[theColour];    
        leds[104] =COLOUR[theColour]; 
        leds[105] =COLOUR[theColour];    
        leds[106] =COLOUR[theColour]; 
        break;
  case 48:
        leds[96] =COLOUR[theColour]; 
        leds[97] =COLOUR[theColour]; 
        leds[98] =COLOUR[theColour];    
        leds[99] =COLOUR[theColour]; 
        leds[100] =COLOUR[theColour];    
        leds[101] =COLOUR[theColour]; 
        break;
  case 47:
        leds[88] =COLOUR[theColour]; 
        leds[89] =COLOUR[theColour]; 
        leds[90] =COLOUR[theColour];    
        leds[91] =COLOUR[theColour]; 
        leds[92] =COLOUR[theColour]; 
        leds[93] =COLOUR[theColour]; 
        leds[94] =COLOUR[theColour]; 
        leds[95] =COLOUR[theColour]; 
        break;
  case 46:
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        leds[84] =COLOUR[theColour]; 
        leds[85] =COLOUR[theColour]; 
        leds[86] =COLOUR[theColour]; 
        leds[87] =COLOUR[theColour];    
        break;
  case 45:
        leds[13] =COLOUR[theColour];

        leds[16] =COLOUR[theColour]; 
        leds[17] =COLOUR[theColour]; 
        leds[18] =COLOUR[theColour]; 
        leds[19] =COLOUR[theColour]; 
        leds[20] =COLOUR[theColour];
        leds[21] =COLOUR[theColour]; 
        leds[22] =COLOUR[theColour];
        break;
  case 44:
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        leds[38] =COLOUR[theColour]; 
        leds[39] =COLOUR[theColour]; 
        leds[40] =COLOUR[theColour]; 
        leds[41] =COLOUR[theColour]; 
        break;
  case 43:
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        leds[69] =COLOUR[theColour]; 
        leds[70] =COLOUR[theColour]; 
        leds[71] =COLOUR[theColour];   
        leds[72] =COLOUR[theColour];   
        break;
  case 42:
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        leds[53] =COLOUR[theColour]; 
        leds[54] =COLOUR[theColour]; 
        leds[55] =COLOUR[theColour]; 
        break;
  case 41:
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour]; 
        leds[76] =COLOUR[theColour]; 
        leds[77] =COLOUR[theColour]; 
        leds[78] =COLOUR[theColour]; 
        leds[79] =COLOUR[theColour];  
        break;
  case 40:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        break;
  case 39:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        leds[45] =COLOUR[theColour]; 
        leds[46] =COLOUR[theColour]; 
        break;
  case 38:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour]; 
        leds[42] =COLOUR[theColour]; 
        leds[43] =COLOUR[theColour]; 
        leds[44] =COLOUR[theColour]; 
        break;
  case 37:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[107] =COLOUR[theColour]; 
        leds[108] =COLOUR[theColour]; 
        leds[109] =COLOUR[theColour];    
        leds[110] =COLOUR[theColour]; 
        leds[111] =COLOUR[theColour];   
        break;
  case 36:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[80] =COLOUR[theColour]; 
        leds[81] =COLOUR[theColour]; 
        leds[82] =COLOUR[theColour];    
        leds[83] =COLOUR[theColour]; 
        break;
  case 35:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[56] =COLOUR[theColour]; 
        leds[57] =COLOUR[theColour]; 
        leds[58] =COLOUR[theColour]; 
        leds[59] =COLOUR[theColour]; 
        break;
  case 34:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[35] =COLOUR[theColour]; 
        leds[36] =COLOUR[theColour]; 
        leds[37] =COLOUR[theColour]; 
        break;
  case 33:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[64] =COLOUR[theColour]; 
        leds[65] =COLOUR[theColour]; 
        leds[66] =COLOUR[theColour];    
        leds[67] =COLOUR[theColour]; 
        leds[68] =COLOUR[theColour]; 
        break;
  case 32:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[48] =COLOUR[theColour]; 
        leds[49] =COLOUR[theColour]; 
        leds[50] =COLOUR[theColour];    
        leds[51] =COLOUR[theColour]; 
        leds[52] =COLOUR[theColour]; 
        break;
  case 31:
        leds[23] =COLOUR[theColour]; 
        leds[24] =COLOUR[theColour]; 
        leds[25] =COLOUR[theColour]; 
        leds[26] =COLOUR[theColour]; 
        leds[27] =COLOUR[theColour];
        leds[28] =COLOUR[theColour];   
        leds[72] =COLOUR[theColour]; 
        leds[73] =COLOUR[theColour]; 
        leds[74] =COLOUR[theColour];    
        leds[75] =COLOUR[theColour];
        break;       
  }


 ///////seconds////////////////
int  valLen = 1;
  if(fsecond > 9){//if > 9 2 digits the seconds
    valLen = 2;
  }
  String  subscent="";
  String strSeconds = (String) fsecond;
  if(valLen==1){
    subscent = strSeconds.substring(0,1);
   leds[224] =COLOUR[theColour]; //0
    
  }else{
   String  subsdec = strSeconds.substring(0,1);
     subscent = strSeconds.substring(1,2);
  int isubsdec =subsdec.toInt();

      switch (isubsdec){//part of seconds left
        case 0:
        leds[224] =COLOUR[theColour];     
        break;
        case 1:
        leds[225] =COLOUR[theColour];     
        break;
        case 2:
        leds[226] =COLOUR[theColour];     
        break;
        case 3:
        leds[227] =COLOUR[theColour];     
        break;
        case 4:
        leds[228] =COLOUR[theColour];     
        break;
        case 5:
        leds[229] =COLOUR[theColour];     
        break;
      }
  }
    int isubscent =subscent.toInt();
   switch (isubscent){//part of seconds right
        case 0:
        leds[230] =COLOUR[theColour];     
        break;
        case 1:
        leds[231] =COLOUR[theColour];     
        break;
        case 2:
        leds[232] =COLOUR[theColour];     
        break;
        case 3:
        leds[233] =COLOUR[theColour];     
        break;
        case 4:
        leds[234] =COLOUR[theColour];     
        break;
        case 5:
        leds[235] =COLOUR[theColour];     
        break;
        case 6:
        leds[236] =COLOUR[theColour];     
        break;
        case 7:
        leds[237] =COLOUR[theColour];     
        break;
        case 8:
        leds[238] = COLOUR[theColour];     
        break;
        case 9:
        leds[239] = COLOUR[theColour];     
        break;
   }
 
    FastLED.show(); 
    }
