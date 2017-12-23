#!/bin/bash

# Set terminal defaults
TERM_STARTUP=/home/ubuntu/.bashrc
echo -e "\n# Set default bash shortcuts to vi mode" >> $TERM_STARTUP
echo "set -o vi" >> $TERM_STARTUP
echo -e "\n# Set default g++ compile standard" >> $TERM_STARTUP
echo "alias g++=\"g++ -std=c++14\"" >> $TERM_STARTUP
echo -e "\n# Set starting directory to C++ programs directory" >> $TERM_STARTUP
echo "cd /vagrant/programs" >> $TERM_STARTUP
echo "Terminal defaults set"

# Install required modules
apt-get update
apt-get upgrade
apt-get install -y g++
