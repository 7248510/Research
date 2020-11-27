# Legacy
1. nmap -sV -A -Pn IP [See if there are any open ports]

2. [Sort through the information and search for exploits using searchsploit or metasploits search]
139/tcp  open   netbios-ssn   Microsoft Windows netbios-ssn
445/tcp  open   microsoft-ds  Windows XP microsoft-ds

3. After sorting through information and identiying that the target computer is Windows XP and running an SMB share I looked for an exploit. (searchsploit provided to many exploit options. I relied on Metasploit's search functionality)

4. Realizing that the target machine was indeed Windows XP we can use "exploit/windows/smb/ms08_067_netapi"

5. Running the exploit granted us a meterpreter level shell(This was fantastic. It allowed us to run meterpreter commands)

6. I was not aware that Windows updated the directory structure. I had to look up where the users desktop was located on Windows XP.

7. The users desktop is located in Documents and settings\Username\Desktop.

8. The meterpreter shell crashed on me so I had to use good old CMD to get the hashes(type user.txt/type root.txt)
