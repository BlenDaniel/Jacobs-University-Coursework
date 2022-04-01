def echo_algorithm(graph, initiator):

	graph = graph.copy()

	for node in graph:  #
		graph[node].append(graph[node][2].copy())

	for_all = set()

	print("\n{0} starts sending".format(initiator))
	for q in graph[initiator][2]:
		graph[q][0] += 1
		graph[q][1] = initiator

		print("Node {0} has rec = {1}".format(q, str(graph[q][0])))

		for_all.add(q)
		(graph[initiator][3]).remove(q)

	m = min(for_all)

	current_cycle = set()

	print("\n{0} sends".format(m))
	for q in graph[m][2]:
		if q not in for_all and q is not graph[m][1]:
			graph[q][0] += 1
			graph[q][1] = m  # update parent

			print("Node {0} has rec = {1}".format(q, str(graph[q][0])))

			for_all.add(q)
			(graph[m][3]).remove(q)
			if graph[m][3] == [graph[m][1]]:
				print("Node {0} left for_all".format(m))
				for_all.remove(m)


	print("\n{0} sends".format(m))
	for q in graph[m][2]:
		if q in graph[m][3] and q is not graph[m][1]:
			graph[q][0] += 1
			print("Node {0} has rec = {1}".format(q, str(graph[q][0])))

			n = q
			(graph[m][3]).remove(q)
			if graph[m][3] == [graph[m][1]]:
				print("Node {0} left for_all".format(m))
				for_all.remove(m)
			break


	print("\n{0} sends".format(n))
	for q in graph[n][2]:
		if q is not graph[n][1]:
			graph[q][0] += 1
			print("Node {0} has rec = {1}".format(q, str(graph[q][0])))
			(graph[n][3]).remove(q)
			if graph[n][3] == [graph[n][1]]:

				print("Node {0} left for_all".format(n))
				for_all.remove(n)

			if graph[n][0] == len(graph[n][2]):
				graph[initiator][0] += 1
				print("Node {0} ended".format(n))
				print("Node {0} has rec = {1}".format(graph[n][1], str(graph[graph[n][1]][0])))
				break

	print("\n{0} sends".format(m))
	for q in graph[m][2]:
		if q in graph[m][3] and q is not graph[m][1]:
			graph[q][0] += 1
			print("Node {0} has rec = {1}".format(q, str(graph[q][0])))

			n = q
			(graph[m][3]).remove(q)
			if graph[m][3] == [graph[m][1]]:

				print("Node {0} left for_all".format(n))
				for_all.remove(m)
			break

	print("\n{0} sends".format(n))	
	for q in graph[n][2]:
		if q is not graph[n][1]:
			graph[q][0] += 1
			print("Node {0} has rec = {1}".format(q, str(graph[q][0])))

			if graph[n][0] == len(graph[n][2]):
				graph[initiator][0] += 1
				print("Node {0} ended".format(n))
				print("Node {0} has rec = {1}".format(initiator, str(graph[initiator][0])))
				for_all.remove(n)
				break


'''
	n = min(set(graph[m][2]) - current_cycle - set(initiator))

	print(current_cycle)

	print("\n{0} sends".format(n))
	for neighbour in graph[n][2]:
		if neighbour not in for_all and neighbour is not graph[n][1]:
			graph[neighbour][0] += 1
			graph[neighbour][1] = n
			print("Node {0} has rec = {1}".format(neighbour, str(graph[neighbour][0])))
			for_all.add(neighbour)
			current_cycle.add(neighbour)

	print("\n{0} sends".format(n))
	for neighbour in graph[n][2]:
		if neighbour not in current_cycle and neighbour is not graph[m][1]:
			graph[neighbour][0] += 1
			print("Node {0} has rec = {1}".format(neighbour, str(graph[neighbour][0])))

			n = neighbour
			current_cycle.add(neighbour)
			for_all.add(neighbour)

			break

'''


graph1 = {
		# node : [rec_count, parent, neighbours, request]
		"0" : [0, "u", ["1", "2", "3"]],
		"1" : [0, "u", ["0", "2", "3", "4"]],
		"2" : [0, "u", ["0", "1"]],
		"3" : [0, "u", ["0", "1", "4"]],
		"4" : [0, "u", ["1", "3"]]
}

echo_algorithm(graph1, "0")