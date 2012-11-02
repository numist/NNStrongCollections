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

@implementation NNMutable##_Uname_##Array (NNExtendedMutable##_Uname_##Array)

- (void)add##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
{
    for (id obj in otherArray) {
        if (![obj isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }

    [self addObjectsFromArray:otherArray];
}

- (void)exchange##_Uname_##AtIndex:(NSUInteger)idx1 with##_Uname_##AtIndex:(NSUInteger)idx2;
{
    [self exchangeObjectAtIndex:idx1 withObjectAtIndex:idx2];
}

- (void)removeAll##_Uname_##_pluralSuffix_;
{
    [self removeAllObjects];
}

- (void)remove##_Uname_:(_class_ *)some##_Uname_ inRange:(NSRange)range;
{
    [self removeObject:some##_Uname_ inRange:range];
}

- (void)remove##_Uname_:(_class_ *)some##_Uname_;
{
    [self removeObject:some##_Uname_];
}

- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_ inRange:(NSRange)range;
{
    [self removeObjectIdenticalTo:some##_Uname_ inRange:range];
}

- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;
{
    [self removeObjectIdenticalTo:some##_Uname_];
}

- (void)remove##_Uname_##_pluralSuffix_##InArray:(NSArray *)otherArray;
{
    [self removeObjectsInArray:otherArray];
}

- (void)remove##_Uname_##_pluralSuffix_##InRange:(NSRange)range;
{
    [self removeObjectsInRange:range];
}

- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray range:(NSRange)otherRange;
{
    for (NSUInteger i = otherRange.location; i - otherRange.location < otherRange.length; i++) {
        if (![[otherArray objectAtIndex:i] isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }

    [self replaceObjectsInRange:range withObjectsFromArray:otherArray range:otherRange];
}

- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
{
    for (id obj in otherArray) {
        if (![obj isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }

    [self replaceObjectsInRange:range withObjectsFromArray:otherArray];
}

- (void)sortUsing##_Uname_##Function:(NSInteger (*)(_class_ *, _class_ *, void *))compare context:(void *)context;
{
    [self sortUsingFunction:(NSInteger (*)(id, id, void *))compare context:context];
}

- (void)insert##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_ atIndexes:(NSIndexSet *)indexes;
{
    for (id obj in _lname_##_pluralSuffix_) {
        if (![obj isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }


    [self insertObjects:_lname_##_pluralSuffix_ atIndexes:indexes];
}

- (void)remove##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;
{
    [self removeObjectsAtIndexes:indexes];
}

- (void)replace##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes with##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_;
{
    for (id obj in _lname_##_pluralSuffix_) {
        if (![obj isKindOfClass:[_class_ class]]) {
            @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                           reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                         userInfo:nil];
        }
    }

    [self replaceObjectsAtIndexes:indexes withObjects:_lname_##_pluralSuffix_];
}

- (void)set##_Uname_:(_class_ *)some##_Uname_ atIndexedSubscript:(NSUInteger)idx;
{
    [self setObject:some##_Uname_ atIndexedSubscript:idx];
}

@end
