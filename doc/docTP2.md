# TP2 Task

## Introduction

This document is a report of students' conclusions about the comparison times of process scheduling systems. The following data was obtained following the instructions in the task "Trabalho Prático 2: Escalonamento de Processos no Nanvix", requested by Professor Pedro Penna, from the Computer Engineering Degree.

## Development

The task requested a change in the process scheduling algorithm. According to the instructions, the algorithm was changed from Round Robin to Priority Queue. With these changes, it was possible to identify the following changes in execution time:
- Round Robin: 4 seconds
- Priority Queue: 6 seconds
These times were obtained by running 3 tests:
- Waiting for child
- Dinamic priorites
- Scheduler stress

## Conclusion

We can conclude that more time was needed in the priority queue for a fairer scheduling of processes. Three types of priorities were taken into account:
- Nice (user)
- Priority (Static)
- Counter (Dinamic)

## Students
- Alexandre Magno
- Arthur Oliveira
- João Augusto
