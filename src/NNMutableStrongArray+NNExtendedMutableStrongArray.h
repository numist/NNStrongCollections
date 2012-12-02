/**
 */
@interface NNMutableWidgetArray (NNExtendedMutableWidgetArray)

/**
 Adds the widgets contained in another given array to the end of the receiving array’s content.

     - (void)addWidgetsFromArray:(NSArray *)otherArray

 @param otherArray An array of widgets to add to the end of the receiving array’s content.

 @see NSMutableArray#addObjectsFromArray:
 */
- (void)addWidgetsFromArray:(NSArray *)otherArray;

/**
 Exchanges the widgets in the array at given indices.

     - (void)exchangeWidgetAtIndex:(NSUInteger)idx1 withWidgetAtIndex:(NSUInteger)idx2

 @param idx1 The index of the widget with which to replace the widget at index idx2.
 @param idx2 The index of the widget with which to replace the widget at index idx1.

 @see NSMutableArray#exchangeObjectAtIndex:withObjectAtIndex:
 */
- (void)exchangeWidgetAtIndex:(NSUInteger)idx1 withWidgetAtIndex:(NSUInteger)idx2;

/**
 Empties the array.

     - (void)removeAllWidgets

 @see NSMutableArray#removeAllObjects
 */
- (void)removeAllWidgets;

/**
 Removes all occurrences within a specified range in the array of a given widget.

     - (void)removeWidget:(NNWidget *)someWidget inRange:(NSRange)range

 @param someWidget The widget to remove from the array's content.
 @param aRange The range from which to remove someWidget.

 @par Important
 Raises an NSRangeException if aRange exceeds the bounds of the array.

 @see NSMutableArray#removeObject:inRange:
 @see removeAllWidgets
 @see removeLastWidget
 @see removeWidgetAtIndex:
 @see removeWidgetIdenticalTo:
 @see removeWidgetsInArray:
 */
- (void)removeWidget:(NNWidget *)someWidget inRange:(NSRange)range;

/**
 Removes all occurrences in the array of a given widget.

     - (void)removeWidget:(NNWidget *)someWidget

 @param someWidget The widget to remove from the array.

 @see NSMutableArray#removeObject:
 @see removeAllWidgets
 @see removeLastWidget
 @see removeWidgetAtIndex:
 @see removeWidgetIdenticalTo:
 @see removeWidgetsInArray:
 */
- (void)removeWidget:(NNWidget *)someWidget;

/**
 Removes all occurrences of someWidget within the specified range in the array.

     - (void)removeWidgetIdenticalTo:(NNWidget *)someWidget inRange:(NSRange)range

 @param someWidget The widget to remove from the array within aRange.
 @param aRange The range in the array from which to remove someWidget.

 @see NSMutableArray#removeObjectIdenticalTo:inRange:
 @see removeAllWidgets
 @see removeLastWidget
 @see removeWidget:
 @see removeWidgetAtIndex:
 @see removeWidgetsAtIndexes:
*/
- (void)removeWidgetIdenticalTo:(NNWidget *)someWidget inRange:(NSRange)range;

/**
 Removes all occurrences of a given widget in the array.

     - (void)removeWidgetIdenticalTo:(NNWidget *)someWidget

 @param someWidget The widget to remove from the array.

 @see NSMutableArray#removeObjectIdenticalTo:
 @see removeAllWidgets
 @see removeLastWidget
 @see removeWidget:
 @see removeWidgetAtIndex:
 */
- (void)removeWidgetIdenticalTo:(NNWidget *)someWidget;

/**
 Removes from the receiving array the widgets in another given array.

     - (void)removeWidgetsInArray:(NSArray *)otherArray

 @param otherArray An array containing the widgets to be removed from the receiving array.

 @see NSMutableArray#removeObjectsInArray:
 @see removeAllWidgets
 @see removeWidgetIdenticalTo:
 @see removeWidgetsAtIndexes:
 */
- (void)removeWidgetsInArray:(NSArray *)otherArray;

/**
    Removes from the array each of the widgets within a given range.

     - (void)removeWidgetsInRange:(NSRange)range

 @param aRange The range of the widgets to remove from the array.

 @see NSMutableArray#removeObjectsInRange:
 */
- (void)removeWidgetsInRange:(NSRange)range;

