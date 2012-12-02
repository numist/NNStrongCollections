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

+ (NNMutableWidgetArray *)strongArrayWithWidget:(NNWidget *)someWidget;
{
    return [[[self alloc] initWithArray:@[someWidget]] self];
}

+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NNWidget const * [])widgets count:(NSUInteger)cnt;
{
    return [[[self alloc] initWithWidgets:widgets count:cnt] self];
}

+ (NNMutableWidgetArray *)strongArrayWithWidgets:(NNWidget *)firstObj, ...;
{
    
    va_list args;
    va_start(args, firstObj);
    // TRUST ME, I'M A PROFESSIONAL
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wsentinel"
    NNMutableWidgetArray * result = [[[self alloc] initWithWidgets:firstObj, args] self];
#pragma clang diagnostic pop
    va_end(args);


    return result;
}

+ (NNMutableWidgetArray *)strongArrayWithArray:(NSArray *)array;
{
    return [[[self alloc] initWithArray:array] self];
}

+ (id)arrayWithContentsOfFile:(NSString *)path;
{
    return [[[self alloc] initWithContentsOfFile:path] self];
}

+ (id)arrayWithContentsOfURL:(NSURL *)url;
{
    return [[[self alloc] initWithContentsOfURL:url] self];
}

// Custom initialization

- (id)initWithWidgets:(NNWidget const * [])widgets count:(NSUInteger)cnt;
{
    return [self initWithObjects:widgets count:cnt];
}

- (id)initWithWidgets:(NNWidget *)firstObj, ...;
{
    va_list args;
    va_start(args, firstObj);
    // TRUST ME, I'M A PROFESSIONAL
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wsentinel"
    id result = [self initWithObjects:firstObj, args];
#pragma clang diagnostic pop
    va_end(args);

    return result;
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

    va_list args;
    va_start(args, firstObj);
    // TRUST ME, I'M A PROFESSIONAL
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wsentinel"
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithObjects:firstObj, args];
#pragma clang diagnostic pop
    va_end(args);
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

// TODO: support manual memory management
// - (void)dealloc;
// {
//     [self->_secretInternalMutableArray self];
//     [super dealloc];
// }

@end
