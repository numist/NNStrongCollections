/**
 NN##_Uname_##Array and its subclass NNMutable##_Uname_##Array manage ordered collections of _lname_ called arrays. NN##_Uname_##Array creates static arrays, and NNMutable##_Uname_##Array creates dynamic arrays. You can use arrays when you need an ordered collection of _lname_##_pluralSuffix_.
 */
@interface NN##_Uname_##Array : NSArray

/**
 Returns the _lname_ located at index.

     - (_class_ *)_lname_##AtIndex:(NSUInteger)index

 @param index An index within the bounds of the array.
 @return The _lname_ located at index.
 @remarks If index is beyond the end of the array (that is, if index is greater than or equal to the value returned by count), an NSRangeException is raised.
 @see NSArray#objectAtIndex:
 @see _lname_##_pluralSuffix_##AtIndexes:
 @see _lname_##AtIndexedSubscript:
 */
- (_class_ *)_lname_##AtIndex:(NSUInteger)index;

@end
