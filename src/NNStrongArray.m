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

@interface NNWidgetArray () {
    NSArray *_secretInternalArray;
}

+ (void)nnCheckObject:(id)obj;
+ (void)nnCheckCollection:(id<NSFastEnumeration>)collection;

@end

@implementation NNWidgetArray

- (NNWidget *)widgetAtIndex:(NSUInteger)index;
{
    return (NNWidget *)[self objectAtIndex:index];
}

// TODO: Consider making this a static, uniquely-named C function for faster calls
+ (void)nnCheckObject:(id)obj;
{
    if (![obj isKindOfClass:[NNWidget class]]) {
        @throw [NSException exceptionWithName:@"NNMutableWidgetArrayInvalidTypeException"
                                       reason:[NSString stringWithFormat:@"Collection parameter to %@ contained objects that were not instances of NNWidget", NSStringFromSelector(_cmd)]
                                     userInfo:nil];
    }
}

// TODO: Consider making this a static, uniquely-named C function for faster calls
+ (void)nnCheckCollection:(id<NSFastEnumeration>)collection;
{
    for (id obj in collection) {
        [[self class] nnCheckObject:obj];
    }
}

@end
