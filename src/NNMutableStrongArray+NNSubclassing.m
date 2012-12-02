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

// Any subclass of NSArray must override the primitive instance methods count and objectAtIndex:
@implementation NNMutableWidgetArray (NNSubclassing)

// NSArray required overloads
- (NSUInteger)count;
{
    return [self->_secretInternalMutableArray count];
}

- (id)objectAtIndex:(NSUInteger)index;
{
    return [self->_secretInternalMutableArray objectAtIndex:index];
}

// NSMutableArray required overloads
- (void)insertObject:(id)anObject atIndex:(NSUInteger)index;
{
    [[self class] nnCheckObject:anObject];

    [self->_secretInternalMutableArray insertObject:anObject atIndex:index];
}

- (void)removeObjectAtIndex:(NSUInteger)index;
{
    [self->_secretInternalMutableArray removeObjectAtIndex:index];
}

- (void)addObject:(id)anObject;
{
    [[self class] nnCheckObject:anObject];

    [self->_secretInternalMutableArray addObject:anObject];
}

- (void)removeLastObject;
{
    [self->_secretInternalMutableArray removeLastObject];
}

- (void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
{
    [[self class] nnCheckObject:anObject];

    [self->_secretInternalMutableArray replaceObjectAtIndex:index withObject:anObject];
}

@end
