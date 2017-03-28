#include <ESP8266WiFi.h>
#include <ESP8266TrueRandom.h>

char *SSIDs[] = {
  "I’m Under Your Bed","Pretty Fly for a Wi-Fi","GCSD Surveillance Van #119871","DEA Surveillance #4188A87","I’m In Your Closet","I’m Watching You Now","Skynet Global Defense Network","Let Me Out Of Your Router","Undercover Police Car #751","I’m Cheating on my WiFi","InterTubes","Mom - Click Here for Internet","The Promised LAN","Because a LANnister Never Forgets","Occam’s Router","New England Clam Router","Keep it on the Download","Please Click For Identity Theft","Network Not Found","Bill Clinternet","I Can Haz Wireless?","Drop it Like a Hotspot","Router? I Hardly Knew Her","Viruses Are Us","NotTheDroidsYourLookingFor","NoFreeInternetHereKeepLooking","Call Me Maybe","Hidden Network","IP Freely","No Internet Access","NSA Net Secure","Get Off My LAN","The LAN Before Time","Untrusted Network","Virus Detected! Do Not Join","Malware Repository","Access Denied","Uncle_Touchys_Game_Room","C:\Virus.exe","No Wi-Fi For You","My Neighbors Suck!","Abraham Linksys","IP-UP","YerBabyIsReallyUgly","John Wilkes Bluetooth","Slow WiFi","Optimus Prime","WamBamThankYouLan","TellMyWiFiLoveHer"
};

unsigned long previousMillis = 0;
const long interval = 60000;  

void setup() {
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    WiFi.softAP(SSIDs[ESP8266TrueRandom.random(0,49)], "d0nt3v3rl3tm31n");
  }
  analogWrite(LED_BUILTIN, 1023-(exp(sin(millis()/2000.0*PI)) - 0.36787944)*435.0/3);
}
