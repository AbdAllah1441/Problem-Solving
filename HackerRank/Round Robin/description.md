Round Robin is the preemptive process scheduling algorithm.
Each process is provided a fixed time to execute, it is called a quantum.
Once a process is executed for a given time period (quantum), it leaves the CPU and other process executes for a given time period.
Context switching is used to save states of preempted processes.
Once the quantum is finished the process leaves the CPU and if it has finished its time period, the process is terminated. and if it has time left, it goes back into the processes queue.

example notice the table below where the Burst time is the CPU time

image

the order of processes in CPU as illustrated

image

so the output string should be "ABCDECDEE". notice that E have left the CPU after the quantum and enters again.

Input Format

the first line contains n (the number of processes) and q (the quantum) the next n lines contains two space seperated values the process name and the process CPU time

Constraints

1 <= n <= 1000 all processes have the same arrival time which is 0.

Output Format

a string represents the order of processes names in CPU.

Sample Input 0

5 2
A 2
B 2
C 3
D 4
E 5
Sample Output 0

ABCDECDEE
