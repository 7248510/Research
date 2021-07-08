# Home lab
Research/notes on regarding my cyber security lab.

* Machines:
    * Linux: Debian, CentOS
    * Windows: Windows 7,10,19
    * FreeBSD: PfSense
    * [Legacy Windows 10] (https://developer.microsoft.com/en-us/microsoft-edge/tools/vms/)
    * [Windows Server 19] (https://www.microsoft.com/en-us/evalcenter/evaluate-windows-server-2019)
    * CTFS (VulnHub/GitHub)


## Infrastrucure
    Testing = Exploit development environment
    External(10.0.0.1)(Bridged) > DMZ(10.0.1.2>Host) > Internal(192.168.1.1) IP'S are subject to change
    External = CTF'S/Basic entry points | I've modeled external to using a Google Dork/scanning with Shodan or finding a vulnerable server
    DMZ = CTF's/
    Security Onion & PfSense for a firewall and IDS
    Internal = Windows Server(Currently creating AD), Databases(MySQL/Mongo), Windows 7 & 10
