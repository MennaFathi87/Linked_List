# 📚  Linked List Implementation

A simple and clean implementation of a **Singly Linked List** in C, featuring **three insertion operations**.

---

## 🔍 Overview

A **Linked List** is a linear data structure where each element (called a **node**) contains:

- A **value** (data)
- A **pointer** to the next node in the list
---

## 🛠️ Features

This implementation supports the following insertion operations:

1. **Insert at the Beginning**
2. **Insert at the End**
3. **Insert After a Given Node or any Position**

## 🧠 Functions Overview

| Function              | Description                          | Parameters                  |
|-----------------------|--------------------------------------|-----------------------------|
| `insertAtBeginning`   | Inserts node at the start            | `Node** head`, `int value`   |
| `insertAtEnd`         | Inserts node at the end              | `Node** head`, `int value`   |
| `insertAfterNode`     | Inserts node after a given node      | `Node* prev`, `int value`    |
*----------------------------------------------------------------------*
## Time Complexity 

| Operation           | Time Complexity |
| ------------------- | --------------- |
| Insert at Beginning | O(1)            |
| Insert at End       | O(n)            |
| Insert After a Node | O(1)            |


