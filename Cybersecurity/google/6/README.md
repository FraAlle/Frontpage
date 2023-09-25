## Incident response lifecycle

CSIRT(Computer Security Incident Response Teams) are a specialized group of security professionals that are trained in incident management and reponse. There are multiple roles on an CSIRT team but these are always necessary:
* Security analyst: continuosly monitor an environment for any security threats. When an threath is found he escalate it to the appropriate team lead.
* Technical lead: manage all of the technical aspects of the incident response process, they do first determining the rppt cause of the incident, than elaborated the strategy to contain, eradicate and recover from the incident.
* Incident coordinator: coordinate with the relevant departments during a security incident, during so the lines of communication are open and clear. Incident coordinator can also be found in other team like SOC.

# SOC(Security operation center)

Is dedicated to monitoring networks, systems and devices for security threats or attacks. Normally if separated from the CSIRT team. A SOC is involved in various types of blue team activities, such as network monitoring, analysis and respons to incidents.

*   Tier 1(L1) analyst: monitoring, reviewing and prioritizing alerts based on criticality, creating and closing alerts using ticketing systems and escalating alert tickets to tier 2 or tier 3
*   Tier 2(L2) analyst: receiving escalated tickets from L1 and conducting deeper investigations, configuring and refining security tool and report to the SOC lead.
*   Tier 3(L3) lead: managing the operations of their team, exploring method of detection by performing advanced detection techniques and report to the SOC manager
*   SOC manager: hiring, training and evaluating the SOC team members, create perform metrics of the SOC team, develop reports related to incidents and communicate to stakeholder


The cybersecurity analyst investigate security alerts to determine if an incident has occurred. If something has been found the analyst will declare a critical rating of the incident. If the problem can be easily remediated by the analyst he can solve it alone, but if the problem is high critical, it gets escaleted to the technical lead.

Skills:
*   Command refers to having the appropriate leadership and direction to oversee the response.
*   Control refers to the ability to manage technical aspects during incident response, like coordinating resources and assigning tasks.
*   Communication refers to the ability to keep stakeholders informed.

# NIST lifecycle
*   Preparation
*   Detection and Analysis
*   Containment, Eradication, and Recovery
*   Post-incident activity

## Detection tools

**Intrusion detection system(IDS)** is an app that monitors system activity and alerts on possible intrusions. Provides continuos monitoring of network events to help protect against security threats or attacks. This don't stop or prevent the activity.
*       True positive: correctly detects the presence of an attack
*       True negative: no detection of malicious activity
*       False positive: incorrectly detects the presence of a threat.
*       False negative: the presence of a threat is not detected, this is when an malicious activity occurs but the IDS don't detect it.
**Intrusion prevention system(IPS)** is an application that monitors system activity for intrusive activity and takes action to stop it.(Some IDS tool can operate like IPS like Suricata,Snort and Sagan)
**Endpoint detection and response(EDR)** monitors endpoint for malicious activity and are installed on endpoints. These tools monitor, record and analyze endpoint activity to identify, alert and respond to suspicious activity. Only the EDR collecto endpoint activity data and perform behavioral analysis to identify threat patterns happening on an endpoint.

## How SIEM works

1: SIEM collect and aggregate data, this data is typically in the form of logs which are basically a record of all the events that happened. These data come from IDS or IPS, db, firewalls and applications.
2: Normalize data by taking all the raw data that SIEM has collected and cleans it up by removing non essential attributes so that only what's relevant is included.
3: The normalized data gets analyzed according to configured rules to detect any possible security incidents, then they get categorized or reported as alerts for security analysts to review.
Some SIEM tools are Chronicle and Splunk.

## Monitoring networks

Baseline in security help establish a standard of expected or normal behavior for systems, devices and networks, in less words, if you know the baseline of a normal network behaviour you'll be better able to identify abnormal network behaviour.
Once you have determinated a baseline you can monitor a network to identify any deviations from that baseline. Some example of network components that can be monitored:
**Flow analysis** refers to the movement of network communications and includes information related to packets, protocol and ports. Hackers can sue ports not commonly associated to maintain communications between the compomised system and their own machine. These communications are known as command and control(C2).
**Packet payload information** Network packets contian component related to the transmission of the packet, this include details like source and destination IP address and the packet payload information. Often this data is encrypted and requires decryption for it to be readable.
**Temporal patterns** Network packets contain information relating to time, this information is usefull to understand patterns.

Organizations may deploy a network operations center(NOC) which is an organizational unit that minitors the performance of a network and responds to any network disruption. A NOC is responsable for maintaining netwrok performance, availability and uptime.

Security analyst monitor networks to identify any sign of potential security incidents known as indicators of compromise(IoC) and protect networks from threats or attacks. IoCs help security analysts detect network traffic abnormalities by providing a way to identify an attack. IoCs provide analysts with specific evidence associated with an attack, such as a known malicious IP address, which can help quickly identify and respond to a potential security incident.

## Capture and view network traffic

A packet capture(P-cap) is a file containing data packets intercepted from an interface or network. It's used during incident investigation.

IPv4 packets camps:
```
Version: This field indicates the IP version. For an IPv4 header, IPv4 is used. 
Internet Header Length (IHL): This field specifies the length of the IPv4 header including any Options.
Type of Service (ToS): This field provides information about packet priority for delivery. It is provided in hexadecimal value.
Total Length: This field specifies the total length of the entire IP packet including the header and the data.
Identification: Packets that are too large to send are fragmented into smaller pieces. This field specifies a unique identifier for fragments of an original IP packet so that they can be reassembled once they reach their destination.
Flags: This field provides information about packet fragmentation including whether the original packet has been fragmented and if there are more fragments in transit(DF stands for Don'w fragment).
Fragment Offset: This field is used to identify the correct sequence of fragments.
Time to Live (TTL): This field limits how long a packet can be circulated in a network, preventing packets from being forwarded by routers indefinitely.
Protocol: This field specifies the protocol used for the data portion of the packet.
Header Checksum: This field specifies a checksum value which is used for error-checking the header.
Source Address: This field specifies the source address of the sender.
Destination Address: This field specifies the destination address of the receiver.
Options: This field is optional and can be used to apply security options to a packet.
The payload component directly follows the header and contains the actual data being delivered. Think back to the example of uploading an image to a website; the payload of this packet would be the image itself.
The footer, also known as the trailer, is located at the end of a packet. The Ethernet protocol uses footers to provide error-checking information to determine if data has been corrupted.
```

IPv6 packets camps:
```
Version: This field indicates the IP version. For an IPv6 header, IPv6 is used.
Traffic Class: This field is similar to the IPv4 Type of Service field. The Traffic Class field provides information about the packet's priority or class to help with packet delivery.
Flow Label: This field identifies the packets of a flow. A flow is the sequence of packets sent from a specific source. 
Payload Length: This field specifies the length of the data portion of the packet.
Next Header: This field indicates the type of header that follows the IPv6 header such as TCP.
Hop Limit: This field is similar to the IPv4 Time to Live field. The Hop Limit limits how long a packet can travel in a network before being discarded.
Source Address: This field specifies the source address of the sender.
Destination Address: This field specifies the destination address of the receiver.
```