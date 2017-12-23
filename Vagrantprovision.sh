apt-get update
apt-get upgrade
apt-get install -y g++
echo -e "\n# Set default bash shortcuts to vi mode" >> ~/.bashrc
echo "set -o vi" >> ~/.bashrc
echo -e "\n# Set starting directory to C++ programs directory" >> ~/.bashrc
echo "cd /vagrant/programs" >> ~/.bashrc
