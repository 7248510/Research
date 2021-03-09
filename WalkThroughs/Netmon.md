
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
    Navigate to PTRG's directory. Find the configuration files. The specific file has old in the title.
    Using cat or a text editor the password is visible. But the password does not work.<br>HackTheBox forums hinted something related to the year.
    "PrTg@dmin2018" +1 year = PrTg@dmin2019
    Notifications allow you to execute a program.<br>Pass a commands through the parameters field and launch the notification to execute the typed command.
