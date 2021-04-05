#top -p `pgrep -d "," servergg3`
top -p $(pgrep servergg3 | head -20 | tr "\\n" "," | sed 's/,$//')
