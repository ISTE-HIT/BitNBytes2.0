#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct {
    int freq;
    char ch;
} Node;

typedef struct {
    Node* arr;
    int size;
    int capacity;
} PriorityQueue;

PriorityQueue* create_priority_queue(int capacity) {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->arr = (Node*)malloc(capacity * sizeof(Node));
    pq->size = 0;
    pq->capacity = capacity;
    return pq;
}

void swap(Node* a, Node* b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(PriorityQueue* pq, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < pq->size && (pq->arr[left].freq > pq->arr[largest].freq || 
        (pq->arr[left].freq == pq->arr[largest].freq && pq->arr[left].ch < pq->arr[largest].ch))) {
        largest = left;
    }

    if (right < pq->size && (pq->arr[right].freq > pq->arr[largest].freq || 
        (pq->arr[right].freq == pq->arr[largest].freq && pq->arr[right].ch < pq->arr[largest].ch))) {
        largest = right;
    }

    if (largest != i) {
        swap(&pq->arr[i], &pq->arr[largest]);
        heapify(pq, largest);
    }
}

void push(PriorityQueue* pq, int freq, char ch) {
    if (pq->size == pq->capacity) {
        return;
    }
    pq->size++;
    int i = pq->size - 1;
    pq->arr[i].freq = freq;
    pq->arr[i].ch = ch;

    while (i != 0 && (pq->arr[(i - 1) / 2].freq < pq->arr[i].freq || 
        (pq->arr[(i - 1) / 2].freq == pq->arr[i].freq && pq->arr[(i - 1) / 2].ch > pq->arr[i].ch))) {
        swap(&pq->arr[i], &pq->arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

Node pop(PriorityQueue* pq) {
    if (pq->size <= 0) {
        Node temp;
        temp.freq = 0;
        temp.ch = '\0';
        return temp;
    }
    if (pq->size == 1) {
        pq->size--;
        return pq->arr[0];
    }

    Node root = pq->arr[0];
    pq->arr[0] = pq->arr[pq->size - 1];
    pq->size--;
    heapify(pq, 0);

    return root;
}

char* sortByFrequency(char* s) {
    int n = strlen(s);
    if (n == 0) return s;

    int freq[256] = {0};
    for (int i = 0; i < n; i++) {
        freq[(unsigned char)s[i]]++;
    }

    PriorityQueue* pq = create_priority_queue(256);

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            push(pq, freq[i], (char)i);
        }
    }

    char* result = (char*)malloc((n + 1) * sizeof(char));
    int idx = 0;

    while (pq->size > 0) {
        Node node = pop(pq);
        for (int i = 0; i < node.freq; i++) {
            result[idx++] = node.ch;
        }
    }

    result[idx] = '\0';
    free(pq->arr);
    free(pq);
    return result;
}

int main() {
    char s[1000];
    scanf("%[^\n]%*c", s);

    char* result = sortByFrequency(s);
    printf("%s\n", result);
    
    free(result);
    return 0;
}
