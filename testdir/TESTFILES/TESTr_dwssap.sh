cat /etc/passwd |
sed '/#/ d' |
awk 'NR%2==0' |
rev |
sort -r |
awk -v LOWER=$FT_LINE1 -v UPPER=$FT_LINE2 'NR>=LOWER && NR<=UPPER' |
sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/ /g' |
tr '\n' '.'
