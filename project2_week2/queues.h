#pragma once
/* queues.h: Header file for queue functions and definitions */

#include "nodes.h"  // Header file includes Prototypes defined in nodes.cpp

#define TRUE 1
#define FALSE 0
#define MSGSIZE 141

/******************** function prototypes ***********************/

// initialize the queue
void InitQueue(void);

// check if queue is empty
int  IsQueueEmpty(void);

// add Node to queue
void  AddToQueue(Node *);

// remove 1st Node from queue and return pointer to it
Node *DeQueue(void);

// add a message to a node and add the node to the queue
void AddMessToQueue(char* msg_text);

// print all messages in queue from oldest to newest
void PrintMessages(void);

// begin loop to receive messages from transmitting terminal
void StartListeningMode(int* unreadMessages, int* totalMessages);