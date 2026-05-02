/*
 * File: arduino_secrets.h
 * Project: src
 * File Created: Saturday, 20th March 2021 5:07:58 pm
 * Author: Matthew Bennett (matthew@mlbennett.com)
 * -----
 * Last Modified: Saturday, 20th March 2021 5:07:58 pm
 * Modified By: Matthew Bennett (matthew@mlbennett.com>)
 * -----
 * Copyright - 2021 
 * <<license>>
 */


//#define SECRET
//#define THINGNAME ""

const char WIFI_SSID[] = "WIFO SSID";
const char WIFI_PASSWORD[] = "WIFI PASSWORD";
//const char AWS_IOT_ENDPOINT[] = "xxxxx.amazonaws.com";
// Fill in the hostname of your AWS IoT broker
const char AWS_IOT_ENDPOINT[] = "AWS ENDPOINT";

// Fill in the boards public certificate
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
put secret in here
-----END CERTIFICATE-----
)";
