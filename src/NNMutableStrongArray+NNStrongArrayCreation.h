@interface NNMutableWidgetArray (NNWidgetArrayCreation)

/**
 Creates and returns an array containing a given widget.

     + (NNMutableWidgetArray *)strongArrayWithWidget:(NSWidget *)someWidget

 @param someWidget An widget.

 @return An array containing the single element someWidget.

 @see NSArray#arrayWithObject:
 @see strongArrayWithWidgets:
 */
+ (NNMutableWidgetArray *)strongArrayWithWidget:(NSWidget *)someWidget;

/**
 Creates and returns an array that includes a given number of widgets from a given C array.

     + (NNMutableWidgetArray *)strongArrayWithWidgets:(const id [])widgets count:(NSUInteger)cnt

 @param widgets A C array of widgets.
 @param count The number of values from the widgets C array to include in the new array. This number will be the count of the new array—it must not be negative or greater than the number of elements in widgets.

 @return A new array including the first count widgets from widgets.

 @see NSArray#arrayWithObjects:count:
 @see getWidgets:range:
 */
+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NSWidget const * [])widgets count:(NSUInteger)cnt;

/**
 Creates and returns an array containing the widgets in the argument list.

     + (NNMutableWidgetArray *)strongArrayWithWidgets:(NSWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of widgets ending with nil.

 @return An array containing the widgets in the argument list.

 @see NSArray#arrayWithObjects:
 @see arrayWithWidget:
 */
+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NSWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

/**
 Creates and returns an array containing the widgets in another given array.

     + (NNMutableWidgetArray *)strongArrayWithArray:(NSArray *)array

 @param anArray An array.

 @return An array containing the widgets in anArray.

 @see NSArray#arrayWithArray:
 @see arrayWithWidgets:
 @see initWithWidgets:
 */
+ (NNMutableWidgetArray *)strongArrayWithArray:(NSArray *)array;

/**
 Initializes a newly allocated array to include a given number of widgets from a given C array.

     - (id)initWithWidgets:(const id [])widgets count:(NSUInteger)cnt

 @param objects A C array of objects.
 @param count The number of values from the widgets C array to include in the new array. This number will be the count of the new array—it must not be negative or greater than the number of elements in objects.

 @return A newly allocated array including the first count widgets from widgets. The returned widget might be different than the original receiver.

 @see NSArray#initWithObjects:count:
 @param initWithWidgets:
 @param strongArrayWithWidgets:
 */
- (id)initWithWidgets:(NSWidget const * [])widgets count:(NSUInteger)cnt;

/**
 Initializes a newly allocated array by placing in it the widgets in the argument list.

     - (id)initWithWidgets:(NSWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of widgets ending with nil.

 @return An array initialized to include the widgets in the argument list. The returned widget might be different than the original receiver.

 @see NSArray#initWithObjects:
 @see initWithWidgets:count:
 @see strongArrayWithWidgets:
 */
- (id)initWithWidgets:(NSWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

@end
