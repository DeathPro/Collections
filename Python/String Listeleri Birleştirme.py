#a="@".join(["mbaser","mail.com"])
#print(a)

l="mbaser:x:501:501:mbaser:/home/mbaser:/bin/bash"
s=l.split(":")
s[4]="Mustafa Baser"
l=":".join(s)
print(l)

