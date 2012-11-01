@interface NN##_Uname_##Array : NSArray

/**
 Returns the _lname_ located at index.

 @param index An index within the bounds of the array.
 @return The _lname_ located at index.
 @discussion If index is beyond the end of the array (that is, if index is greater than or equal to the value returned by count), an NSRangeException is raised.
 */
- (_class_ *)_lname_##AtIndex:(NSUInteger)index;

@end
