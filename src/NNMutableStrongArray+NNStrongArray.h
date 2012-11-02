@interface NNMutable##_Uname_##Array (NN##_Uname_##Array)

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
