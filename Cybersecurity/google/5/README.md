## Introduction to assets

Different type of security assets:
*   Restricted is the highest level. This category is reserved for incredibly sensitive assets,  like need-to-know information.

*   Confidential refers to assets whose disclosure may lead to a significant negative impact on an organization.

*   Internal-only describes assets that are available to employees and business partners.

*   Public is the lowest level of classification. These assets have no negative consequences to the organization if they’re released.

## Cloud based services

This refers to a variety of on demand or web-based business solutions.
*   SaaS: front-end application that users access via a web browser. It provide host, manage and maintain all of the back-end systems for those applications(Gmail,Slack,Zoom).
*   PaaS(Platform as a Service): back-end application development tools that clients can access online. Write code and build, manage and deploy thei own apps(Google App Engine, Heroku, VMware Cloud Foundry).
*   IaaS(Infrastructure as a Service): remote access to a range of back-end systems that are hosted by the cloud service provider. Data processing servers, storage, networking resources and more(Google Cloud, Azure).

# Cloud security

*   Misconfiguration is one of the biggest concerns. Customers of cloud-based services are responsible for configuring their own security environment. Oftentimes, they use out-of-the-box configurations(are typically avaiable for all users by deafult and don't require customization, modification etc) that fail to address their specific security objectives.
*   Cloud-native breaches are more likely to occur due to misconfigured services.
*   Monitoring access might be difficult depending on the client and level of service.
*   Meeting regulatory standards is also a concern, particularly in industries that are required by law to follow specific requirements such as HIPAA, PCI DSS, and GDPR.

## Security plans

Consist in 3 basic elements:
*   Policies: set of rules that reduce risk and protects information, focus on the strategic side of things by identifying the scope, objectives and limitations of a security plan.
*   Standards: tactical function, as they concern how well we'are protecting assets.
*   Procedures: step-by-step instructions to perform a specifica secuirity task. Organizations usually keep multiple procedure documents that are used in the company. Like how to chose secure passwords, how they can securely reset a password.

## NIST framework

Compliance: process of adhering to internal standards and external regulation.
Cybersecurity Framework(CSF) was developed to help business secure one of their most important assets: information. It consist in 3 components:
*   Core: simplified version of the functions or duties of a security plan.(Identify,Protect,Detect,Respond,Recover).
*   Tiers: provide security teams with a way to measure performance across each of the five functions of the core. This has a range from 1 to 4.
*       1(passive): function is reaching bare minimum standards.
*       4(adaotive): function is being performed at an exemplary standard.
*   Profiles: provides insight into the current state of a security plan(photo capturing a moment in time).

## Security controls

*   Technical: include the technologies used to protect assets(encryption,authentication system)
*   Operational: maintaining the day-to-day security environment. People perform these controls like awereness training and incident response.
*   Managerial: are centred on how the other two reduce risks(policies, standards and procedures).

# Data lifecycle

* Collect

* Store

* Use

* Archive

* Destroy

Type of data:
* PII is any information used to infer an individual's identity. Personally identifiable information, or PII, refers to information that can be used to contact or locate someone.

* PHI stands for protected health information. Is defined as “information that relates to the past, present, or future physical or mental health or condition of an individual.”

* SPII is a specific type of PII that falls under stricter handling guidelines. The S stands for sensitive, meaning this is a type of personally identifiable information that should only be accessed on a need-to-know basis, such as a bank account number or login credentials.

# Information privacy

* Information privacy: protect of unauthorized access and distribution of data.
* Information security(InfoSec): practice of keeping data in all states away from unauthorized user.
The differece is that privacy is about providing people with control over their personal information and how it's shared, meanwhile security is about protecting people's choices and keeping their information safe.

Some industry regulations:
* General Data Protection Regulation (GDPR): is a set of rules and regulations developed by EU that puts data owner in total control of thei personal information.

* Payment Card Industry Data Security Standard (PCI DSS): is a set of security standards formed by major organizations in the financial industry, this aims to secure credit and debit card transactions against data steal and fraud.

* Health Insurance Portability and Accountability Act (HIPAA): is a USA law that requires the protection of sensitive patient health information. This prohibits the disclosure of a person's medical information without their knowledge and consent.

A **security audit** is a revies of an organization's security controls, policies and procedures.
A **security assessment** is a check to determine how resilient current security implementations are against threats.

## Cryptography

Public Key Infrastructure(PKI) is an encryption method that secures the exchange of information online. Is a 2 step process.
*   The first step is the exchange of encrypted information(asymmetric, symmetric or both). 
*       Asymetric: involves the use of a public and private key pair for encryption. The public key can only be used to access the slot and add items(it can be shared with people all around the world to add items).  The private key allows to remove items inside, only the owner can access to the private key. This allow all people to see and send you encrypted information that only i can decrypt with the private key. This make the asymetric encryption a secure way to exchange info online, however is kinda slow. Two algorythm are RSA(these create 2 keys, one public and one private, key sizes are 1024,4048 or 4096bits) and DSA(generate keys with 2048 bits abd is used as complement to RSA public key).
*       Symmetric: is faster and simple. This include the use of only one key to exchange information. Everyone with the key can create, delete or modify any data inside. Two algorythm are 3DES(generate keys that are 192 bits or three times as long, but has a limitation on the amount of data that ca be encrypted) and AES(generate keys that are 128,192 or 256 bits long, are safe from brute force attacks).
*   The second step is establish trust using digital certificates.
PKI uses both type of encryption, depend on which is your priority at the moment, speed or security.
A digital certificate is a file that verifies the identity of a public key holder.

```
openssl aes-256-cbc -pbkdf2 -a -d -in Q1.encrypted -out Q1.recovered -k ettubrute
openssl command reverses the encrytion of the file with a secure symmetric cipher(aes-256-cbc)
-pbkdf2 add extra security to the key
-a desired encoding output
-d decrypting
-in specifies the input file and -out specifies the output file
-k specifies the password(ettubrute in the example)
```

## Hashing

An hash function is an algorithm that preduces a code that can't be decrypted. Are one-way process that do not generate decryption keys.
In the MD5 encryption we can add some random strings before the hash begin to give more security to the files, this is called Salting.

## Access controls and authentication system

Access control controls manage access, authorization and accountability of information. Is divided in: authentication, authorization and accounting.

Authentication system are access controls that serve a very basic purpose, they ask anything attempting to access information. Is divided in: 
*   Knowledge: refers to something the user know, like a password or the answer to a security quistion.
*   Ownership: refering to something the user posses, for example a one-time passcode.
*   Characteristic: can be biometric(fingerprints).
Nowdays is used the SSO(single sign-on), is a system where you need to log in just once.
If the right user has been authenticated, the network should ensure the right resources are made avaiable.
*   Mandatory access control(MAC): is based on a strict need-to-know basis. Access to the information must be granted by a central authority or SA(system administrator).
*   Discretionary access control(DAC): applied when a data owner decides appropriate levels of access.
*   Role-based access control(RBAC): is used when authorization is determined by a user's role withing the org.

# SSO how it works

SSO works by automating how trust is established between a user and a service provider. SSO use trusted third-parties to prove that a user is who they claim to be, they do this with the exchange of encrypted access tokens between the identity provider and the service provider.

## Connexion with HTTP

Two actions are triggered when the session with a page begin.
The first is the creation of a session ID, is a unique token that identifies a user and their device while accessing the system. These are attached to the user until the connection end.
The second is the exchange of session coockies between the server and the user's device. This is a token that website use to validate a session and determine how long that session should last, while this your session ID is read to determine what information the website should show you.
Cookies make web session more secure because no sensitive information is shared. But, with a stolen cookie an hacker can impersonate a user using their session token(hijacking).

## Cybersecurity layers

1 Perimeter: username and password, mainly this is a user authentication layer.
2 Authorization: is made with other techinologies like firewalls.
3 Endpoint: refer to the devices that have access on a network.
4 Application: this includes all the interfaces that are used to interact with technology. Security measures are programmed as part of an application.
5 Data: critical data that must be protected, one important control made here is the asset classification.

## Open source intelligence(OSINT)

Is the collection of information from publicly available sources to generate usable intelligence. It's commonly used to support cybersecurity activities.
*   Information vs intelligence: **Information** refers to the collection of raw data or facts about a specific subject. **Intelligence** refers to the analysis of information to produce knowledge or insights that can be used to support decision-making.
*   Intelligence improves decision-making: in organizations open source information is used to gain insight into threats and vulnerabilitis that can pose risks to an organizations.

OSINT can be used to generate intelligence:
*   Provide insights into cyber attacks
*   Detect potential data exposures
*   Evaluate existing defenses
*   Identify unknown vulnerabilities
[OSINT framewors](https://osintframework.com/) and [ATT&CK](https://attack.mitre.org/) is used as fundation for the development of specificthreat models.

## Vulnerability assessments

This is the interanl revies process of an organization's security systems, due to this we can found weakness and flaws. The org security team performs, evaluate, scores and fixes them on their own. The goal of vulnerability assessments is to identify weak point and prevent attacks.
Process:
1: Identification: scannaing tools and manual testing are used to find vulnerabilities.
2: Vulnerability analysis: each one of the vulnerabilities identified before are tested.
3: Risk assessment: a score is assigned to each vulnerability. It depends on the likelihood of this happening and how sever the impact would be if the vulnerability were to be exploited.
4: Remediation: in this step the vulnerabilities that can impact the organizations are addressed.

# Vulnerability scanner

Is a software that automatically compares known vulnerabilities and exoisures against the technologies on the network.
When the layers scan begin, the scanning tool compares the findings against a database of security threats. At the end of the scan, the tool flags any vulnerabilities that it finds and add them to its reference database.
The scans are non-intrusive, they only check for vulnerabilities. Types of scans:
*   External vs Internal: simulate an attacker's approach. External test the perimeter layer outside of the internal network, this can uncover vulnerable things like vulnerable network ports or servers. Internal start from the end by examining an organization's internal systems. This can reveal weakness in applications like it handle user input.
*   Authenticated vs unauthenticated: scans whether or not a user has access to a system. Authenticated might test a system by logging in with a real user account, it check for vulnerabilities like broken access controls. Unauthenticated simulate external threat actors that do not have access to your business resources.
*   Limites vs compehensive: focurs on particular devices that are accessed by internal and external users. Limited scan analyze particular devices on a network, like misconfiguration on a firewall. Comprehensive scan analyze all devices connected to a network. This includes OS, db and more.

## Teams

Red team test simulate attacks to identify vulnerabilities in systems, network or applications
Blue team test focus on defende and incident response to validate an organization's existing security teams.
Purple team test are collaborative, focus on improving the security posture of the organization by combining elements of red and blue team.
[Hackerone](https://hackerone.com/hacktivity/overview)

## Preventing brute force attacks

*   Hashing and salting
*   MFA
*   CAPTCHA
*   Password policies