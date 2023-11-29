# ICT-2004-Project
This project is for a school project on a pico w
Project Proposal

Driver Development

A WiFi driver had to be first developed in order for the Pico W board to be able to connect to a network and send and receive packets. We researched extensively on possible ways to develop such a driver and found a library on Github eventually.


ARP scan: An ARP scan is used as a form of reconnaissance of the devices in the network by broadcasting ARP requests from the pico w board.

TCP SYN Flood: A TCP SYN flood is a DoS attack done by starting many TCP SYN packets but never sending an ACK to start the TCP handshake properly. 

Serial over Bluetooth UI: A remote connection over bluetooth can be established to the pico w to command and control the board. 

Contributions:
Andrew Fong En Wei - TCP SYN Flood, Report, Video
Lee Rui Ming Keith - Serial over Bluetooth UI, Report
Lim Wei Le - ARP Scan
Xavier Loh Yuan Shao - TCP SYN Flood, Report
Chua Wee Chye Ryan - Monitor mode, Report

Feedback:
Little help/feedback was provided to us as none of the professors were able to answer our doubts/challenges that we faced. One example was our challenge on getting wifi deauthentication to work as we were unable to get the pico w to send 802.11 protocol data frames. Additionally, there was little resources provided to us to assist us in our cyber security pico project. 

