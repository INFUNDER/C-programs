#include <stdio.h>

// Process structure
struct Process {
    int pid; // process ID
    int arrival_time; // arrival time
    int priority; // priority
    int burst_time; // burst time
    int completion_time; // completion time
    int turnaround_time; // turnaround time
};

// Function to calculate completion time and turnaround time of each process for FCFS scheduling
void fcfs_scheduling(struct Process processes[], int n) {
    int i, completion_time = 0;
    float avg_turnaround_time = 0;

    // Calculate completion time and turnaround time for each process
    for (i = 0; i < n; i++) {
        completion_time += processes[i].burst_time;
        processes[i].completion_time = completion_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        avg_turnaround_time += processes[i].turnaround_time;
    }

    // Print results
    printf("\nFCFS Scheduling:");
    printf("\nProcess\tArrival Time\tPriority\tBurst Time\tCompletion Time\tTurnaround Time");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d", processes[i].pid, processes[i].arrival_time, processes[i].priority, processes[i].burst_time, processes[i].completion_time, processes[i].turnaround_time);
    }
    avg_turnaround_time /= n;
    printf("\nAverage Turnaround Time: %.2f", avg_turnaround_time);
}

// Function to calculate completion time and turnaround time of each process for SJF scheduling
void sjf_scheduling(struct Process processes[], int n) {
    int i, j, min, temp, completion_time = 0;
    float avg_turnaround_time = 0;

    // Sort processes based on burst time
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (processes[j].burst_time < processes[min].burst_time) {
                min = j;
            }
        }
        temp = processes[i].burst_time;
        processes[i].burst_time = processes[min].burst_time;
        processes[min].burst_time = temp;
    }

    // Calculate completion time and turnaround time for each process
    for (i = 0; i < n; i++) {
        completion_time += processes[i].burst_time;
        processes[i].completion_time = completion_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        avg_turnaround_time += processes[i].turnaround_time;
    }

    // Print results
    printf("\nSJF Scheduling:");
    printf("\nProcess\tArrival Time\tPriority\tBurst Time\tCompletion Time\tTurnaround Time");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d", processes[i].pid, processes[i].arrival_time, processes[i].priority, processes[i].burst_time, processes[i].completion_time, processes[i].turnaround_time);
    }
    avg_turnaround_time /= n;
    printf("\nAverage Turnaround Time: %.2f", avg_turnaround_time);
}

// Function to calculate completion time and turnaround time of each process for Priority scheduling
void priority_scheduling(struct Process processes[], int n) {
   int i, j, max, temp, completion_time = 0;
float avg_turnaround_time = 0;
// Sort processes based on priority
for (i = 0; i < n; i++) {
    max = i;
    for (j = i + 1; j < n; j++) {
        if (processes[j].priority > processes[max].priority) {
            max = j;
        }
    }
    temp = processes[i].priority;
    processes[i].priority = processes[max].priority;
    processes[max].priority = temp;
}

// Calculate completion time and turnaround time for each process
for (i = 0; i < n; i++) {
    completion_time += processes[i].burst_time;
    processes[i].completion_time = completion_time;
    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
    avg_turnaround_time += processes[i].turnaround_time;
}

// Print results
printf("\nPriority Scheduling:");
printf("\nProcess\tArrival Time\tPriority\tBurst Time\tCompletion Time\tTurnaround Time");
for (i = 0; i < n; i++) {
    printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d", processes[i].pid, processes[i].arrival_time, processes[i].priority, processes[i].burst_time, processes[i].completion_time, processes[i].turnaround_time);
}
avg_turnaround_time /= n;
printf("\nAverage Turnaround Time: %.2f", avg_turnaround_time);
}

// Function to calculate completion time and turnaround time of each process for Round Robin scheduling
void round_robin_scheduling(struct Process processes[], int n) {
int i, j, time_quantum, remaining_burst_time[n], completion_time = 0, t = 0;
float avg_turnaround_time = 0;
// Copy burst time to remaining_burst_time array
for (i = 0; i < n; i++) {
    remaining_burst_time[i] = processes[i].burst_time;
}

// Take time quantum as input
printf("\nEnter Time Quantum: ");
scanf("%d", &time_quantum);

// Perform round robin scheduling
while (1) {
    int flag = 1;
    for (i = 0; i < n; i++) {
        if (remaining_burst_time[i] > 0) {
            flag = 0;
            if (remaining_burst_time[i] > time_quantum) {
                t += time_quantum;
                remaining_burst_time[i] -= time_quantum;
            } else {
                t += remaining_burst_time[i];
                processes[i].completion_time = t;
                processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                remaining_burst_time[i] = 0;
                avg_turnaround_time += processes[i].turnaround_time;
            }
        }
    }
    if (flag == 1) {
        break;
    }
}

// Print results
printf("\nRound Robin Scheduling:");
printf("\nProcess\tArrival Time\tPriority\tBurst Time\tCompletion Time\tTurnaround Time");
for (i = 0; i < n; i++) {
    printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d", processes[i].pid, processes[i].arrival_time, processes[i].priority, processes[i].burst_time, processes[i].completion_time, processes[i].turnaround_time);
}
avg_turnaround_time /= n;
printf("\nAverage Turnaround Time: %.2f", avg_turnaround_time);
}

int main() {
int i, n;
printf("Enter the number of processes: ");
scanf("%d", &n);
struct Process processes[n];
for (i = 0; i < n; i++) {
printf("\nEnter Details for Process %d:", i+1);
printf("\nArrival Time: ");
scanf("%d", &processes[i].arrival_time);
printf("Priority: ");
scanf("%d", &processes[i].priority);
printf("Burst Time: ");
scanf("%d", &processes[i].burst_time);
processes[i].pid = i+1;
}
fcfs_scheduling(processes, n);
sjf_scheduling(processes, n);
priority_scheduling(processes, n);
round_robin_scheduling(processes, n);
return 0;
}

