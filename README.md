# Extended Kalman Filter Project

[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

## Overview
This repository contains the work I did within **Project #6 of Udacity's Self-Driving Car Nanodegree Program** (first project of second term). Objective of the project is to utilize a kalman filter to estimate the state (position / velocity) of a moving object of interest (for instance, bicycle in the vicinity of a car) with noisy lidar and radar measurements. 

For this Udacity provides us with a car driving simulator it has developed. It can be downloaded [here](https://github.com/udacity/self-driving-car-sim/releases).


## Repository content

The repository includes the following files:

 - source code in the */src* folder
	 - main.cpp : communicates with the Term 2 Simulator receiving data measurements, calls a function to run the Kalman filter, calls a function to calculate RMSE
	 - FusionEKF.h & .cpp:  initializes the filter, calls the predict function, calls the update function
 	 - kalman_filter.h & .cpp: defines the predict function, the update function for lidar, and the update function for radar
 	 - tools.h & .cpp: function to calculate RMSE and the Jacobian of measurement matrix
 	 - measurement_package.h: defines a class to be used to store measurements
 	 - json.hpp: JSON is used for communication with simulator
 - /data: a folder containing a data file for testing the extended Kalman filter which the simulator interface provides. It contains radar, lidar measurements and true positions and velocities.
 - CMakeLists.txt: file that is used for compiling code


[Here](https://discussions.udacity.com/t/getting-started-with-docker-and-windows-for-the-ekf-project-a-guide/320236]) is a link which details how to have the simulator and code run with Docker on Windows.

