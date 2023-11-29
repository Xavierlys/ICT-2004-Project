# ICT-2004-Project
This project is for a school project on a pico w
Project Proposal

Design

Project Description : Our project is a network scanner and denial-of-service (DoS) tool aiming to disrupt networks. 

Development Process

Project Proposal

Our initial project proposal was a network pentesting tool with a few different functions, however we received feedback that these functions were very random and not linked, which does not allow us to show integration. Hence we then decided to create a network scanner and WiFi deauthentication tool.

Driver Development

A WiFi driver had to be first developed in order for the Pico W board to be able to connect to a network and send and receive packets. We researched extensively on possible ways to develop such a driver and found a library on Github eventually.

Individual Components

Network Scanner: We wanted to create a network scanner capable of using monitor mode. By having monitor mode, the pico would be able to observe all traffic on the connected network instead of just incoming and outgoing traffic from the pico board.

WiFi deauthentication: In order to send WiFi deauthentication packets out from the Pico W board, we had to first research the structure of a WiFi frame. From there, we then had to find a method for the Pico W board to send this packet to the router. Through research, we learnt that such a packet required the use of 802.11 protocol which is a layer 2 protocol and tried to find a way for the pico to be able to send out such WiFi frames.

Technical Challenges

During the development process, we were met with many challenges with doing what our original aim was. Everything was a challenge. 


Monitor Mode:
Although we spent many hours trying to develop monitor mode on the pico w board. We did not manage to find a way to achieve it using only C code. Solutions we found while researching included flashing the pico w board, using an external WiFi chip or using the raspberry pi zero. Although these methods would have worked, it would not fulfill the aim and purpose of this project. 

WiFi deauthentication: 

For a period of time, we were under the impression that monitor mode was required for WiFi deauthentication to work. However, we found out that this was not the case and spent a great amount of time trying to achieve monitor mode on the Pico W but to no avail before starting on the WiFi deauthentication tool.

In order for the pico w to send wifi deauthentication data frames, it needs to send 802.11 protocol data frames. The challenge was that the pico w is not built to send 802.11 protocol frames. We tried many different ways to do so, even attempting to manipulate external libraries. Unfortunately, the process was too complex and difficult for us and we had to eventually give the idea up. Like monitor mode, a WiFi deauthentication tool could have been achieved by methods such as flashing kali linux onto the pico w board.

Development Process (II)

Due to the numerous technical challenges we faced. We had to change the project at the last minute into a simple scanner and DoS tool using TCP SYN flooding.

Using the original library we found, we developed the pico w board to be able to connect to a network, perform an ARP scan and perform a TCP SYN flood.

ARP scan: An ARP scan is used as a form of reconnaissance of the devices in the network by broadcasting ARP requests from the pico w board.

TCP SYN Flood: A TCP SYN flood is a DoS attack done by starting many TCP SYN packets but never sending an ACK to start the TCP handshake properly. 

Serial over Bluetooth UI: A remote connection over bluetooth can be established to the pico w to command and control the board. 


Lessons Learned

We learnt that it was important to let go of some of our ambitions that we wanted to achieve despite knowing the challenges that we may encounter from the get go. It was important to implement features that were feasible and useful as a cyber tool but not overly complex. Throughout the entire project phrase, we understood that it was important to balance implementing ambitious features and features that actually would work with the pico w. We came to a conclusion that it would be safer if we stick to what was achievable and implement them well. 

Contributions
Andrew Fong En Wei - TCP SYN Flood, Report, Video (Originally WiFi Deauth)
Lee Rui Ming Keith - Serial over Bluetooth UI, Report
Lim Wei Le - ARP Scan, Report (Originally Monitor Mode)
Xavier Loh Yuan Shao - TCP SYN Flood, Report (Originally WiFi Deauth)
Chua Wee Chye Ryan - Monitor mode, Report (Originally Monitor Mode)

Feedback:
Little help/feedback was provided to us as none of the professors were able to answer our doubts/challenges that we faced. One example was our challenge on getting wifi deauthentication to work as we were unable to get the pico w to send 802.11 protocol data frames. Additionally, there was little resources provided to us to assist us in our cyber security pico project. 

