string="1234"                                                                                                              
printf "%2s:%2s\n" ${string%??} ${string:1:2}
12:23

zahl=540
printf "%02d:%02d\n" $((zahl /100)) $(( zahl % 100 ))                                                                       
05:40

echo "559" | sed 's/\(..\)$/:\1/'                                                                                           
5:59

echo "1559" | sed 's/\(..\)$/:\1/'
15:59
