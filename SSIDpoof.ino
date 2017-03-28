#include <ESP8266WiFi.h>
#include <ESP8266TrueRandom.h>

char *SSIDs[] = {
  "I’m Under Your Bed",
  "Pretty Fly for a Wi-Fi",
  "GCHQ Surveillance Van #119871",
  "I’m In Your Closet",
  "I’m Watching You Now",
  "Skynet Global Defense Network",
  "Let Me Out Of Your Router",
  "Undercover Police Car #751",
  "I’m Cheating on my WiFi",
  "InterTubes",
  "Mum - Click Here for Internet",
  "Keep it on the Download",
  "Please Click For Identity Theft",
  "Network Not Found",
  "Bill Clinternet",
  "I Can Haz Wireless?",
  "Drop it Like a Hotspot",
  "Router? I Hardly Knew Her",
  "Viruses Are Us",
  "NotTheDroidsYoureLookingFor",
  "NoFreeInternetHereKeepLooking",
  "Call Me Maybe",
  "Hidden Network",
  "IP Freely",
  "No Internet Access",
  "GCHQ Net Secure",
  "Get Off My LAN",
  "The LAN Before Time",
  "Untrusted Network",
  "Virus Detected! Do Not Join",
  "Malware Repository",
  "Access Denied",
  "C:\Virus.exe",
  "No Wi-Fi For You",
  "My Neighbors Suck!",
  "Slow WiFi",
  "Optimus Prime",
  "WamBamThankYouLan",
  "TellMyWiFiLoveHer"
};

unsigned long previousMillis = 0;
const long interval = 60000;

void setup() {
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    WiFi.softAP(SSIDs[ESP8266TrueRandom.random(0,sizeof(SSIDs)/sizeof(int))], "d0nt3v3rl3tm31n");
  }
  analogWrite(LED_BUILTIN, 1023-(exp(sin(millis()/2000.0*PI)) - 0.36787944)*435.0/3);
}
