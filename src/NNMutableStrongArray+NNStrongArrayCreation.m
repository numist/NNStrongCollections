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

@implementation NNMutableWidgetArray (NNWidgetArrayCreation)

// Static creation

+ (NNMutableWidgetArray *)strongArrayWithWidget:(NSWidget *)someWidget;
{
    return [[self alloc] initWithArray:@[someWidget]];
}

+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NSWidget const * [])widgets count:(NSUInteger)cnt;
{
    return [[self alloc] initWithWidgets:widgets count:cnt];
}

+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NSWidget *)firstObj, ...;
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

+ (NNMutableWidgetArray *)strongArrayWithArray:(NSArray *)array;
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
    
    self->_secretInternalMutableArray = [[NSMutableArray alloc] init];
    id arg = firstObj;
    
    va_list argp;
    va_start(argp, firstObj);
    
    do {
        [self->_secretInternalMutableArray addObject:arg];
    } while ((arg = va_arg(argp, id)));
    
    va_end(argp);
    
    [[self class] nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

// Initializer overrides

- (id)init;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] init];

    return self;
}

- (id)initWithCapacity:(NSUInteger)numItems;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithCapacity:numItems];

    return self;
}

- (id)initWithArray:(NSArray *)array;
{
    self = [super init];
    if (!self) return nil;

    [[self class] nnCheckCollection:array];
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithArray:array];

    return self;
}

- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;
{
    self = [super init];
    if (!self) return nil;

    [[self class] nnCheckCollection:array];
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithArray:array copyItems:flag];

    return self;
}

- (id)initWithObjects:(id)firstObj, ...;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] init];
    id arg = firstObj;
    
    va_list argp;
    va_start(argp, firstObj);

    do {
        [self->_secretInternalMutableArray addObject:arg];
    } while ((arg = va_arg(argp, id)));
    
    va_end(argp);

    [[self class] nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithObjects:(const id[])objects count:(NSUInteger)count;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithObjects:objects count:count];
    [[self class] nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithContentsOfFile:(NSString *)path;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithContentsOfFile:path];
    [[self class] nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithContentsOfURL:(NSURL *)url;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithContentsOfURL:url];
    [[self class] nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

@end
