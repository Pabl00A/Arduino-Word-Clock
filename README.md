# Arduino-Word-Clock

--IN PROCESS

The project consists of creating an arduino word clock using led strips and make an 16x16 Matrix  
The project is a modification of the arduino word clock of https://github.com/brettoliver/wordclock using ws2812 led strips instead of separate LEDs and have to change all the code because brettoliver's code does not work for us  
  
There are also some changes, I will list the components used:
  
-1 Arduino esp-32  
-9 1meter ws2812 strips of 30 leds   
-1 vinil 60x60cm  
-1 plywood 60x60cm  
-2 foam board 60x60cm  
-1 methacrylate 60x60cm  
  
maybe:  
-1 DS3231, but I'm seeing that I can't use normal batteries, so I'm looking for alternatives  
-2 photoresistor  
-1 PIR sensor  
-and maybe use paper foil to make tactil sensor behind the methacrylate  
Tactil sensor youtube link: https://www.youtube.com/watch?v=V3l2Vj3lXZU  

Like the user brettoliver, I also used Inskcape, a free program for vinyl editing, to be able to put the letters straight you must install the Droid Sans Mono font, you must tell the one who makes the vinyl to cut the letters for you. They made it perfect for me the 60x60cm vinyl with black background and cut out letters on Aliexpress for € 10 and free shipping, if you want the name of the seller, ask, I don't know if I can put the name here. In the project files there is the .svg to modify the vinyl  
The distances between the center of 2 letters must be 3.3cm, so we use LED strips of only 30 LEDs as they are perfect.  

To control the LEDs we will use the library FastLED, the wiki: https://github.com/FastLED/FastLED/wiki/Frequently-Asked-Questions 
Simulate the LED matrix I used this website https://wokwi.com/playground/neopixel-matrix  

Based on http://www.brettoliver.org.uk/Word_Clock/Word_Clock.htm    ;   https://github.com/brettoliver/wordclock
  
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
El proyecto consiste en crear un arduino word clock usando tiras leds y hacer una matriz 16x16  
El proyecto es una modificación del arduino word clock de https://github.com/brettoliver/wordclock usando tiras leds ws2812 en vez de leds separados y hay que cambiar todo el código porque el suyo no nos sirve

Tambien hay algunos cambios, voy a listar los componentes usados:  
  
-1 Arduino esp-32  
-9 tiras de 1metro ws2812 de 30 leds  
-1 vinilo 60x60 cm  
-1 contrachapado 60x60cm  
-2 laminas cartón pluma 60x60cm  
-1 metacrilato 60x60cm  
   
Quizás:  
-1 DS3231, pero estoy viendo que no puedo usar pilas normales, asi que estoy buscando alternativas  
-2 photoresistor  
-1 sensor PIR  
-y puede que use papel de aluminio para unos sensores táctiles que pasen el metacrilato,(hay que pobarlo)  
video para los sensores táctiles https://www.youtube.com/watch?v=V3l2Vj3lXZU  
  
  
Como el usuario brettoliver, yo tambien usé Inskcape un programa gratuito para edición de vinilos, para poder poner las letras rectas debeis instalar la fuente Droid Sans Mono, debeis decirle al que os haga el vinilo que os recorte las letras. A mí me lo hicieron perfecto el vinilo de 60x60cm con fondo negro y letras recortadas en Aliexpress por 10€ y envio gratis, si quereis nombre del vendedor preguntad, no se si puedo ponerlo aquí. En los archivos del proyecto está el .svg para modificar el vinilo.
Las distancias entre el centro de 2 letras deben ser 3.3cm por eso usamos tiras LED de solo 30 leds ya qe vienen perfectas.  

Para controlar los leds usaremos la libreria FastLED, la wiki: https://github.com/FastLED/FastLED/wiki/Frequently-Asked-Questions  
Como simulador de la matriz de LED usé esta web https://wokwi.com/playground/neopixel-matrix  


Basado en http://www.brettoliver.org.uk/Word_Clock/Word_Clock.htm    ;   https://github.com/brettoliver/wordclock
