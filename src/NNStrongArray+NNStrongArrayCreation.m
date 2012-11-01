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

@implementation NN##_Uname_##Array (NN##_Uname_##ArrayCreation)

+ (NN##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_;
{

}

+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
{

}

+ (NN##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
{

}

+ (NN##_Uname_##Array *)strongArrayWithArray:(NSArray *)array;
{

}

- (NNMutable##_Uname_##Array *)strongMutableCopy;
{

}

- (id)initWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
{

}

- (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
{

}

- (id)initWithArray:(NSArray *)array;
{

}

- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;
{

}


+ (id)arrayWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
{
    @throw [NSException exceptionWithName:@"NN##_Uname_##ArrayDeprecatedMethodException"
                                   reason:[NSString stringWithFormat:@"Selector %@ is not supported by NN##_Uname_##Arrays", NSStringFromSelector(_cmd)]
                                 userInfo:nil];
}

+ (id)arrayWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
{
    @throw [NSException exceptionWithName:@"NN##_Uname_##ArrayDeprecatedMethodException"
                                   reason:[NSString stringWithFormat:@"Selector %@ is not supported by NN##_Uname_##Arrays", NSStringFromSelector(_cmd)]
                                 userInfo:nil];
}

- (id)initWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
{
    @throw [NSException exceptionWithName:@"NN##_Uname_##ArrayDeprecatedMethodException"
                                   reason:[NSString stringWithFormat:@"Selector %@ is not supported by NN##_Uname_##Arrays", NSStringFromSelector(_cmd)]
                                 userInfo:nil];
}

- (id)initWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
{
    @throw [NSException exceptionWithName:@"NN##_Uname_##ArrayDeprecatedMethodException"
                                   reason:[NSString stringWithFormat:@"Selector %@ is not supported by NN##_Uname_##Arrays", NSStringFromSelector(_cmd)]
                                 userInfo:nil];
}

@end
