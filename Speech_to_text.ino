#include "Audio.h"
#include "OpenAI_STT_Client.h"  // Replace with the actual library for OpenAI STT

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("\r\nRecord start!\r\n");

  Audio* audio = new Audio(ICS43434);
  // Audio* audio = new Audio(M5STACKFIRE);

  audio->Record();
  Serial.println("Recording Completed. Now Processing...");

  OpenAI_STT_Client* openaiSTTClient = new OpenAI_STT_Client(API_KEY);  // Replace with actual API key
  String transcription = openaiSTTClient->Transcribe(audio);

  Serial.println("STT Completed. Transcription:");
  Serial.println(transcription);

  delete openaiSTTClient;
  delete audio;
}

void loop() {
  // Empty loop since you don't have any continuous tasks in the loop
}
