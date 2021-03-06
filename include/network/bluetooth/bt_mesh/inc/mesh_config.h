#ifndef _MESH_CONFIG_H_
#define _MESH_CONFIG_H_

#ifdef CONFIG_BT_MESH

/*
 * Include user defined options first. Anything not defined in these files
 * will be set to standard values. Override anything you don't like!
 */
#include <bt_mesh_opt.h>

#ifndef CONFIG_BT_MESH_MODEL_KEY_COUNT
#define CONFIG_BT_MESH_MODEL_KEY_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_MODEL_GROUP_COUNT
#define CONFIG_BT_MESH_MODEL_GROUP_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_APP_KEY_COUNT
#define CONFIG_BT_MESH_APP_KEY_COUNT 1
#endif

#ifndef CONFIG_BT_MESH_SUBNET_COUNT
#define CONFIG_BT_MESH_SUBNET_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_CRPL
#define CONFIG_BT_MESH_CRPL 5
#endif

#ifndef CONFIG_BT_MESH_ADV_BUF_COUNT
#define CONFIG_BT_MESH_ADV_BUF_COUNT 6
#endif

#ifndef CONFIG_BT_MESH_LABEL_COUNT
#define CONFIG_BT_MESH_LABEL_COUNT 1
#endif

#ifndef CONFIG_BT_MESH_MSG_CACHE_SIZE
#define CONFIG_BT_MESH_MSG_CACHE_SIZE 2
#endif

#ifndef CONFIG_BT_MESH_TX_SEG_MSG_COUNT
#define CONFIG_BT_MESH_TX_SEG_MSG_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_RX_SDU_MAX
#define CONFIG_BT_MESH_RX_SDU_MAX 36
#endif

#ifndef CONFIG_BT_MESH_RX_SEG_MSG_COUNT
#define CONFIG_BT_MESH_RX_SEG_MSG_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_ADV_PRIO
#define CONFIG_BT_MESH_ADV_PRIO 32
#endif

#ifndef CONFIG_BT_MESH_PROXY_FILTER_SIZE
#define CONFIG_BT_MESH_PROXY_FILTER_SIZE 1
#endif

#ifndef CONFIG_BT_MESH_NODE_ID_TIMEOUT
#define CONFIG_BT_MESH_NODE_ID_TIMEOUT 60
#endif

#ifdef CONFIG_BT_MESH_FRIEND

#ifndef CONFIG_BT_MESH_FRIEND_RECV_WIN
#define CONFIG_BT_MESH_FRIEND_RECV_WIN 255
#endif

#ifndef CONFIG_BT_MESH_FRIEND_QUEUE_SIZE
#define CONFIG_BT_MESH_FRIEND_QUEUE_SIZE 16
#endif

#ifndef CONFIG_BT_MESH_FRIEND_SUB_LIST_SIZE
#define CONFIG_BT_MESH_FRIEND_SUB_LIST_SIZE 3
#endif

#ifndef CONFIG_BT_MESH_FRIEND_LPN_COUNT
#define CONFIG_BT_MESH_FRIEND_LPN_COUNT 2
#endif

#ifndef CONFIG_BT_MESH_FRIEND_SEG_RX
#define CONFIG_BT_MESH_FRIEND_SEG_RX 1
#endif

#endif // CONFIG_BT_MESH_FRIEND

#ifdef CONFIG_BT_MESH_LOW_POWER

#ifndef CONFIG_BT_MESH_LPN_ESTABLISHMENT
#define CONFIG_BT_MESH_LPN_ESTABLISHMENT
#endif

#ifndef CONFIG_BT_MESH_LPN_AUTO
#define CONFIG_BT_MESH_LPN_AUTO
#endif

#ifndef CONFIG_BT_MESH_LPN_AUTO_TIMEOUT
#define CONFIG_BT_MESH_LPN_AUTO_TIMEOUT 15
#endif

#ifndef CONFIG_BT_MESH_LPN_RETRY_TIMEOUT
#define CONFIG_BT_MESH_LPN_RETRY_TIMEOUT 8
#endif

#ifndef CONFIG_BT_MESH_LPN_RSSI_FACTOR
#define CONFIG_BT_MESH_LPN_RSSI_FACTOR 0
#endif

#ifndef CONFIG_BT_MESH_LPN_RECV_WIN_FACTOR
#define CONFIG_BT_MESH_LPN_RECV_WIN_FACTOR 0
#endif

#ifndef CONFIG_BT_MESH_LPN_MIN_QUEUE_SIZE
#define CONFIG_BT_MESH_LPN_MIN_QUEUE_SIZE 1
#endif

#ifndef CONFIG_BT_MESH_LPN_RECV_DELAY
#define CONFIG_BT_MESH_LPN_RECV_DELAY 100
#endif

#ifndef CONFIG_BT_MESH_LPN_POLL_TIMEOUT
#define CONFIG_BT_MESH_LPN_POLL_TIMEOUT 300
#endif

#ifndef CONFIG_BT_MESH_LPN_INIT_POLL_TIMEOUT
#define CONFIG_BT_MESH_LPN_INIT_POLL_TIMEOUT CONFIG_BT_MESH_LPN_POLL_TIMEOUT
#endif

#ifndef CONFIG_BT_MESH_LPN_SCAN_LATENCY
#define CONFIG_BT_MESH_LPN_SCAN_LATENCY 10
#endif

#ifndef CONFIG_BT_MESH_LPN_GROUPS
#define CONFIG_BT_MESH_LPN_GROUPS 8
#endif

#endif // CONFIG_BT_MESH_LOW_POWER

#ifdef CONFIG_BT_MESH_PROXY

#ifndef CONFIG_BT_MESH_PROXY_FILTER_SIZE
#define CONFIG_BT_MESH_PROXY_FILTER_SIZE 1
#endif

#endif // BT_MESH_PROXY

#ifdef CONFIG_MESH_STACK_ALONE

/**
 *  CONFIG_BT_WORK_QUEUE_STACK_SIZE:Work queue stack size.
 */
#ifndef CONFIG_BT_WORK_QUEUE_STACK_SIZE
#define CONFIG_BT_WORK_QUEUE_STACK_SIZE 200
#endif

/**
 *  CONFIG_BT_WORK_QUEUE_PRIO:Work queue priority.
 */
#ifndef CONFIG_BT_WORK_QUEUE_PRIO
#define CONFIG_BT_WORK_QUEUE_PRIO 41
#endif

/**
 *  CONFIG_BLUETOOTH_MAX_CONN:Maximum number of connections
 *  range 1 to 128
 */
#ifndef CONFIG_BT_MAX_CONN
#define CONFIG_BT_MAX_CONN 2
#endif

/**
 *  CONFIG_BT_DEVICE_NAME:Bluetooth device name. Name can be up
 *  to 248 bytes long (excluding NULL termination). Can be empty string
 */
#ifndef CONFIG_BT_DEVICE_NAME
#define CONFIG_BT_DEVICE_NAME "aos_bmesh"
#endif

#endif /* CONFIG_MESH_STACK_ALONE */

#endif /* endof CONFIG_BT_MESH */

#endif
