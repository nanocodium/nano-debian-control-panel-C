#!/bin/sh
if cc ucp.c -o ucp; then
        echo "Executable compiled, installing"
        sudo mv -v ucp /usr/local/bin
fi
exit $?
