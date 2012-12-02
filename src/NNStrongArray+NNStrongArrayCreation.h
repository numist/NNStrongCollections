/**
The NNMutableWidgetArray class declares the programmatic interface to objects that manage a modifiable array of widgets. This class adds insertion and deletion operations to the basic array-handling behavior inherited from NNWidgetArray.
 */
@class NNMutableWidgetArray;

@interface NNWidgetArray (NNWidgetArrayCreation)

/**
 Creates and returns an array containing a given widget.

     + (NNWidgetArray *)strongArrayWithWidget:(NNWidget *)someWidget

 @param someWidget An widget.

 @return An array containing the single element someWidget.

 @see NSArray#arrayWithObject:
 @see strongArrayWithWidgets:
 */
+ (NNWidgetArray *)strongArrayWithWidget:(NNWidget *)someWidget;

/**
 Creates and returns an array that includes a given number of widgets from a given C array.

     + (NNWidgetArray *)strongArrayWithWidgets:(const id [])widgets count:(NSUInteger)cnt

 @param widgets A C array of widgets.
 @param count The number of values from the widgets C array to include in the new array. This number will be the count of the new array—it must not be negative or greater than the number of elements in widgets.

 @return A new array including the first count widgets from widgets.

 @see NSArray#arrayWithObjects:count:
 @see getWidgets:range:
 */
+ (NNWidgetArray *)strongArrayWithWidgets:(NNWidget const * [])widgets count:(NSUInteger)cnt;

/**
 Creates and returns an array containing the widgets in the argument list.

     + (NNWidgetArray *)strongArrayWithWidgets:(NNWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of widgets ending with nil.

 @return An array containing the widgets in the argument list.

 @see NSArray#arrayWithObjects:
 @see arrayWithWidget:
 */
+ (NNWidgetArray *)strongArrayWithWidgets:(NNWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

/**
 Creates and returns an array containing the widgets in another given array.

     + (NNWidgetArray *)strongArrayWithArray:(NSArray *)array

 @param anArray An array.

 @return An array containing the widgets in anArray.

 @see NSArray#arrayWithArray:
 @see arrayWithWidgets:
 @see initWithWidgets:
 */
+ (NNWidgetArray *)strongArrayWithArray:(NSArray *)array;

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
- (id)initWithWidgets:(NNWidget const * [])widgets count:(NSUInteger)cnt;

/**
 Initializes a newly allocated array by placing in it the widgets in the argument list.

     - (id)initWithWidgets:(NNWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of widgets ending with nil.

 @return An array initialized to include the widgets in the argument list. The returned widget might be different than the original receiver.

 @see NSArray#initWithObjects:
 @see initWithWidgets:count:
 @see strongArrayWithWidgets:
 */
- (id)initWithWidgets:(NNWidget *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

/**
 Instead, try using:
 @code
 [NNWidgetArray strongArrayWithArray:[NSArray arrayWithContentsOfFile:path]]
 @endcode
 @deprecated
 */
+ (id)arrayWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));

/**
 Instead, try using:
 @code
 [NNWidgetArray strongArrayWithArray:[NSArray arrayWithContentsOfURL:url]]
 @endcode
 @deprecated
 */
+ (id)arrayWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));

/**
 @deprecated
 */
- (id)initWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));

/**
 @deprecated
 */
- (id)initWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));

@end
