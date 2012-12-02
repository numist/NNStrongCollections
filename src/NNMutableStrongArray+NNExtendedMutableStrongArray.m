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

@implementation NNMutableWidgetArray (NNExtendedMutableWidgetArray)

- (void)addWidgetsFromArray:(NSArray *)otherArray;
{
    [self addObjectsFromArray:otherArray];
}

- (void)exchangeWidgetAtIndex:(NSUInteger)idx1 withWidgetAtIndex:(NSUInteger)idx2;
{
    [self exchangeObjectAtIndex:idx1 withObjectAtIndex:idx2];
}

- (void)removeAllWidgets;
{
    [self removeAllObjects];
}

- (void)removeWidget:(NNWidget *)someWidget inRange:(NSRange)range;
{
    [self removeObject:someWidget inRange:range];
}

- (void)removeWidget:(NNWidget *)someWidget;
{
    [self removeObject:someWidget];
}

- (void)removeWidgetIdenticalTo:(NNWidget *)someWidget inRange:(NSRange)range;
{
    [self removeObjectIdenticalTo:someWidget inRange:range];
}

- (void)removeWidgetIdenticalTo:(NNWidget *)someWidget;
{
    [self removeObjectIdenticalTo:someWidget];
}

- (void)removeWidgetsInArray:(NSArray *)otherArray;
{
    [self removeObjectsInArray:otherArray];
}

- (void)removeWidgetsInRange:(NSRange)range;
{
    [self removeObjectsInRange:range];
}

- (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray range:(NSRange)otherRange;
{
    [self replaceObjectsInRange:range withObjectsFromArray:otherArray range:otherRange];
}

- (void)replaceWidgetsInRange:(NSRange)range withWidgetsFromArray:(NSArray *)otherArray;
{
    [self replaceObjectsInRange:range withObjectsFromArray:otherArray];
}

- (void)sortUsingWidgetFunction:(NSInteger (*)(NNWidget *, NNWidget *, void *))compare context:(void *)context;
{
    [self sortUsingFunction:(NSInteger (*)(id, id, void *))compare context:context];
}

- (void)insertWidgets:(NSArray *)widgets atIndexes:(NSIndexSet *)indexes;
{
    [self insertObjects:widgets atIndexes:indexes];
}

- (void)removeWidgetsAtIndexes:(NSIndexSet *)indexes;
{
    [self removeObjectsAtIndexes:indexes];
}

- (void)replaceWidgetsAtIndexes:(NSIndexSet *)indexes withWidgets:(NSArray *)widgets;
{
    [self replaceObjectsAtIndexes:indexes withObjects:widgets];
}

- (void)setWidget:(NNWidget *)someWidget atIndexedSubscript:(NSUInteger)idx;
{
    [self setObject:someWidget atIndexedSubscript:idx];
}

@end