/**
 Replaces the widgets in the receiving array specified by one given range with the widgets in another array specified by another range.

     - (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray range:(NSRange)otherRange

 @param aRange The range of widgets to replace in (or remove from) the receiving array.
 @param otherArray The array of widgets from which to select replacements for the widgets in aRange.
 @param otherRange The range of widgets to select from otherArray as replacements for the widgets in aRange.

 @see NSMutableArray#replaceWidgetsInRange:withWidgetsFromArray:range:
 @see insertWidget:atIndex:
 @see removeWidgetAtIndex:
 @see replaceWidgetAtIndex:withWidget:
 @see replaceWidgetsAtIndexes:withWidgets:
 */
- (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray range:(NSRange)otherRange;

/**
 Replaces the widgets in the receiving array specified by a given range with all of the widgets from a given array.

     - (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray

 @param aRange The range of widgets to replace in (or remove from) the receiving array.
 @param otherArray The array of widgets from which to select replacements for the widgets in aRange.

 @see NSMutableArray#replaceObjectsInRange:withObjectsFromArray:
 @see insertWidget:atIndex:
 @see removeWidgetAtIndex:
 @see replaceWidgetAtIndex:withWidget:
 @see replaceWidgetsAtIndexes:withWidgets: */
- (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray;

/**
 Sorts the array’s widgets in ascending order as defined by the comparison function compare.

     - (void)sortUsingWidgetFunction:(NSInteger (*)(NNWidget *, NNWidget *, void *))compare context:(void *)context

 @param compare The comparison function to use to compare two widgets at a time.
 The function's parameters are two widgets to compare and the context parameter, context. The function should return NSOrderedAscending if the first widget is smaller than the second, NSOrderedDescending if the first widget is larger than the second, and NSOrderedSame if the widgets are equal.
 @param context The context argument to pass to the compare function.

 @see NSMutableArray#sortUsingFunction:context:
 */
- (void)sortUsingWidgetFunction:(NSInteger (*)(NNWidget *, NNWidget *, void *))compare context:(void *)context;

/**
 Inserts the widgets in the provided array into the receiving array at the specified indexes.

     - (void)insertWidgets:(NSArray *)widgets atIndexes:(NSIndexSet *)indexes

 @param widgets An array of widgets to insert into the receiving array.
 @param indexes The indexes at which the widgets in widgets should be inserted. The count of locations in indexes must equal the count of widgets. For more details, see NSMutableArray#insertObjects:atIndexes:

 @see NSMutableArray#insertObjects:atIndexes:
 @see insertWidget:atIndex:
 */
- (void)insertWidgets:(NSArray *)widgets atIndexes:(NSIndexSet *)indexes;

/**
 Removes the widgets at the specified indexes from the array.

     - (void)removeWidgetsAtIndexes:(NSIndexSet *)indexes

 @param indexes The indexes of the widgets to remove from the array. The locations specified by indexes must lie within the bounds of the array.

 @see NSMutableArray#removeObjectsAtIndexes:
 @see removeWidgetAtIndex:
 @see removeWidget:inRange:
 */
- (void)removeWidgetsAtIndexes:(NSIndexSet *)indexes;

/**
 Replaces the widgets in the receiving array at specified locations specified with the widgets from a given array.

     - (void)replaceWidgetsAtIndexes:(NSIndexSet *)indexes withWidgets:(NSArray *)widgets

 @param indexes The indexes of the widgets to be replaced.
 @param widgets The widgets with which to replace the widgets in the receiving array at the indexes specified by indexes. The count of locations in indexes must equal the count of widgets.

 @see NSMutableArray#replaceObjectsAtIndexes:withObjects:
 @see insertWidget:atIndex:
 @see removeWidgetAtIndex:
 @see replaceWidgetAtIndex:withWidget:
 */
- (void)replaceWidgetsAtIndexes:(NSIndexSet *)indexes withWidgets:(NSArray *)widgets;

/**
 Replaces the widget at the index with the new widget, possibly adding the widget.

     - (void)setWidget:(NNWidget *)someWidget atIndexedSubscript:(NSUInteger)idx

 @param anWidget The widget with which to replace the widget at index index in the array. This value must not be nil.

 @see NSMutableArray#setObject:atIndexedSubscript:
 @see insertWidget:atIndex:
 @see removeWidgetAtIndex:
 @see removeWidgetsAtIndexes:
 @see replaceWidgetAtIndex:withWidget:
 @see replaceWidgetsAtIndexes:withWidgets:
 */
- (void)setWidget:(NNWidget *)someWidget atIndexedSubscript:(NSUInteger)idx;

@end
