gdb <hello>
b [fuct name, line number] break
r [comm-line arg]
n next
s step inside
p [variable]
info locals
bt backtrace
q
ctrl+U

binarysearch(144, array[], 0, 233);
if (max < min):
	return -1;
else
	midpoint = findMidPoint(min, max) max-min/2;

	if (array[midpoint] < key):
		binarysearch(144, array[], midpoint + 1, 233);
	else if (array[midpoint] > key):
		binarysearch(144, array[], 0, midpoint - 1);
	else 
		return midpoint;

	insertion sort

	// iterate for the each element exept first 
	for (int i = 1; i < n - 1; ++i)
	{
		//keepinf track of our current place in unsorted
		//moving to
		element = array[i];
		//index in our unsorted
		j = i;
		//iterate our insetring pos
		while (j > 0 && array[j - 1] > element)
		{
			//shift position one space to the right
			array[j] = array[j - 1];
			//update our counter
			j = j - 1;
		}
		//insert element to sorted portion
		array[j] = element;
	}

linear search(key, array[]);

for (int i = 0; i < length(array); ++i)
{
	/* code */
	if(array[i] == key);
	return i;
}
return -1;

quicksort
 
for (int i = 0; i < length; ++i)
{
	/* code */
	int pivot = last of array[];
	if (pivot < array[i])
	{
		n += 1;
	}
	else
	{
		array[i] = array[i-1];
	}
}

selection sort
//iterate thru all element of array to n - 1
for (int i = 0; i < n - 1; ++i)
{
	//first element of unsotred list to be the min
	
	//iterate thru each unsorted element
	for (int j = i + 1; j < n; ++i)
	{
		//compare current element to the min
		min = i;
		if (array[j] < array[min])
		{
			//remember new min
			min = j;
		}
	}
	if (min != i)
	{
		swap array[min] and array[i];
	}
	
}


