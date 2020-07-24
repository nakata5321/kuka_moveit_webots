# kuka_moveit_webots
Extra package, headers, lib for correct work of kuka package by A. Ovcharov

0)    update:
sudo apt-get update
sudo apt-get dist-upgrade
1)    install ros melodic:
http://wiki.ros.org/melodic/Installation/Ubuntu
2)    install webots
sudo apt-get install webots
sudo apt-get install ros-melodic-webots-ros
3)    install moveit:
sudo apt-get install ros-melodic-moveit
sudo apt-get install ros-melodic-catkin python-catkin-tools
4)    download repositories:
cd ~
mkdir -p catkin_ws/src
cd src
git clone https://github.com/airalab/robot_painter/
cd robot_painter
rm -rf scenes
mv * ../
cd ..
rmdir robot_painter
cd ~
git clone https://github.com/PaTara43/kuka_moveit_webots
cd kuka_moveit_webots
mv -r  webots ../catkin_ws/src
sudo mv -r headers/* usr/include/c++/7/
sudo mv libs/* usr/local/lib/
mv world/* <webots world>/protos
cd ~
svn checkout https://github.com/PX4/Matrix/trunk/matrix
mv matrix -r /usr/include/c++/7/

5)    install brics_actuator
sudo apt-get install ros-melodic-brics-actuator
cd ~/catkin_ws
catkin build
???
Profit
echo “source ~/catkin_ws/devel/setup.bash” >> ~/.bashrc
source ~/.bashrc


to launch:
roslaunch kuka_moveit_config (fake_)demo_launch.lanuch
webots
rosrun webots moveit_to_webots.py
