//
//  Created by Scott Perry on 11/01/12.
//  Copyright © 2012 Scott Perry (http://numist.net)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

@implementation NNWidgetArray (NNExtendedWidgetArray)

- (NNWidgetArray *)strongArrayByAddingWidget:(NSWidget *)someWidget;
{
    NSMutableArray *array = [NSMutableArray arrayWithArray:self->_secretInternalArray];
    [array addObject:someWidget];
    return [[self class] strongArrayWithArray:array];
}

- (NNWidgetArray *)strongArrayByAddingWidgetsFromArray:(NSArray *)otherArray;
{
    NSMutableArray *array = [NSMutableArray arrayWithArray:self->_secretInternalArray];
    [array addObjectsFromArray:otherArray];
    return [[self class] strongArrayWithArray:array];
}

- (BOOL)containsWidget:(NSWidget *)someWidget;
{
    return [self containsObject:someWidget];
}

- (NSWidget *)firstWidgetCommonWithArray:(NSArray *)otherArray;
{
    return (NSWidget *)[self firstObjectCommonWithArray:otherArray];
}

- (void)getWidgets:(id __unsafe_unretained [])widgets range:(NSRange)range;
{
    [self getObjects:widgets range:range];
}

- (NSUInteger)indexOfWidget:(NSWidget *)someWidget;
{
    return [self indexOfObject:someWidget];
}

- (NSUInteger)indexOfWidget:(NSWidget *)someWidget inRange:(NSRange)range;
{
    return [self indexOfObject:someWidget inRange:range];
}

- (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget;
{
    return [self indexOfObjectIdenticalTo:someWidget];
}

- (NSUInteger)indexOfWidgetIdenticalTo:(NSWidget *)someWidget inRange:(NSRange)range;
{
    return [self indexOfObjectIdenticalTo:someWidget inRange:range];
}

- (NSWidget *)lastWidget;
{
    return (NSWidget *)[self lastObject];
}

- (NSEnumerator *)widgetEnumerator;
{
    return [self objectEnumerator];
}

- (NSEnumerator *)reverseWidgetEnumerator;
{
    return [self reverseObjectEnumerator];
}

- (void)makeWidgetsPerformSelector:(SEL)aSelector;
{
    [self makeObjectsPerformSelector:aSelector];
}

- (void)makeWidgetsPerformSelector:(SEL)aSelector withObject:(id)argument;
{
    [self makeObjectsPerformSelector:aSelector withObject:argument];
}

- (NNWidgetArray *)widgetsAtIndexes:(NSIndexSet *)indexes;
{
    return [[self class] strongArrayWithArray:[[self class] objectsAtIndexes:indexes]];
}

- (NSWidget *)widgetAtIndexedSubscript:(NSUInteger)idx;
{
    return (NSWidget *)[self objectAtIndexedSubscript:idx];
}

- (void)enumerateWidgetsUsingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsUsingBlock:block];
}

- (void)enumerateWidgetsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsWithOptions:opts usingBlock:block];
}

- (void)enumerateWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsAtIndexes:s options:opts usingBlock:block];
}

- (NSUInteger)indexOfWidgetPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectPassingTest:predicate];
}

- (NSUInteger)indexOfWidgetWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectWithOptions:opts passingTest:predicate];
}

- (NSUInteger)indexOfWidgetAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectAtIndexes:s options:opts passingTest:predicate];
}

- (NSIndexSet *)indexesOfWidgetsPassingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsPassingTest:predicate];
}

- (NSIndexSet *)indexesOfWidgetsWithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsWithOptions:opts passingTest:predicate];
}

- (NSIndexSet *)indexesOfWidgetsAtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(NSWidget * someWidget, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsAtIndexes:s options:opts passingTest:predicate];
}

- (NSUInteger)indexOfWidget:(NSWidget *)someWidget inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;
{
    return [self indexOfObject:someWidget inSortedRange:r options:opts usingComparator:cmp];
}

@end
