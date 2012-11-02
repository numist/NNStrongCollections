/**
The NNMutable##_Uname_##Array class declares the programmatic interface to objects that manage a modifiable array of _lname_##_pluralSuffix_. This class adds insertion and deletion operations to the basic array-handling behavior inherited from NN##_Uname_##Array.
 */
@class NNMutable##_Uname_##Array;

@interface NN##_Uname_##Array (NN##_Uname_##ArrayCreation)

/**
 Creates and returns an array containing a given _lname_.

     + (NN##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ An _lname_.

 @return An array containing the single element some##_Uname_.

 @see NSArray#arrayWithObject:
 @see strongArrayWith##_Uname_##_pluralSuffix_:
 */
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_;

/**
 Creates and returns an array that includes a given number of _lname_##_pluralSuffix_ from a given C array.

     + (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt

 @param _lname_##_pluralSuffix_ A C array of _lname_##_pluralSuffix_.
 @param count The number of values from the _lname_##_pluralSuffix_ C array to include in the new array. This number will be the count of the new array—it must not be negative or greater than the number of elements in _lname_##_pluralSuffix_.

 @return A new array including the first count _lname_##_pluralSuffix_ from _lname_##_pluralSuffix_.

 @see NSArray#arrayWithObjects:count:
 @see get##_Uname_##_pluralSuffix_:range:
 */
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;

/**
 Creates and returns an array containing the _lname_##_pluralSuffix_ in the argument list.

     + (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of _lname_##_pluralSuffix_ ending with nil.

 @return An array containing the _lname_##_pluralSuffix_ in the argument list.

 @see NSArray#arrayWithObjects:
 @see arrayWith##_Uname_:
 */
+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

/**
 Creates and returns an array containing the _lname_##_pluralSuffix_ in another given array.

     + (NN##_Uname_##Array *)strongArrayWithArray:(NSArray *)array

 @param anArray An array.

 @return An array containing the _lname_##_pluralSuffix_ in anArray.

 @see NSArray#arrayWithArray:
 @see arrayWith##_Uname_##_pluralSuffix_:
 @see initWith##_Uname_##_pluralSuffix_##:
 */
+ (NN##_Uname_##Array *)strongArrayWithArray:(NSArray *)array;

/**
 Initializes a newly allocated array to include a given number of _lname_##_pluralSuffix_ from a given C array.

     - (id)initWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt

 @param objects A C array of objects.
 @param count The number of values from the _lname_##_pluralSuffix_ C array to include in the new array. This number will be the count of the new array—it must not be negative or greater than the number of elements in objects.

 @return A newly allocated array including the first count _lname_##_pluralSuffix_ from _lname_##_pluralSuffix_. The returned _lname_ might be different than the original receiver.

 @see NSArray#initWithObjects:count:
 @param initWith##_Uname_##_pluralSuffix_:
 @param strongArrayWith##_Uname_##_pluralSuffix_:
 */
- (id)initWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;

/**
 Initializes a newly allocated array by placing in it the _lname_##_pluralSuffix_ in the argument list.

     - (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION

 @param firstObj, ... A comma-separated list of _lname_##_pluralSuffix_ ending with nil.

 @return An array initialized to include the _lname_##_pluralSuffix_ in the argument list. The returned _lname_ might be different than the original receiver.

 @see NSArray#initWithObjects:
 @see initWith##_Uname_##_pluralSuffix_:count:
 @see strongArrayWith##_Uname_##_pluralSuffix_:
 */
- (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

/**
 Instead, try using:
 @code
 [NN##_Uname_##Array strongArrayWithArray:[NSArray arrayWithContentsOfFile:path]]
 @endcode
 @deprecated
 */
+ (id)arrayWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));

/**
 Instead, try using:
 @code
 [NN##_Uname_##Array strongArrayWithArray:[NSArray arrayWithContentsOfURL:url]]
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
