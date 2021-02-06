//       3
//       |
//   2-- 0 --1  
//       | 
//       4

String positions="70,71,72,73,";
String actions="2000"; 

void sSnake(){
  FastLED.clear(); 



int arrayPos[actions.length()];
int actual=0;
String actualActions="";
String actualPositions="";
   
for(int ii=0;ii<actions.length();ii++){
  int pos_coma=positions.indexOf(",");
  arrayPos[ii]=positions.substring(0,pos_coma).toInt();

  if(ii==0){
         actual=arrayPos[ii];
         int lastmov=actions.substring(0,1).toInt();
          if(((sSnk==1 || sSnk==2) && (lastmov==1 || lastmov==2)) || ((sSnk==3 || sSnk==4) && (lastmov==3 || lastmov==4))){
          sSnk=lastmov;
           theColour=1;
        }
          switch (sSnk){//we use the before number movement
              
            case 1:  actual++;  
                 break; 
            case 2:  actual--;  
                 break; 
            case 3:  actual-=16;  
                 break; 
            case 4:  actual+=16;  
                 break;                                                   
           }
          
          if((actual)%16==0 && ( arrayPos[ii]+1)%16==0 ){
            actual-=16;
          }else if((actual+1)%16==0 && ( arrayPos[ii])%16==0 ){
            actual+=16;
          }else if(actual>239){
           actual=  arrayPos[ii]-224;
          }else if(actual<0){
            actual= arrayPos[ii]+224;
          }
            actualActions+=(String)sSnk+"000";

  }else{
       actual = arrayPos[ii-1];
  }
      
            leds[actual] =COLOUR[theColour]; 
            FastLED.show(); 
            
          
           actualPositions+=(String)actual+",";
  

  positions=positions.substring(pos_coma+1);
}

 Serial.println(actualPositions);
//  Serial.println(actualActions);
positions=actualPositions; 
actions=actualActions;
delay(500);
}
//Tenir en compte 0 y 240 y q es arriba y abajo no numeros seguidos si me voy por arriba salgo por abajo  yy showled
