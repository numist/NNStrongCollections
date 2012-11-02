/**
The NNMutable##_Uname_##Array class declares the programmatic interface to objects that manage a modifiable array of _lname_##_pluralSuffix_. This class adds insertion and deletion operations to the basic array-handling behavior found in NN##_Uname_##Array.
 */
@interface NNMutable##_Uname_##Array : NSMutableArray

/**
 Inserts a given _lname_ at the end of the array.

     - (void)add##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ The _lname_ to add to the end of the array's content. This value must not be nil.

 @see NSMutableArray#addObject:
 @see add##_Uname_##_pluralSuffix_##FromArray:
 @see remove##_Uname_:
 */
- (void)add##_Uname_:(_class_ *)some##_Uname_;

/**
 Inserts a given _lname_ into the array's contents at a given index.

     - (void)insert##_Uname_:(_class_ *)some##_Uname_## atIndex:(NSUInteger)index

 @param some##_Uname_ The _lname_ to add to the array's content. This value must not be nil.

 @see NSMutableArray#insertObject:atIndex:
 @see remove##_Uname_##AtIndex:
 */
- (void)insert##_Uname_:(_class_ *)some##_Uname_ atIndex:(NSUInteger)index;

/**
 Removes the _lname_ with the highest-valued index in the array

     - (void)removeLast##_Uname_

 @see NSMutableArray#removeLastObject
 #see removeAll##_Uname_##_pluralSuffix_
 #see remove##_Uname_:
 #see remove##_Uname_##AtIndex:
 #see remove##_Uname_##IdenticalTo:
 */
- (void)removeLast##_Uname_;

/**
 Removes the _lname_ at index. 

     - (void)remove##_Uname_##AtIndex:(NSUInteger)index

 @param index The index from which to remove the _lname_ in the array. The value must not exceed the bounds of the array.

 @see NSMutableArray#removeObjectAtIndex:
 @see insert##_Uname_:atIndex:
 @see removeAll##_Uname_##_pluralSuffix_
 @see removeLast##_Uname_
 @see remove##_Uname_:
 @see remove##_Uname_##IdenticalTo:
 @see remove##_Uname_##_pluralSuffix_##AtIndexes:
 */
- (void)remove##_Uname_##AtIndex:(NSUInteger)index;

/**
 Replaces the _lname_ at index with some##_Uname_.

     - (void)replace##_Uname_##AtIndex:(NSUInteger)index with##_Uname_:(_class_ *)some##_Uname_

 @param index The index of the _lname_ to be replaced. This value must not exceed the bounds of the array.
 @param some##_Uname_ The _lname_ with which to replace the _lname_ at index index in the array. This value must not be nil.

 @see NSMutableArray#replaceObjectAtIndex:withObject:
 @see insert##_Uname_:atIndex:
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_##_pluralSuffix_##AtIndexes:
 @see replace##_Uname_##_pluralSuffix_##AtIndexes:with##_Uname_##_pluralSuffix_:
 @see set##_Uname_:atIndexedSubscript:
 */
- (void)replace##_Uname_##AtIndex:(NSUInteger)index with##_Uname_:(_class_ *)some##_Uname_;

@end
