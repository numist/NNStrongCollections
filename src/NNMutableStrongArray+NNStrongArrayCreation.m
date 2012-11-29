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

@implementation NNMutable##_Uname_##Array (NN##_Uname_##ArrayCreation)

// Static creation

+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_;
{
    return [[[self alloc] initWithArray:@[some##_Uname_]] _AUTORELEASE_];
}

+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ const * [])_lname_##_pluralSuffix_ count:(NSUInteger)cnt;
{
    return [[[self alloc] initWith##_Uname_##_pluralSuffix_:_lname_##_pluralSuffix_ count:cnt] _AUTORELEASE_];
}

+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ...;
{
    va_list args;
    va_start(args, firstObj);
    NNMutable##_Uname_##Array * result = [[[self alloc] initWith##_Uname_##_pluralSuffix_:firstObj, args] _AUTORELEASE_];
    va_end(args);

    return result;
}

+ (NNMutable##_Uname_##Array *)strongArrayWithArray:(NSArray *)array;
{
    return [[[self alloc] initWithArray:array] _AUTORELEASE_];
}

+ (id)arrayWithContentsOfFile:(NSString *)path;
{
    return [[[self alloc] initWithContentsOfFile:path] _AUTORELEASE_];
}

+ (id)arrayWithContentsOfURL:(NSURL *)url;
{
    return [[[self alloc] initWithContentsOfURL:url] _AUTORELEASE_];
}

// Custom initialization

- (id)initWith##_Uname_##_pluralSuffix_:(_class_ const * [])_lname_##_pluralSuffix_ count:(NSUInteger)cnt;
{
    return [self initWithObjects:_lname_##_pluralSuffix_ count:cnt];
}

- (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ...;
{
    va_list args;
    va_start(args, firstObj);
    id result = [self initWithObjects:firstObj, args];
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

    [self nnCheckCollection:array];
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithArray:array];

    return self;
}

- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;
{
    self = [super init];
    if (!self) return nil;

    [self nnCheckCollection:array];
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithArray:array copyItems:flag];

    return self;
}

- (id)initWithObjects:(id)firstObj, ...;
{
    self = [super init];
    if (!self) return nil;

    va_list args;
    va_start(args, firstObj);
    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithObjects:firstObj, args];
    va_end(args);
    [self nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithObjects:(const id[])objects count:(NSUInteger)count;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithObjects:objects count:count];
    [self nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithContentsOfFile:(NSString *)path;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithContentsOfFile:path];
    [self nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

- (id)initWithContentsOfURL:(NSURL *)url;
{
    self = [super init];
    if (!self) return nil;

    self->_secretInternalMutableArray = [[NSMutableArray alloc] initWithContentsOfURL:url];
    [self nnCheckCollection:self->_secretInternalMutableArray];

    return self;
}

// TODO: only emit this for manual memory management situations
// - (void)dealloc;
// {
//     [self->_secretInternalMutableArray _AUTORELEASE_];
//     [super dealloc];
// }

@end
