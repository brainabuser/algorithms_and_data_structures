#include <iostream>

#include <cstring>

using namespace std;

#define max_request_size 11

struct Node {
    int value = -1;
    Node *next = nullptr;
    Node *prev = nullptr;
};

struct Dequeue {
    int size = 0;
    Node *head = nullptr;
    Node *tail = nullptr;
};

void pushFront(Dequeue *dequeue, int data);

void pushBack(Dequeue *dequeue, int data);

int popFront(Dequeue *dequeue);

int popBack(Dequeue *dequeue);

void front(Dequeue *dequeue);

void back(Dequeue *dequeue);

void size(Dequeue *dequeue);

void clear(Dequeue *dequeue);

int main() {
    auto *dequeue = new Dequeue;
    int request_number;
    cin >> request_number;
    for (int i = 0; i < request_number; ++i) {
        char request[max_request_size];
        cin >> request;
        if (!strcmp(request, "push_front")) {
            int value;
            cin >> value;
            pushFront(dequeue, value);
        } else if (!strcmp(request, "push_back")) {
            int value;
            cin >> value;
            pushBack(dequeue, value);
        } else if (!strcmp(request, "pop_front")) {
            int value;
            value = popFront(dequeue);
            if (value == -1) {
                cout << "error" << endl;
            } else {
                cout << value << endl;
            }
        } else if (!strcmp(request, "pop_back")) {
            int value;
            value = popBack(dequeue);
            if (value == -1) {
                cout << "error" << endl;
            } else {
                cout << value << endl;
            }
        } else if (!strcmp(request, "front")) {
            front(dequeue);
        } else if (!strcmp(request, "back")) {
            back(dequeue);
        } else if (!strcmp(request, "size")) {
            size(dequeue);
        } else if (!strcmp(request, "clear")) {
            clear(dequeue);
            cout << "ok" << endl;
        }
    }
    clear(dequeue);
    delete dequeue;
    return 0;
}

void pushBack(Dequeue *dequeue, int data) {
    Node *new_node = new Node;
    new_node->value = data;
    new_node->next = dequeue->head;
    if (dequeue->size == 0) {
        dequeue->tail = new_node;
    } else {
        dequeue->head->prev = new_node;
    }
    dequeue->head = new_node;
    ++(dequeue->size);
    cout << "ok" << endl;
}

void pushFront(Dequeue *dequeue, int data) {
    Node *new_node = new Node;
    new_node->value = data;
    new_node->prev = dequeue->tail;
    if (dequeue->size == 0) {
        dequeue->head = new_node;
    } else {
        dequeue->tail->next = new_node;
    }
    dequeue->tail = new_node;
    ++(dequeue->size);
    cout << "ok" << endl;
}

int popFront(Dequeue *dequeue) {
    if (dequeue->size == 0) {
        return -1;
    }
    Node *old_tail = dequeue->tail;
    int return_value = old_tail->value;
    if (dequeue->size == 1) {
        dequeue->head = nullptr;
        dequeue->tail = nullptr;
    } else {
        dequeue->tail->prev->next = nullptr;
        dequeue->tail = dequeue->tail->prev;
    }
    delete old_tail;
    --(dequeue->size);
    return return_value;
}

int popBack(Dequeue *dequeue) {
    if (dequeue->size == 0) {
        return -1;
    }
    Node *old_head = dequeue->head;
    int return_value = old_head->value;
    if (dequeue->size == 1) {
        dequeue->head = nullptr;
        dequeue->tail = nullptr;
    } else {
        dequeue->head->next->prev = nullptr;
        dequeue->head = dequeue->head->next;
    }
    delete old_head;
    --(dequeue->size);
    return return_value;
}

void front(Dequeue *dequeue) {
    if (dequeue->size == 0) {
        cout << "error" << endl;
        return;
    }
    cout << dequeue->tail->value << endl;
}

void back(Dequeue *dequeue) {
    if (dequeue->size == 0) {
        cout << "error" << endl;
        return;
    }
    cout << dequeue->head->value << endl;
}

void size(Dequeue *dequeue) {
    cout << dequeue->size << endl;
}

void clear(Dequeue *dequeue) {
    while (popBack(dequeue) != -1);
}