/**
 */
@interface NNMutable##_Uname_##Array (NNExtendedMutable##_Uname_##Array)

/**
 Adds the _lname_##_pluralSuffix_ contained in another given array to the end of the receiving array’s content.

     - (void)add##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray

 @param otherArray An array of _lname_##_pluralSuffix_ to add to the end of the receiving array’s content.

 @see NSMutableArray#addObjectsFromArray:
 */
- (void)add##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;

/**
 Exchanges the _lname_##_pluralSuffix_ in the array at given indices.

     - (void)exchange##_Uname_##AtIndex:(NSUInteger)idx1 with##_Uname_##AtIndex:(NSUInteger)idx2

 @param idx1 The index of the _lname_ with which to replace the _lname_ at index idx2.
 @param idx2 The index of the _lname_ with which to replace the _lname_ at index idx1.

 @see NSMutableArray#exchangeObjectAtIndex:withObjectAtIndex:
 */
- (void)exchange##_Uname_##AtIndex:(NSUInteger)idx1 with##_Uname_##AtIndex:(NSUInteger)idx2;

/**
 Empties the array.

     - (void)removeAll##_Uname_##_pluralSuffix_

 @see NSMutableArray#removeAllObjects
 */
- (void)removeAll##_Uname_##_pluralSuffix_;

/**
 Removes all occurrences within a specified range in the array of a given _lname_.

     - (void)remove##_Uname_:(_class_ *)some##_Uname_## inRange:(NSRange)range

 @param some##_Uname_ The _lname_ to remove from the array's content.
 @param aRange The range from which to remove some##_Uname_.

 @par Important
 Raises an NSRangeException if aRange exceeds the bounds of the array.

 @see NSMutableArray#removeObject:inRange:
 @see removeAll##_Uname_##_pluralSuffix_
 @see removeLast##_Uname_
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_##IdenticalTo:
 @see remove##_Uname_##_pluralSuffix_##InArray:
 */
- (void)remove##_Uname_:(_class_ *)some##_Uname_ inRange:(NSRange)range;

/**
 Removes all occurrences in the array of a given _lname_.

     - (void)remove##_Uname_:(_class_ *)some##_Uname_

 @param some##_Uname_ The _lname_ to remove from the array.

 @see NSMutableArray#removeObject:
 @see removeAll##_Uname_##_pluralSuffix_
 @see removeLast##_Uname_
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_##IdenticalTo:
 @see remove##_Uname_##_pluralSuffix_##InArray:
 */
- (void)remove##_Uname_:(_class_ *)some##_Uname_;

/**
 Removes all occurrences of some##_Uname_ within the specified range in the array.

     - (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_## inRange:(NSRange)range

 @param some##_Uname_ The _lname_ to remove from the array within aRange.
 @param aRange The range in the array from which to remove some##_Uname_.

 @see NSMutableArray#removeObjectIdenticalTo:inRange:
 @see removeAll##_Uname_##_pluralSuffix_
 @see removeLast##_Uname_
 @see remove##_Uname_:
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_##_pluralSuffix_##AtIndexes:
*/
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_ inRange:(NSRange)range;

/**
 Removes all occurrences of a given _lname_ in the array.

     - (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_

 @param some##_Uname_ The _lname_ to remove from the array.

 @see NSMutableArray#removeObjectIdenticalTo:
 @see removeAll##_Uname_##_pluralSuffix_
 @see removeLast##_Uname_
 @see remove##_Uname_:
 @see remove##_Uname_##AtIndex:
 */
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;

/**
 Removes from the receiving array the _lname_##_pluralSuffix_ in another given array.

     - (void)remove##_Uname_##_pluralSuffix_##InArray:(NSArray *)otherArray

 @param otherArray An array containing the _lname_##_pluralSuffix_ to be removed from the receiving array.

 @see NSMutableArray#removeObjectsInArray:
 @see removeAll##_Uname_##_pluralSuffix_
 @see remove##_Uname_##IdenticalTo:
 @see remove##_Uname_##_pluralSuffix_##AtIndexes:
 */
- (void)remove##_Uname_##_pluralSuffix_##InArray:(NSArray *)otherArray;

/**
    Removes from the array each of the _lname_##_pluralSuffix_ within a given range.

     - (void)remove##_Uname_##_pluralSuffix_##InRange:(NSRange)range

 @param aRange The range of the _lname_##_pluralSuffix_ to remove from the array.

 @see NSMutableArray#removeObjectsInRange:
 */
- (void)remove##_Uname_##_pluralSuffix_##InRange:(NSRange)range;

