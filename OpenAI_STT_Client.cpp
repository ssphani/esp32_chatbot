#include "OpenAI_STT_Client.h"
#include "network_param.h"
#include <base64.h>
#include <ArduinoJson.h>

OpenAI_STT_Client::OpenAI_STT_Client(const char* apiKey) {
  this->apiKey = apiKey;
  // Add any necessary initialization code specific to OpenAI STT
}

OpenAI_STT_Client::~OpenAI_STT_Client() {
  // Add any necessary cleanup code specific to OpenAI STT
}

void OpenAI_STT_Client::PrintHttpBody2(Audio* audio) {
  // Modify this method based on the requirements of the OpenAI STT API
  // You need to adapt the encoding, sample rate, language code, etc.
}

void OpenAI_STT_Client::Transcribe(Audio* audio) {
  // Modify this method based on the requirements of the OpenAI STT API
  // You need to adapt the HTTP headers, body, and handling of the API response

  String HttpHeader = "POST /v1/openai-stt HTTP/1.1\r\n";
  String ContentLength = String("Content-Length: ") + String(httpBody2Length) + String("\r\n\r\n");

  client.print(HttpHeader);
  client.print(ContentLength);

  PrintHttpBody2(audio);

  String My_Answer = "";

  while (!client.available());

  while (client.available()) {
    char temp = client.read();
    My_Answer = My_Answer + temp;
  }

  Serial.print("My Answer - ");
  Serial.println(My_Answer);

  // Process the OpenAI STT API response
  // Extract the transcription or handle errors based on the API's response format

  // Adapt the code based on the actual requirements of the OpenAI STT API
}
