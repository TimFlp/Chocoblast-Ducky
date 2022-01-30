#define kbd_fr_fr
#include "DigiKeyboard.h"

void setup() {
  //empty
}
void loop() {

// Ouverture d'un bloc-notes et écriture du message de prévention
// Chocoblasté aussi parceque ça fait toujours plaisir des pains au chocolat 
// Texte en Qwerty car clavier qwerty de base sur la carte programmable
// Dure 4,6 secondes à l'execution complète
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_T , MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("nqno");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("Il fqut toujours fqire qttention 0 lqisser son pc verrouill2 auqnd on pqrt / ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("9q qurqit pu etre un keyloggerm ou un chevql de troie<<<");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print(";qis ;qintenqnt au4on en est l0m tu dois des pqins qu chocolqt 0 tout le ;onde ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("d4qpr7s le r7gle;ent 5 https.>>zzz<chocoblqst<fr> 5");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print(";erci .D");
  
// Ouverture youtube, redirection vers la meilleure musique du monde
// Puis plein écran avec F pour le fullscreen youtube puis F11 pour plein écran navigateur pour simuler un petit blocage
// Dure 15,6 secondes à s'executer pour faire en sorte de marcher le plus possible dans toutes les conditions possibles
// Mauvais Internet, pc lent, etc...   
  DigiKeyboard.sendKeyStroke(KEY_T , MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("xdg6open https.>>youtu<be>dAz$z(ZgXcAMt=$#s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(15000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F);

// Fin du programme et empêche la reboucle du programme
// Durée totale : 20,2 secondes
// Auteur : Tim Flp | Antoine Boury le Strat
  for(;;){ /*empty*/ }
}
