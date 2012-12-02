/**
The NNMutableWidgetArray class declares the programmatic interface to objects that manage a modifiable array of widgets. This class adds insertion and deletion operations to the basic array-handling behavior found in NNWidgetArray.
 */
@interface NNMutableWidgetArray : NSMutableArray

/**
 Inserts a given widget at the end of the array.

     - (void)addWidget:(NSWidget *)someWidget

 @param someWidget The widget to add to the end of the array's content. This value must not be nil.

 @see NSMutableArray#addObject:
 @see addWidgetsFromArray:
 @see removeWidget:
 */
- (void)addWidget:(NSWidget *)someWidget;

/**
 Inserts a given widget into the array's contents at a given index.

     - (void)insertWidget:(NSWidget *)someWidget atIndex:(NSUInteger)index

 @param someWidget The widget to add to the array's content. This value must not be nil.

 @see NSMutableArray#insertObject:atIndex:
 @see removeWidgetAtIndex:
 */
- (void)insertWidget:(NSWidget *)someWidget atIndex:(NSUInteger)index;

/**
 Removes the widget with the highest-valued index in the array

     - (void)removeLastWidget

 @see NSMutableArray#removeLastObject
 #see removeAllWidgets
 #see removeWidget:
 #see removeWidgetAtIndex:
 #see removeWidgetIdenticalTo:
 */
- (void)removeLastWidget;

/**
 Removes the widget at index. 

     - (void)removeWidgetAtIndex:(NSUInteger)index

 @param index The index from which to remove the widget in the array. The value must not exceed the bounds of the array.

 @see NSMutableArray#removeObjectAtIndex:
 @see insertWidget:atIndex:
 @see removeAllWidgets
 @see removeLastWidget
 @see removeWidget:
 @see removeWidgetIdenticalTo:
 @see removeWidgetsAtIndexes:
 */
- (void)removeWidgetAtIndex:(NSUInteger)index;

/**
 Replaces the widget at index with someWidget.

     - (void)replaceWidgetAtIndex:(NSUInteger)index withWidget:(NSWidget *)someWidget

 @param index The index of the widget to be replaced. This value must not exceed the bounds of the array.
 @param someWidget The widget with which to replace the widget at index index in the array. This value must not be nil.

 @see NSMutableArray#replaceObjectAtIndex:withObject:
 @see insertWidget:atIndex:
 @see removeWidgetAtIndex:
 @see removeWidgetsAtIndexes:
 @see replaceWidgetsAtIndexes:withWidgets:
 @see setWidget:atIndexedSubscript:
 */
- (void)replaceWidgetAtIndex:(NSUInteger)index withWidget:(NSWidget *)someWidget;

@end
