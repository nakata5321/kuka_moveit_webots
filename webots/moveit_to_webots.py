#!/usr/bin/env python

import rospy
from sensor_msgs.msg import JointState
from webots_ros.srv import set_float
from std_msgs.msg import String
from threading import Thread
import time

class Moveit_webots:
    def __init__(self):

        self.get_webots_robot_name()

        rospy.wait_for_service(self.robot_name + '/joint_a1/set_position')
        rospy.wait_for_service(self.robot_name + '/joint_a2/set_position')
        rospy.wait_for_service(self.robot_name + '/joint_a3/set_position')
        rospy.wait_for_service(self.robot_name + '/joint_a4/set_position')
        rospy.wait_for_service(self.robot_name + '/joint_a5/set_position')
        rospy.wait_for_service(self.robot_name + '/joint_a6/set_position')

        self.prev_pos_a1 = 0.0
        self.prev_pos_a2 = 0.0
        self.prev_pos_a3 = 0.0
        self.prev_pos_a4 = 0.0
        self.prev_pos_a5 = 0.0
        self.prev_pos_a6 = 0.0

        try:
            self.move_joint1 = rospy.ServiceProxy(self.robot_name + '/joint_a1/set_position', set_float)
            self.move_joint2 = rospy.ServiceProxy(self.robot_name + '/joint_a2/set_position', set_float)
            self.move_joint3 = rospy.ServiceProxy(self.robot_name + '/joint_a3/set_position', set_float)
            self.move_joint4 = rospy.ServiceProxy(self.robot_name + '/joint_a4/set_position', set_float)
            self.move_joint5 = rospy.ServiceProxy(self.robot_name + '/joint_a5/set_position', set_float)
            self.move_joint6 = rospy.ServiceProxy(self.robot_name + '/joint_a6/set_position', set_float)
        except rospy.ServiceException as e:
            print("Service call failed: %s"%e)

        self.publish_joint_states_to_webots()


    def callback(self, data):
        try:
            if (data.position[0] != self.prev_pos_a1) and (data.position[1] != self.prev_pos_a2) and (data.position[2] != self.prev_pos_a3)\
             and (data.position[3] != self.prev_pos_a4) and (data.position[4] != self.prev_pos_a5) and (data.position[5] != self.prev_pos_a6):
                self.move_joint1(data.position[0])
                self.move_joint2(data.position[1])
                self.move_joint3(data.position[2])
                self.move_joint4(data.position[3])
                self.move_joint5(data.position[4])
                self.move_joint6(data.position[5])

                self.prev_pos_a1 = data.position[0]
                self.prev_pos_a2 = data.position[1]
                self.prev_pos_a3 = data.position[2]
                self.prev_pos_a4 = data.position[3]
                self.prev_pos_a5 = data.position[4]
                self.prev_pos_a6 = data.position[5]

        except rospy.ServiceException as e:
            print("Service call failed: %s"%e)


    def publish_joint_states_to_webots(self):
        rospy.Subscriber("joint_states", JointState, self.callback)
        rospy.spin()

    def get_webots_robot_name(self):
        rospy.init_node('publish_joint_states_to_webots', anonymous=True)
        rospy.Subscriber("model_name", String, self.callback_name)
        rospy.sleep(1.0)


    def callback_name(self, data):
        print(data.data)
        self.robot_name = data.data


if __name__ == '__main__':
    act = Moveit_webots()
