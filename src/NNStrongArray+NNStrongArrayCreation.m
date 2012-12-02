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

@implementation NNWidgetArray (NNWidgetArrayCreation)

// Static creation

+ (NNWidgetArray *)strongArrayWithWidget:(NSWidget *)someWidget;
{
    return [[self alloc] initWithArray:@[someWidget]];
}

+ (NNWidgetArray *)strongArrayWithWidgets:(NSWidget const * [])widgets count:(NSUInteger)cnt;
{
    return [[self alloc] initWithWidgets:widgets count:cnt];
}

+ (NNWidgetArray *)strongArrayWithWidgets:(NSWidget *)firstObj, ...;
{
    NSMutableArray *array = [NSMutableArray array];
    id arg = firstObj;
    
    va_list argp;
    va_start(argp, firstObj);
    
    do {
        [array addObject:arg];
    } while ((arg = va_arg(argp, id)));
    
    va_end(argp);
    
    return [[self alloc] initWithArray:array];
}

+ (NNWidgetArray *)strongArrayWithArray:(NSArray *)array;
{
    return [[self alloc] initWithArray:array];
}

+ (id)arrayWithContentsOfFile:(NSString *)path;
{
    return [[self alloc] initWithContentsOfFile:path];
}

+ (id)arrayWithContentsOfURL:(NSURL *)url;
{
    return [[self alloc] initWithContentsOfURL:url];
}

// Custom initialization

- (id)initWithWidgets:(NSWidget const * [])widgets count:(NSUInteger)cnt;
{
    return [self initWithObjects:widgets count:cnt];
}

- (id)initWithWidgets:(NSWidget *)firstObj, ...;
{
    self = [super init];
    if (!self) return nil;
    
    NSMutableArray *array = [[NSMutableArray alloc] init];
    id arg = firstObj;
    
    va_list argp;
    va_start(argp, firstObj);
    
    do {
        [array addObject:arg];
    } while ((arg = va_arg(argp, id)));
    
    va_end(argp);
    
    self->_secretInternalArray = array;
    [[self class] nnCheckCollection:self->_secretInternalArray];
    
    return self;}

// Initializer overrides

- (id)init;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalArray = [[NSArray alloc] init];

    return self;
}

- (id)initWithArray:(NSArray *)array;
{
    self = [super init];
    if (!self) return nil;

    [[self class] nnCheckCollection:array];
    self->_secretInternalArray = [[NSArray alloc] initWithArray:array];

    return self;
}

- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;
{
    self = [super init];
    if (!self) return nil;

    [[self class] nnCheckCollection:array];
    self->_secretInternalArray = [[NSArray alloc] initWithArray:array copyItems:flag];

    return self;
}


- (id)initWithObjects:(id)firstObj, ...;
{
    self = [super init];
    if (!self) return nil;
    
    NSMutableArray *array = [[NSMutableArray alloc] init];
    id arg = firstObj;
    
    va_list argp;
    va_start(argp, firstObj);
    
    do {
        [array addObject:arg];
    } while ((arg = va_arg(argp, id)));
    
    va_end(argp);
    
    self->_secretInternalArray = array;
    [[self class] nnCheckCollection:self->_secretInternalArray];
    
    return self;
}

- (id)initWithObjects:(const id[])objects count:(NSUInteger)count;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalArray = [[NSArray alloc] initWithObjects:objects count:count];
    [[self class] nnCheckCollection:self->_secretInternalArray];

    return self;
}

@end
