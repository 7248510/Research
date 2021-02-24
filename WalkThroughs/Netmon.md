# (So far I only have the user)
1. Run nmap. nmap IP -sV -A
  * User
    <br>Viewing the results we see there's an FTP login that allows an Anonymous logins
    <br>Accessing FTP with Anonymous login you can get the user flag because the admin did not lock certain FTP directories.
    <br>If you can view the contents of a folder it is possible you can get the flag.
  * Root
    Using FTP we can pull PTRG's configuration files and find the password.(same password as last year the only thing that changed was the year)
    I relied on a Hackthebox forum hints regarding the year.<br>After looking through the first configuration file/ignoring the others I viewed the offical writeup.<br>
    Searchsploit revealed an exploit. Below me executing the exploit.<br> 
    <b><i>The exploit did not work.</i></b><br>
    cp /usr/share/exploitdb/exploits/windows/webapps/46527.sh prtg.sh<br>
    ./prtg.sh -u [IPADDDRESS] -c "OCTOPUS1813713946:"ezI3MjkwRTQ2LThGNTEtNDY2Ri1CMTU0LUUwOTA2OEY5Qzk1MH0%3D""
    <br>At this point I was completely clueless on how to get into this box. The walkthrough revealed their is a command injection vulnerability.
    https://www.codewatch.org/blog/?p=453
    <br>Still not in the box but I'm a little closer.
    
