/**
 */
@interface NNMutableWidgetArray (NNExtendedWidgetArray)

/**
 Returns a new array that is a copy of the receiving array with a given widget added to the end.

     - (NNMutableWidgetArray *)strongArrayByAddingWidget:(NSWidget *)someWidget

 @param someWidget An widget.

 @return A new array that is a copy of the receiving array with someWidget added to the end.

 @see NSArray#arrayByAddingObject:
 @see NNMutableWidgetArray#addWidget:
 */
- (NNMutableWidgetArray *)strongArrayByAddingWidget:(NSWidget *)someWidget;

/**
 Returns a new array that is a copy of the receiving array with the widgets contained in another array added to the end.

     - (NNMutableWidgetArray *)strongArrayByAddingWidgetsFromArray:(NSArray *)otherArray

 @param otherArray An array.

 @return A new array that is a copy of the receiving array with the widgets contained in otherArray added to the end.

 @see NSArray#arrayByAddingObjectsFromArray:
 @see NNMutableWidgetArray#addWidgetsFromArray:
 */
- (NNMutableWidgetArray *)strongArrayByAddingWidgetsFromArray:(NSArray *)otherArray;

/**
 Returns a Boolean value that indicates whether a given widget is present in the array.

     - (BOOL)containsWidget:(NSWidget *)someWidget

 @param someWidget An widget.

 @return YES if someWidget is present in the array, otherwise NO.

 @see NSArray#containsObject:
 @see indexOfWidget:
 @see indexOfWidgetIdenticalTo:
 */
- (BOOL)containsWidget:(NSWidget *)someWidget;

/**
 Returns the first widget contained in the receiving array that’s equal to an widget in another given array.

     - (NSWidget *)firstWidgetCommonWithArray:(NSArray *)otherArray

 @param otherArray An array.

 @return Returns the first widget contained in the receiving array that’s equal to an widget in otherArray. If no such widget is found, returns nil.

 @see NSArray#firstObjectCommonWithArray:
 @see containsWidget:
 */
- (NSWidget *)firstWidgetCommonWithArray:(NSArray *)otherArray;

/**
 Copies the widgets contained in the array that fall within the specified range to aBuffer.

     - (void)getWidgets:(id __unsafe_unretained [])widgets range:(NSRange)range

 @param aBuffer A C array of widgets of size at least the length of the range specified by aRange.
 @param aRange A range within the bounds of the array.

 @see NSArray#getObjects:range:
 @see arrayWithWidgets:count:
 */
- (void)getWidgets:(id __unsafe_unretained [])widgets range:(NSRange)range;

/**
 Returns the lowest index whose corresponding array value is equal to a given widget.

     - (NSUInteger)indexOfWidget:(NSWidget *)someWidget

 @param someWidget An widget.

 @return The lowest index whose corresponding array value is equal to someWidget. If none of the widgets in the array is equal to anObject, returns NSNotFound.

 @see NSArray#indexOfObject:
 @see containsWidget:
 @see indexOfWidgetIdenticalTo:
 */
- (NSUInteger)indexOfWidget:(NSWidget *)someWidget;

/**
 Returns the lowest index within a specified range whose corresponding array value is equal to a given widget.

     - (NSUInteger)indexOfWidget:(NSWidget *)someWidget inRange:(NSRange)range

 @param someWidget An widget.
 @param range The range of indexes in the array within which to search for someWidget.

 @return The lowest index within range whose corresponding array value is equal to someWidget. If none of the widgets within range is equal to someWidget, returns NSNotFound.

 @see NSArray#indexOfObject:inRange:
 @see containsWidget:
 @see indexOfWidgetIdenticalTo:inRange:
 */
- (NSUInteger)indexOfWidget:(NSWidget *)someWidget inRange:(NSRange)range;

/**
 Returns the lowest index whose corresponding array value is identical to a given widget.

     - (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget

 @param someWidget An widget.

 @return The lowest index whose corresponding array value is identical to someWidget. If none of the widgets in the array is identical to someWidget, returns NSNotFound.

 @see NSArray#indexOfObjectIdenticalTo:
 @see containsWidget:
 @see indexOfWidget:
 */
