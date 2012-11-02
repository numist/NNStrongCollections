/**
 */
@interface NN##_Uname_##Array (NNExtended##_Uname_##Array)

/**
 Returns a new array that is a copy of the receiving array with a given _lname_ added to the end.

     - (NN##_Uname_##Array *)strongArrayByAdding##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ An _lname_.

 @return A new array that is a copy of the receiving array with some##_Uname_ added to the end.

 @see NSArray#arrayByAddingObject:
 @see NNMutable##_Uname_##Array#add##_Uname_:
 */
- (NN##_Uname_##Array *)strongArrayByAdding##_Uname_:(_class_ *)some##_Uname_;

/**
 Returns a new array that is a copy of the receiving array with the _lname_##_pluralSuffix_ contained in another array added to the end.

     - (NN##_Uname_##Array *)strongArrayByAdding##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray

 @param otherArray An array.

 @return A new array that is a copy of the receiving array with the _lname_##_pluralSuffix_ contained in otherArray added to the end.

 @see NSArray#arrayByAddingObjectsFromArray:
 @see NNMutable##_Uname_##Array#add##_Uname_##_pluralSuffix_##FromArray:
 */
- (NN##_Uname_##Array *)strongArrayByAdding##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;

/**
 Returns a Boolean value that indicates whether a given _lname_ is present in the array.

     - (BOOL)contains##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ An _lname_.

 @return YES if some##_Uname_ is present in the array, otherwise NO.

 @see NSArray#containsObject:
 @see indexOf##_Uname_:
 @see indexOf##_Uname_##IdenticalTo:
 */
- (BOOL)contains##_Uname_:(_class_ *)some##_Uname_;

/**
 Returns the first _lname_ contained in the receiving array that’s equal to an _lname_ in another given array.

     - (_class_ *)first##_Uname_##CommonWithArray:(NSArray *)otherArray

 @param otherArray An array.

 @return Returns the first _lname_ contained in the receiving array that’s equal to an _lname_ in otherArray. If no such _lname_ is found, returns nil.

 @see NSArray#firstObjectCommonWithArray:
 @see contains##_Uname_:
 */
- (_class_ *)first##_Uname_##CommonWithArray:(NSArray *)otherArray;

/**
 Copies the _lname_##_pluralSuffix_ contained in the array that fall within the specified range to aBuffer.

     - (void)get##_Uname_##_pluralSuffix_:(id __unsafe_unretained [])_lname_##_pluralSuffix_ range:(NSRange)range

 @param aBuffer A C array of _lname_##_pluralSuffix_ of size at least the length of the range specified by aRange.
 @param aRange A range within the bounds of the array.

 @see NSArray#getObjects:range:
 @see arrayWith##_Uname_##_pluralSuffix_:count:
 */
- (void)get##_Uname_##_pluralSuffix_:(id __unsafe_unretained [])_lname_##_pluralSuffix_ range:(NSRange)range;

/**
 Returns the lowest index whose corresponding array value is equal to a given _lname_.

     - (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ An _lname_.

 @return The lowest index whose corresponding array value is equal to some##_Uname_. If none of the _lname_##_pluralSuffix_ in the array is equal to anObject, returns NSNotFound.

 @see NSArray#indexOfObject:
 @see contains##_Uname_:
 @see indexOf##_Uname_##IdenticalTo:
 */
- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_;

/**
 Returns the lowest index within a specified range whose corresponding array value is equal to a given _lname_.

     - (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inRange:(NSRange)range

 @param some##_Uname_ An _lname_.
 @param range The range of indexes in the array within which to search for some##_Uname_.

 @return The lowest index within range whose corresponding array value is equal to some##_Uname_. If none of the _lname_##_pluralSuffix_ within range is equal to some##_Uname_, returns NSNotFound.

 @see NSArray#indexOfObject:inRange:
 @see contains##_Uname_:
 @see indexOf##_Uname_##IdenticalTo:inRange:
 */
- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inRange:(NSRange)range;

/**
 Returns the lowest index whose corresponding array value is identical to a given _lname_.

     - (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_

 @param some##_Uname_ An _lname_.

 @return The lowest index whose corresponding array value is identical to some##_Uname_. If none of the _lname_##_pluralSuffix_ in the array is identical to some##_Uname_, returns NSNotFound.

 @see NSArray#indexOfObjectIdenticalTo:
 @see contains##_Uname_:
 @see indexOf##_Uname_:
 */
- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;

/**
 Returns the lowest index within a specified range whose corresponding array value is equal to a given _lname_ .

     - (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_ inRange:(NSRange)range

 @param some##_Uname_ An _lname_.
 @param range The range of indexes in the array within which to search for some##_Uname_.

 @return The lowest index within range whose corresponding array value is identical to some##_Uname_. If none of the _lname_##_pluralSuffix_ within range is identical to some##_Uname_, returns NSNotFound.

 @see NSArray#indexOfObjectIdenticalTo:inRange:
 @see contains##_Uname_:
 @see indexOf##_Uname_:inRange:
 */
- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_ inRange:(NSRange)range;

/**
 Returns the _lname_ in the array with the highest index value.

     - (_class_ *)last##_Uname_

 @return The _lname_ in the array with the highest index value. If the array is empty, returns nil.

 @see NSArray#lastObject
 @see NNMutable##_Uname_##Array#removeLast##_Uname_
 */
- (_class_ *)last##_Uname_;

/**
 Returns an enumerator object that lets you access each _lname_ in the array.

     - (NSEnumerator *)_lname_##Enumerator

 @return An enumerator object that lets you access each _lname_ in the array, in order, from the element at the lowest index upwards.

 @see NSArray#objectEnumerator
 @see reverse##_Uname_##Enumerator
 */
- (NSEnumerator *)_lname_##Enumerator;

/**
 Returns an enumerator object that lets you access each _lname_ in the array, in reverse order.

     - (NSEnumerator *)reverse##_Uname_##Enumerator

 @return An enumerator object that lets you access each _lname_ in the array, in order, from the element at the highest index down to the element at index 0.

 @see NSArray#reverseObjectEnumerator
 @see _lname_##Enumerator
 */
- (NSEnumerator *)reverse##_Uname_##Enumerator;

/**
 Sends to each _lname_ in the array the message identified by a given selector, starting with the first _lname_ and continuing through the array to the last _lname_.

     - (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector

 @param aSelector A selector that identifies the message to send to the _lname_##_pluralSuffix_ in the array. The method must not take any arguments, and must not have the side effect of modifying the receiving array.

 @see NSArray#makeObjectsPerformSelector:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:withObject:
 */
- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector;

/**
 Sends the aSelector message to each _lname_ in the array, starting with the first _lname_ and continuing through the array to the last _lname_.

     - (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector with##_Uname_:(_class_ *)argument

 @param aSelector A selector that identifies the message to send to the _lname_##_pluralSuffix_ in the array. The method must take a single argument of type id, and must not have the side effect of modifying the receiving array.
 @param anObject The object to send as the argument to each invocation of the aSelector method.

 @see NSArray#makeObjectsPerformSelector:withObject:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:
 */
- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector withObject:(id)anObject;

/**
 Returns an array containing the _lname_##_pluralSuffix_ in the array at the indexes specified by a given index set.

     - (NN##_Uname_##Array *)_lname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes

 @return An array containing the _lname_##_pluralSuffix_ in the array at the indexes specified by indexes.

 @see NSArray#objectsAtIndexes:
 @see _lname_##AtIndex:
 */
- (NN##_Uname_##Array *)_lname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;

/**
 Returns the _lname_ at the specified index.

     - (_class_ *)_lname_##AtIndexedSubscript:(NSUInteger)idx

 @param idx An index within the bounds of the array.

 @return The _lname_ located at index.

 @see NSArray#objectAtIndexedSubscript:
 @see _lname_##_pluralSuffix_##AtIndexes:
 */
- (_class_ *)_lname_##AtIndexedSubscript:(NSUInteger)idx;

/**
 Executes a given block using each _lname_ in the array, starting with the first _lname_ and continuing through the array to the last _lname_.

     - (void)enumerate##_Uname_##_pluralSuffix_##UsingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block

 @param block The block to apply to elements in the array.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsUsingBlock:
 @see enumerate##_Uname_##_pluralSuffix_##WithOptions:usingBlock:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:withObject:
 */
- (void)enumerate##_Uname_##_pluralSuffix_##UsingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;

/**
 Executes a given block using each _lname_ in the array.

     - (void)enumerate##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param block The block to apply to elements in the array.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsWithOptions:usingBlock:
 @see enumerate##_Uname_##_pluralSuffix_##UsingBlock:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:withObject:
 */
- (void)enumerate##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;

/**
 Executes a given block using the _lname_##_pluralSuffix_ in the array at the specified indexes.

     - (void)enumerate##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block

 @param indexSet The indexes of the _lname_##_pluralSuffix_ over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param block The block to apply to elements in the array.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsAtIndexes:options:usingBlock:
 @see enumerate##_Uname_##_pluralSuffix_##UsingBlock:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:
 @see make##_Uname_##_pluralSuffix_##PerformSelector:withObject:
 */
- (void)enumerate##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;

/**
 Returns the index of the first _lname_ in the array that passes a test in a given Block.

     - (NSUInteger)indexOf##_Uname_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The lowest index whose corresponding value in the array passes the test specified by predicate. If no _lname_##_pluralSuffix_ in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectPassingTest:
 */
- (NSUInteger)indexOf##_Uname_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index of an _lname_ in the array that passes a test in a given Block for a given set of enumeration options.

     - (NSUInteger)indexOf##_Uname_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The index whose corresponding value in the array passes the test specified by predicate and opts. If the opts bitmask specifies reverse order, then the last item that matches is returned. Otherwise, the index of the first matching _lname_ is returned. If no _lname_##_pluralSuffix_ in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectWithOptions:passingTest:
 */
- (NSUInteger)indexOf##_Uname_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index, from a given set of indexes, of the first _lname_ in the array that passes a test in a given Block for a given set of enumeration options.

     - (NSUInteger)indexOf##_Uname_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param indexSet The indexes of the _lname_##_pluralSuffix_ over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The lowest index whose corresponding value in the array passes the test specified by predicate. If no _lname_##_pluralSuffix_ in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectAtIndexes:options:passingTest:
 */
- (NSUInteger)indexOf##_Uname_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes of _lname_##_pluralSuffix_ in the array that pass a test in a given Block.

     - (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no _lname_##_pluralSuffix_ in the array pass the test, returns an empty index set.

 @see NSArray#indexesOfObjectsPassingTest:
 */
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes of _lname_##_pluralSuffix_ in the array that pass a test in a given Block for a given set of enumeration options.

     - (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no _lname_##_pluralSuffix_ in the array pass the test, returns an empty index set.

 @see NSArray indexesOfObjectsWithOptions:passingTest:
 */
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes, from a given set of indexes, of _lname_##_pluralSuffix_ in the array that pass a test in a given Block for a given set of enumeration options.

     - (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate

 @param indexSet The indexes of the _lname_##_pluralSuffix_ over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether some##_Uname_ passed the test.
  @param some##_Uname_ The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no _lname_##_pluralSuffix_ in the array pass the test, returns an empty index set.

 @see NSArray#indexesOfObjectsAtIndexes:passingTest:
 */
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index, within a specified range, of an _lname_ compared with elements in the array using a given NSComparator block.

     - (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp

 @param obj  An object for which to search in the array.
 @param r The range within the array to search for obj.
 @param opts Options for the search. For possible values, see “NSBinarySearchingOptions.”
 @param cmp A comparator block used to compare the object obj with elements in the array.

 @return If the NSBinarySearchingInsertionIndex option is not specified:
 If the obj is found and neither NSBinarySearchingFirstEqual nor NSBinarySearchingLastEqual is specified, returns an arbitrary matching object's index.
 If the NSBinarySearchingFirstEqual option is also specified, returns the lowest index of equal objects.
 If the NSBinarySearchingLastEqual option is also specified, returns the highest index of equal objects.
 If the object is not found, returns NSNotFound.
 If the NSBinarySearchingInsertionIndex option is specified, returns the index at which you should insert obj in order to maintain a sorted array:

 If the obj is found and neither NSBinarySearchingFirstEqual nor NSBinarySearchingLastEqual is specified, returns any equal or one larger index than any matching object’s index.
 If the NSBinarySearchingFirstEqual option is also specified, returns the lowest index of equal objects.
 If the NSBinarySearchingLastEqual option is also specified, returns the highest index of equal objects.
 If the object is not found, returns the index of the least greater object, or the index at the end of the array if the object is larger than all other elements.

 @see NSArray#indexOfObject:inSortedRange:options:usingComparator:
 */
- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;

@end