/**
 Replaces the _lname_##_pluralSuffix_ in the receiving array specified by one given range with the _lname_##_pluralSuffix_ in another array specified by another range.

     - (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray range:(NSRange)otherRange

 @param aRange The range of _lname_##_pluralSuffix_ to replace in (or remove from) the receiving array.
 @param otherArray The array of _lname_##_pluralSuffix_ from which to select replacements for the _lname_##_pluralSuffix_ in aRange.
 @param otherRange The range of _lname_##_pluralSuffix_ to select from otherArray as replacements for the _lname_##_pluralSuffix_ in aRange.

 @see NSMutableArray#replace##_Uname_##_pluralSuffix_##InRange:with##_Uname_##_pluralSuffix_##FromArray:range:
 @see insert##_Uname_:atIndex:
 @see remove##_Uname_##AtIndex:
 @see replace##_Uname_##AtIndex:with##_Uname_:
 @see replace##_Uname_##_pluralSuffix_##AtIndexes:with##_Uname_##_pluralSuffix_:
 */
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray range:(NSRange)otherRange;

/**
 Replaces the _lname_##_pluralSuffix_ in the receiving array specified by a given range with all of the _lname_##_pluralSuffix_ from a given array.

     - (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray

 @param aRange The range of _lname_##_pluralSuffix_ to replace in (or remove from) the receiving array.
 @param otherArray The array of _lname_##_pluralSuffix_ from which to select replacements for the _lname_##_pluralSuffix_ in aRange.

 @see NSMutableArray#replaceObjectsInRange:withObjectsFromArray:
 @see insert##_Uname_:atIndex:
 @see remove##_Uname_##AtIndex:
 @see replace##_Uname_##AtIndex:with##_Uname_:
 @see replace##_Uname_##_pluralSuffix_##AtIndexes:with##_Uname_##_pluralSuffix_: */
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;

/**
 Sorts the array’s _lname_##_pluralSuffix_ in ascending order as defined by the comparison function compare.

     - (void)sortUsing##_Uname_##Function:(NSInteger (*)(_class_ *, _class_ *, void *))compare context:(void *)context

 @param compare The comparison function to use to compare two _lname_##_pluralSuffix_ at a time.
 The function's parameters are two _lname_##_pluralSuffix_ to compare and the context parameter, context. The function should return NSOrderedAscending if the first _lname_ is smaller than the second, NSOrderedDescending if the first _lname_ is larger than the second, and NSOrderedSame if the _lname_##_pluralSuffix_ are equal.
 @param context The context argument to pass to the compare function.

 @see NSMutableArray#sortUsingFunction:context:
 */
- (void)sortUsing##_Uname_##Function:(NSInteger (*)(_class_ *, _class_ *, void *))compare context:(void *)context;

/**
 Inserts the _lname_##_pluralSuffix_ in the provided array into the receiving array at the specified indexes.

     - (void)insert##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_## atIndexes:(NSIndexSet *)indexes

 @param _lname_##_pluralSuffix_ An array of _lname_##_pluralSuffix_ to insert into the receiving array.
 @param indexes The indexes at which the _lname_##_pluralSuffix_ in _lname_##_pluralSuffix_ should be inserted. The count of locations in indexes must equal the count of _lname_##_pluralSuffix_. For more details, see NSMutableArray#insertObjects:atIndexes:

 @see NSMutableArray#insertObjects:atIndexes:
 @see insert##_Uname_:atIndex:
 */
- (void)insert##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_ atIndexes:(NSIndexSet *)indexes;

/**
 Removes the _lname_##_pluralSuffix_ at the specified indexes from the array.

     - (void)remove##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes

 @param indexes The indexes of the _lname_##_pluralSuffix_ to remove from the array. The locations specified by indexes must lie within the bounds of the array.

 @see NSMutableArray#removeObjectsAtIndexes:
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_:inRange:
 */
- (void)remove##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;

/**
 Replaces the _lname_##_pluralSuffix_ in the receiving array at specified locations specified with the _lname_##_pluralSuffix_ from a given array.

     - (void)replace##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes with##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_

 @param indexes The indexes of the _lname_##_pluralSuffix_ to be replaced.
 @param _lname_##_pluralSuffix_ The _lname_##_pluralSuffix_ with which to replace the _lname_##_pluralSuffix_ in the receiving array at the indexes specified by indexes. The count of locations in indexes must equal the count of _lname_##_pluralSuffix_.

 @see NSMutableArray#replaceObjectsAtIndexes:withObjects:
 @see insert##_Uname_:atIndex:
 @see remove##_Uname_##AtIndex:
 @see replace##_Uname_##AtIndex:with##_Uname_:
 */
- (void)replace##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes with##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_;

/**
 Replaces the _lname_ at the index with the new _lname_, possibly adding the _lname_.

     - (void)set##_Uname_:(_class_ *)some##_Uname_ atIndexedSubscript:(NSUInteger)idx

 @param an##_Uname_## The _lname_ with which to replace the _lname_ at index index in the array. This value must not be nil.

 @see NSMutableArray#setObject:atIndexedSubscript:
 @see insert##_Uname_:atIndex:
 @see remove##_Uname_##AtIndex:
 @see remove##_Uname_##_pluralSuffix_##AtIndexes:
 @see replace##_Uname_##AtIndex:with##_Uname_:
 @see replace##_Uname_##_pluralSuffix_##AtIndexes:with##_Uname_##_pluralSuffix_:
 */
- (void)set##_Uname_:(_class_ *)some##_Uname_ atIndexedSubscript:(NSUInteger)idx;

@end
