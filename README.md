# OS_Project
1.Question Of First_Fit_algo

=> Given five memory partitions of 100 KB, 500 KB, 200 KB, 300 KB, and 600 KB
(in order), how would each of the first-fit, best-fit, and worst-fit algorithms place processes
of 212 KB, 417 KB, 112 KB, and 426 KB (in order)? Write a program in C which will print
the mapping of processes with memory partitions for both the algorithms.(for conceptual
clarity refer the textbook)


2.Question of schedular.c

Considering 4 processes with the arrival time and the burst time requirement 		of the processes the scheduler schedules the processes by interrupting the 		processor after every 3 units of time and does consider the completion of the 		process in this iteration. The schedulers then checks for the number of 			processes waiting for the processor and allots the processor to the process 		but interrupting the processor after every 6 units of time and considers the 		completion of the process in this iteration. The scheduler after the second 		iteration checks for the number of processes waiting for the processor and 		now provides the processor to the process with the least time requirement to 		go in the terminated state.The inputs for the number of requirements, arrival 		time and burst time should be provided by the user.Consider the following 		units for reference.
		Process	Arrival time	Burst time
		P1			0 		18
		P2 			2 		23
		P3 			4 		13
		P4 			13 		10
		Develop a scheduler which submits the processes to the processor in the 		above defined scenario, and compute the scheduler performance by 			providing the waiting time for process, turnaround time for process and 			average waiting time and turnaround time.
