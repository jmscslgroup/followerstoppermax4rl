#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block followerstoppermax4rl/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_followerstoppermax4rl_std_msgs_Float64> Sub_followerstoppermax4rl_429;

// For Block followerstoppermax4rl/Subscribe4
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoppermax4rl_geometry_msgs_Twist> Sub_followerstoppermax4rl_430;

// For Block followerstoppermax4rl/Subscribe5
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoppermax4rl_geometry_msgs_Twist> Sub_followerstoppermax4rl_431;

// For Block followerstoppermax4rl/Subscribe6
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoppermax4rl_geometry_msgs_Twist> Sub_followerstoppermax4rl_471;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_followerstoppermax4rl_std_msgs_Float64> Pub_followerstoppermax4rl_452;

// For Block followerstoppermax4rl/Publish Region1/Publish1
extern SimulinkPublisher<std_msgs::UInt8, SL_Bus_followerstoppermax4rl_std_msgs_UInt8> Pub_followerstoppermax4rl_406;

// For Block followerstoppermax4rl/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_followerstoppermax4rl_geometry_msgs_Twist> Pub_followerstoppermax4rl_401;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_447;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_448;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_449;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_450;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_463;

// For Block followerstoppermax4rl/Follower StopperMax Switch/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax4rl_465;

void slros_node_init(int argc, char** argv);

#endif
