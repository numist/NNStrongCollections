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

@implementation NN##_Uname_##Array (NNExtended##_Uname_##Array)

- (NN##_Uname_##Array *)strongArrayByAdding##_Uname_:(_class_ *)some##_Uname_;
{
    // TODO:
    return nil;
}

- (NN##_Uname_##Array *)strongArrayByAdding##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
{
    for (id obj in otherArray) {
        if (![obj isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NN##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }

    // TODO:
    return nil;
}

- (BOOL)contains##_Uname_:(_class_ *)some##_Uname_;
{
    return [self containsObject:some##_Uname_];
}

- (_class_ *)first##_Uname_##CommonWithArray:(NSArray *)otherArray;
{
    return (_class_ *)[self firstObjectCommonWithArray:otherArray];
}

- (void)get##_Uname_##_pluralSuffix_:(id __unsafe_unretained [])_lname_##_pluralSuffix_ range:(NSRange)range;
{
    [self getObjects:_lname_##_pluralSuffix_ range:range];
}

- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_;
{
    return [self indexOfObject:some##_Uname_];
}

- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inRange:(NSRange)range;
{
    return [self indexOfObject:some##_Uname_ inRange:range];
}

- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;
{
    return [self indexOfObjectIdenticalTo:some##_Uname_];
}

- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_ inRange:(NSRange)range;
{
    return [self indexOfObjectIdenticalTo:some##_Uname_ inRange:range];
}

- (_class_ *)last##_Uname_;
{
    return (_class_ *)[self lastObject];
}

- (NSEnumerator *)_lname_##Enumerator;
{
    return [self objectEnumerator];
}

- (NSEnumerator *)reverse##_Uname_##Enumerator;
{
    return [self reverseObjectEnumerator];
}

- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector;
{
    [self makeObjectsPerformSelector:aSelector];
}

- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector withObject:(id)argument;
{
    [self makeObjectsPerformSelector:aSelector withObject:argument];
}

- (NN##_Uname_##Array *)_lname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;
{
    // TODO:
    return nil;
}

- (_class_ *)_lname_##AtIndexedSubscript:(NSUInteger)idx;
{
    return (_class_ *)[self objectAtIndexedSubscript:idx];
}

- (void)enumerate##_Uname_##_pluralSuffix_##UsingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsUsingBlock:block];
}

- (void)enumerate##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsWithOptions:opts usingBlock:block];
}

- (void)enumerate##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))block;
{
    [self enumerateObjectsAtIndexes:s options:opts usingBlock:block];
}

- (NSUInteger)indexOf##_Uname_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectPassingTest:predicate];
}

- (NSUInteger)indexOf##_Uname_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectWithOptions:opts passingTest:predicate];
}

- (NSUInteger)indexOf##_Uname_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexOfObjectAtIndexes:s options:opts passingTest:predicate];
}

- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##PassingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsPassingTest:predicate];
}

- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsWithOptions:opts passingTest:predicate];
}

- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(_class_ * some##_Uname_, NSUInteger idx, BOOL *stop))predicate;
{
    return [self indexesOfObjectsAtIndexes:s options:opts passingTest:predicate];
}

- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_ inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp;
{
    return [self indexOfObject:some##_Uname_ inSortedRange:r options:opts usingComparator:cmp];
}

@end
