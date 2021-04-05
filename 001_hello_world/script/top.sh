export app=$(basename "$PWD")
echo $app
top -p $(pgrep $app | head -20 | tr "\\n" "," | sed 's/,$//')
