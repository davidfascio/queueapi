/* 
 * File:   main.c
 * Author: fascio
 *
 * Created on 29 de diciembre de 2015, 13:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SystemQueue.h"


/*
 * 
 */
int main(int argc, char** argv) {

    
    QUEUE_LIST_PTR queueControlList = NULL;
    
    queueControlList = QueueList_New();
    QueueList_AddElement(queueControlList, "HOLA",sizeof("HOLA"));
    QueueList_AddElement(queueControlList, "YA JAVIER",sizeof("YA JAVIER"));
    QueueList_AddElement(queueControlList, "nothing",sizeof("nothing"));
    
    QueueList_Print(queueControlList);
    
    QueueList_RemoveElement(queueControlList);
    
    printf("#################################\n");
    
    QueueList_Print(queueControlList);
    
    
    QueueList_RemoveElement(queueControlList);
    
    printf("#################################\n");
    
    QueueList_Print(queueControlList);
    
    QueueList_RemoveElement(queueControlList);
    
    printf("#################################\n");
    
    QueueList_Print(queueControlList);
    
    QueueList_RemoveElement(queueControlList);
    
    printf("#################################\n");
    
    QueueList_Print(queueControlList);
    
    return (EXIT_SUCCESS);
}
