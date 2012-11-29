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

@interface NNMutable##_Uname_##Array () {
    NSMutableArray *_secretInternalMutableArray;
}

- (void)nnCheckObject:(id)obj;
- (void)nnCheckCollection:(id<NSFastEnumeration>)collection;

@end

@implementation NNMutable##_Uname_##Array

- (void)add##_Uname_:(_class_ *)some##_Uname_;
{
    [self addObject:some##_Uname_];
}

- (void)insert##_Uname_:(_class_ *)some##_Uname_ atIndex:(NSUInteger)index;
{
    [self insertObject:some##_Uname_ atIndex:index];
}

- (void)removeLast##_Uname_;
{
    [self removeLastObject];
}

- (void)remove##_Uname_##AtIndex:(NSUInteger)index;
{
    [self removeObjectAtIndex:index];
}

- (void)replace##_Uname_##AtIndex:(NSUInteger)index with##_Uname_:(_class_ *)some##_Uname_;
{
    [self replaceObjectAtIndex:index withObject:some##_Uname_];
}

- (void)nnCheckObject:(id)obj;
{
    if (![obj isKindOfClass:[_class_ class]]) {
        @throw [NSException exceptionWithName:@"NNMutable##_Uname_##ArrayInvalidTypeException"
                                       reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of _class_", NSStringFromSelector(_cmd)]
                                     userInfo:nil];
    }
}

- (void)nnCheckCollection:(id<NSFastEnumeration>)collection;
{
    for (id obj in collection) {
        [self nnCheckObject:obj];
    }
}

@end