- (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget;

/**
 Returns the lowest index within a specified range whose corresponding array value is equal to a given widget .

     - (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget inRange:(NSRange)range

 @param someWidget An widget.
 @param range The range of indexes in the array within which to search for someWidget.

 @return The lowest index within range whose corresponding array value is identical to someWidget. If none of the widgets within range is identical to someWidget, returns NSNotFound.

 @see NSArray#indexOfObjectIdenticalTo:inRange:
 @see containsWidget:
 @see indexOfWidget:inRange:
 */
- (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget inRange:(NSRange)range;

/**
 Returns the widget in the array with the highest index value.

     - (NSWidget *)lastWidget

 @return The widget in the array with the highest index value. If the array is empty, returns nil.

 @see NSArray#lastObject
 @see NNMutableWidgetArray#removeLastWidget
 */
- (NSWidget *)lastWidget;

/**
 Returns an enumerator object that lets you access each widget in the array.

     - (NSEnumerator *)widgetEnumerator

 @return An enumerator object that lets you access each widget in the array, in order, from the element at the lowest index upwards.

 @see NSArray#objectEnumerator
 @see reverseWidgetEnumerator
 */
- (NSEnumerator *)widgetEnumerator;

/**
 Returns an enumerator object that lets you access each widget in the array, in reverse order.

     - (NSEnumerator *)reverseWidgetEnumerator

 @return An enumerator object that lets you access each widget in the array, in order, from the element at the highest index down to the element at index 0.

 @see NSArray#reverseObjectEnumerator
 @see widgetEnumerator
 */
- (NSEnumerator *)reverseWidgetEnumerator;

/**
 Sends to each widget in the array the message identified by a given selector, starting with the first widget and continuing through the array to the last widget.

     - (void)makeWidgetsPerformSelector:(SEL)aSelector

 @param aSelector A selector that identifies the message to send to the widgets in the array. The method must not take any arguments, and must not have the side effect of modifying the receiving array.

 @see NSArray#makeObjectsPerformSelector:
 @see makeWidgetsPerformSelector:withObject:
 */
- (void)makeWidgetsPerformSelector:(SEL)aSelector;

/**
 Sends the aSelector message to each widget in the array, starting with the first widget and continuing through the array to the last widget.

     - (void)makeWidgetsPerformSelector:(SEL)aSelector withWidget:(NSWidget *)argument

 @param aSelector A selector that identifies the message to send to the widgets in the array. The method must take a single argument of type id, and must not have the side effect of modifying the receiving array.
 @param anObject The object to send as the argument to each invocation of the aSelector method.

 @see NSArray#makeObjectsPerformSelector:withObject:
 @see makeWidgetsPerformSelector:
 */
- (void)makeWidgetsPerformSelector:(SEL)aSelector withObject:(id)anObject;

/**
 Returns an array containing the widgets in the array at the indexes specified by a given index set.

     - (NNMutableWidgetArray *)widgetsAtIndexes:(NSIndexSet *)indexes

 @return An array containing the widgets in the array at the indexes specified by indexes.

 @see NSArray#objectsAtIndexes:
 @see widgetAtIndex:
 */
- (NNMutableWidgetArray *)widgetsAtIndexes:(NSIndexSet *)indexes;

/**
 Returns the widget at the specified index.

     - (NSWidget *)widgetAtIndexedSubscript:(NSUInteger)idx

 @param idx An index within the bounds of the array.

 @return The widget located at index.

 @see NSArray#objectAtIndexedSubscript:
 @see widgetsAtIndexes:
 */
- (NSWidget *)widgetAtIndexedSubscript:(NSUInteger)idx;

/**
 Executes a given block using each widget in the array, starting with the first widget and continuing through the array to the last widget.

     - (void)enumerateWidgetsUsingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block

 @param block The block to apply to elements in the array.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsUsingBlock:
 @see enumerateWidgetsWithOptions:usingBlock:
 @see makeWidgetsPerformSelector:
 @see makeWidgetsPerformSelector:withObject:
 */
- (void)enumerateWidgetsUsingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;

/**
 Executes a given block using each widget in the array.

     - (void)enumerateWidgetsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param block The block to apply to elements in the array.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsWithOptions:usingBlock:
 @see enumerateWidgetsUsingBlock:
 @see makeWidgetsPerformSelector:
 @see makeWidgetsPerformSelector:withObject:
 */
- (void)enumerateWidgetsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;

/**
 Executes a given block using the widgets in the array at the specified indexes.

     - (void)enumerateWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block

 @param indexSet The indexes of the widgets over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param block The block to apply to elements in the array.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @see NSArray#enumerateObjectsAtIndexes:options:usingBlock:
 @see enumerateWidgetsUsingBlock:
 @see makeWidgetsPerformSelector:
 @see makeWidgetsPerformSelector:withObject:
 */
- (void)enumerateWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;

/**
 Returns the index of the first widget in the array that passes a test in a given Block.

     - (NSUInteger)indexOfWidgetPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The lowest index whose corresponding value in the array passes the test specified by predicate. If no widgets in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectPassingTest:
 */
- (NSUInteger)indexOfWidgetPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index of an widget in the array that passes a test in a given Block for a given set of enumeration options.

     - (NSUInteger)indexOfWidgetWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The index whose corresponding value in the array passes the test specified by predicate and opts. If the opts bitmask specifies reverse order, then the last item that matches is returned. Otherwise, the index of the first matching widget is returned. If no widgets in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectWithOptions:passingTest:
 */
- (NSUInteger)indexOfWidgetWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index, from a given set of indexes, of the first widget in the array that passes a test in a given Block for a given set of enumeration options.

     - (NSUInteger)indexOfWidgetAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param indexSet The indexes of the widgets over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The lowest index whose corresponding value in the array passes the test specified by predicate. If no widgets in the array pass the test, returns NSNotFound.

 @see NSArray#indexOfObjectAtIndexes:options:passingTest:
 */
- (NSUInteger)indexOfWidgetAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes of widgets in the array that pass a test in a given Block.

     - (NSIndexSet *)indexesOfWidgetsPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no widgets in the array pass the test, returns an empty index set.

 @see NSArray#indexesOfObjectsPassingTest:
 */
- (NSIndexSet *)indexesOfWidgetsPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes of widgets in the array that pass a test in a given Block for a given set of enumeration options.

     - (NSIndexSet *)indexesOfWidgetsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no widgets in the array pass the test, returns an empty index set.

 @see NSArray indexesOfObjectsWithOptions:passingTest:
 */
- (NSIndexSet *)indexesOfWidgetsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the indexes, from a given set of indexes, of widgets in the array that pass a test in a given Block for a given set of enumeration options.

     - (NSIndexSet *)indexesOfWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate

 @param indexSet The indexes of the widgets over which to enumerate.
 @param opts A bitmask that specifies the options for the enumeration (whether it should be performed concurrently and whether it should be performed in reverse order).
 @param predicate The block to apply to elements in the array.
  The Block returns a Boolean value that indicates whether someWidget passed the test.
  @param someWidget The element in the array.
  @param idx The index of the element in the array.
  @param stop A reference to a Boolean value. The block can set the value to YES to stop further processing of the array. The stop argument is an out-only argument. You should only ever set this Boolean to YES within the Block.

 @return The indexes whose corresponding values in the array pass the test specified by predicate. If no widgets in the array pass the test, returns an empty index set.

 @see NSArray#indexesOfObjectsAtIndexes:passingTest:
 */
- (NSIndexSet *)indexesOfWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;

/**
 Returns the index, within a specified range, of an widget compared with elements in the array using a given NSComparator block.

     - (NSUInteger)indexOfWidget:(NSWidget *)someWidget inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp

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
- (NSUInteger)indexOfWidget:(NSWidget *)someWidget inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;

@end
