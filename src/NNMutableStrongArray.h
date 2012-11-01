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

@interface NNMutable##_Uname_##Array : NSMutableArray
- (void)add##_Uname_:(_class_ *)some##_Uname_;
- (void)insert##_Uname_:(_class_ *)some##_Uname_## atIndex:(NSUInteger)index;
- (void)removeLast##_Uname_;
- (void)remove##_Uname_##AtIndex:(NSUInteger)index;
- (void)replace##_Uname_##AtIndex:(NSUInteger)index with##_Uname_:(_class_ *)some##_Uname_;
@end

@interface NNMutable##_Uname_##Array (NNMutable##_Uname_##Array)
- (void)add##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
- (void)exchange##_Uname_##AtIndex:(NSUInteger)idx1 with##_Uname_##AtIndex:(NSUInteger)idx2;
- (void)removeAll##_Uname_##_pluralSuffix_;
- (void)remove##_Uname_:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (void)remove##_Uname_:(_class_ *)some##_Uname_;
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (void)remove##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;
- (void)remove##_Uname_##_pluralSuffix_##FromIndices:(NSUInteger *)indices numIndices:(NSUInteger)cnt NS_DEPRECATED(10_0, 10_6, 2_0, 4_0);
- (void)remove##_Uname_##_pluralSuffix_##InArray:(NSArray *)otherArray;
- (void)remove##_Uname_##_pluralSuffix_##InRange:(NSRange)range;
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray range:(NSRange)otherRange;
- (void)replace##_Uname_##_pluralSuffix_##InRange:(NSRange)range with##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
- (void)setArray:(NSArray *)otherArray;
- (void)sortUsing##_Uname_##Function:(NSInteger (*)(_class_ *, _class_ *, void *))compare context:(void *)context;
- (void)insert##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_## atIndexes:(NSIndexSet *)indexes;
- (void)remove##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;
- (void)replace##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes with##_Uname_##_pluralSuffix_:(NSArray *)_lname_##_pluralSuffix_;
- (void)set##_Uname_:(_class_ *)obj atIndexedSubscript:(NSUInteger)idx NS_AVAILABLE(10_8, 6_0);
@end

@interface NNMutable##_Uname_##Array (NN##_Uname_##Array)
- (_class_ *)_lname_##AtIndex:(NSUInteger)index;
@end

@interface NNMutable##_Uname_##Array (NN##_Uname_##ExtendedArray)
- (NNMutable##_Uname_##Array *)strongArrayByAdding##_Uname_:(_class_ *)some##_Uname_;
- (NNMutable##_Uname_##Array *)strongArrayByAdding##_Uname_##_pluralSuffix_##FromArray:(NSArray *)otherArray;
- (BOOL)contains##_Uname_:(_class_ *)some##_Uname_;
- (_class_ *)first##_Uname_##CommonWithArray:(NSArray *)otherArray;
- (void)get##_Uname_##_pluralSuffix_:(id __unsafe_unretained [])_lname_##_pluralSuffix_## range:(NSRange)range;
- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_;
- (NSUInteger)indexOf##_Uname_:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_;
- (NSUInteger)indexOf##_Uname_##IdenticalTo:(_class_ *)some##_Uname_## inRange:(NSRange)range;
- (_class_ *)last##_Uname_;
- (NSEnumerator *)_lname_##Enumerator;
- (NSEnumerator *)reverse##_Uname_##Enumerator;
- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector;
- (void)make##_Uname_##_pluralSuffix_##PerformSelector:(SEL)aSelector with##_Uname_:(_class_ *)argument;
- (NNMutable##_Uname_##Array *)_lname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)indexes;
- (_class_ *)_lname_##AtIndexedSubscript:(NSUInteger)idx NS_AVAILABLE(10_8, 6_0);
- (void)enumerate##_Uname_##_pluralSuffix_##UsingBlock:(void (^)(id obj, NSUInteger idx, BOOL *stop))block NS_AVAILABLE(10_6, 4_0);
- (void)enumerate##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj, NSUInteger idx, BOOL *stop))block NS_AVAILABLE(10_6, 4_0);
- (void)enumerate##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts usingBlock:(void (^)(id obj, NSUInteger idx, BOOL *stop))block NS_AVAILABLE(10_6, 4_0);
- (NSUInteger)indexOf##_Uname_##PassingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSUInteger)indexOf##_Uname_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSUInteger)indexOf##_Uname_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##PassingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##WithOptions:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSIndexSet *)indexesOf##_Uname_##_pluralSuffix_##AtIndexes:(NSIndexSet *)s options:(NSEnumerationOptions)opts passingTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))predicate NS_AVAILABLE(10_6, 4_0);
- (NSUInteger)indexOf##_Uname_:(_class_ *)obj inSortedRange:(NSRange)r options:(NSBinarySearchingOptions)opts usingComparator:(NSComparator)cmp NS_AVAILABLE(10_6, 4_0);
@end

@interface NNMutable##_Uname_##Array (NN##_Uname_##ArrayCreation)
+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_:(_class_ *)some##_Uname_;
+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
+ (NNMutable##_Uname_##Array *)strongArrayWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
+ (NNMutable##_Uname_##Array *)strongArrayWithArray:(NSArray *)array;
- (NNMutable##_Uname_##Array *)strongMutableCopy;
- (id)initWith##_Uname_##_pluralSuffix_:(const id [])_lname_##_pluralSuffix_## count:(NSUInteger)cnt;
- (id)initWith##_Uname_##_pluralSuffix_:(_class_ *)firstObj, ... NS_REQUIRES_NIL_TERMINATION;
- (id)initWithArray:(NSArray *)array;
- (id)initWithArray:(NSArray *)array copyItems:(BOOL)flag;

+ (id)arrayWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
+ (id)arrayWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
- (id)initWithContentsOfFile:(NSString *)path __attribute__ ((deprecated));
- (id)initWithContentsOfURL:(NSURL *)url __attribute__ ((deprecated));
@end

@interface NNMutable##_Uname_##Array (NN##_Uname_##ArrayDebugging)
- (void)verify##_Uname_##_pluralSuffix_;
@end
