#!/bin/sh

if [[ $(cat /home/brandon/.repos/dwmblocks/overflow/status) != 1 ]]; then
    killall dwmblocks
    sudo mv /usr/local/bin/dwmblocks /usr/local/bin/dwmblocks2
    sudo mv /usr/local/bin/overflow /usr/local/bin/dwmblocks
    dwmblocks & disown
    echo "1" > /home/brandon/.repos/dwmblocks/overflow/status
elif [[ $(cat /home/brandon/.repos/dwmblocks/overflow/status) == 1 ]]; then
    killall dwmblocks
    sudo mv /usr/local/bin/dwmblocks /usr/local/bin/overflow
    sudo mv /usr/local/bin/dwmblocks2 /usr/local/bin/dwmblocks
    dwmblocks & disown
    echo "0" > /home/brandon/.repos/dwmblocks/overflow/status
fi

