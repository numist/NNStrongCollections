@interface NNMutableWidgetArray (NNWidgetArray)

/**
 Returns the widget located at index.

     - (NSWidget *)widgetAtIndex:(NSUInteger)index

 @param index An index within the bounds of the array.
 @return The widget located at index.
 @remarks If index is beyond the end of the array (that is, if index is greater than or equal to the value returned by count), an NSRangeException is raised.
 @see NSArray#objectAtIndex:
 @see widgetsAtIndexes:
 @see widgetAtIndexedSubscript:
 */
- (NSWidget *)widgetAtIndex:(NSUInteger)index;

@end
