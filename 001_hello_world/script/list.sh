export app=$(basename "$PWD")
ps  -A | grep $app.o
ps  -A | grep -c $app.o