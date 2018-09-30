#lists are an ordered collection that holds references to Python data objects
#lists are mutable (objects can be added or removed)
#----------------------------------------------------------------------------
#two syntaxes to create an empty list
myList = list()
myList = []
print(myList)

myList = ['item 0', True, 0.8, 255, "item 4"]

print(myList)
print(myList[1])

myList = [['item0', 'item1'], [1, 5, 9, 7]]

print(myList)
print(myList[1][1])

#a list holds references to Python data objects
#newList holds references to myList, there for the change in myList also changes newList
myList = [1,2,3,4]
newList = [myList]*3
print(newList)
myList[2]=10
print(newList)

#negative indexes
#-1 refers to the last index in a list
#-2 refers to the second-to-last index, and so on
myList = [1,2,3,4]
print(myList[-1])
print(myList[-3])

#slices
print(myList[0:4])
print(myList[2:4])
print(myList[0:-1])
print(myList[:2])
print(myList[1:])
myList[-1] = False
print(myList[:])

#length of list
print(len(myList))

#list concatenation 
myList2 = [23, 65, 33]
newList = myList + myList2 * 2
print(newList)

#add new item to the end of the list
myList = [1024, 3, True, 6.5]
myList.append(False)
print(myList)

#insert(index, item)
myList.insert(2,4.5)
print(myList)

#remove and return the last item
print(myList.pop())
print(myList)

#remove and return the 1st item
print(myList.pop(1))
print(myList)

#sort the list
myList.sort()
print(myList)

#reverse the list
myList.reverse()
print(myList)

#returns the number of occurrences of item
print(myList.count(6.5))

#returns the index of the first occurrence of item
print(myList.index(4.5))

#removes the first occurrence of item
myList.remove(6.5)
print(myList)

#remove item from list
del myList[0]
print(myList)

#fill list with the range function
myList = list(range(10))
print(myList)
#skip by twos
myList = list(range(0, 10, 2))
print(myList)
myList = list(range(10, 0, -1))
print(myList)


#Tuples
#------
#tuples are very similar to lists, the difference is that a tuple, like a string,
#is immutable (can't be changed)

#two syntaxes to create an empty tuple
myTuple = ()
myTuple = tuple()

myTuple = (123, "Hello", 1.4)
print(myTuple)

print(123 in myTuple)
print("Hello" not in myTuple)


#dictonaries are mutable but don't store objects in a specific order
#dictionaries are used to map one object, the key, to another object, the value
#------------------------------------------------------------------------------
#two syntaxes to create a dictionary
myDict = dict()
print(myDict)
myDict = {}
print(myDict)

myDict = {'strawberries': 400, 'apples': 12, 'oranges': 4, 'cookies': 10}
print(myDict)
#capitals = {'Iowa':'DesMoines','Wisconsin':'Madison'}
print(myDict['apples'])
myDict['peaches']=8
myDict['bananas']=2
print(myDict)

for i in myDict:
    print("You have", myDict[i], i)

print(len(myDict))

myList = list(myDict.keys())
print(myList)
myList = list(myDict.values())
print(myList)
myList = list(myDict.items())
print(myList)
print(myDict)
