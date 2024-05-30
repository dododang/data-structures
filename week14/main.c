#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"

int main(void) {
    int i;
    graphType* G9 = (graphType*)malloc(sizeof(graphType));
    if (G9 == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return -1;
    }

    createGraph(G9);
        
    for (i = 0; i < 7; i++) {
        insertVertex(G9, i);
    }

    insertEdge(G9, 0, 2);
    insertEdge(G9, 0, 1);
    insertEdge(G9, 1, 4);
    insertEdge(G9, 1, 3);
    insertEdge(G9, 1, 0);
    insertEdge(G9, 2, 4);
    insertEdge(G9, 2, 0);
    insertEdge(G9, 3, 6);
    insertEdge(G9, 3, 1);
    insertEdge(G9, 4, 6);
    insertEdge(G9, 4, 2);
    insertEdge(G9, 4, 1);
    insertEdge(G9, 5, 6);
    insertEdge(G9, 6, 5);
    insertEdge(G9, 6, 4);
    insertEdge(G9, 6, 3);

    printf("\n G9�� ���� ����Ʈ ");
    print_adjList(G9);

    printf("\n\n///////////////\n\n���� �켱 Ž�� >> ");
    DFS_adjList(G9, 0);

    free(G9);
    return 0;
}
