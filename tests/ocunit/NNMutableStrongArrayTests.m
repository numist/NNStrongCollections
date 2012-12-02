//
//  NNMutableStrongArrayTests.m
//  StrongCollections
//
//  Created by Scott Perry on 12/01/12.
//  Copyright (c) 2012 Scott Perry. All rights reserved.
//

#import "NNMutableStrongArrayTests.h"

#import "NNMutableStrongArrayAggregate.h"

@implementation NNMutableStrongArrayTests

- (void)testStrongArrayWithWidget;
{
    STAssertNotNil([NNMutableWidgetArray strongArrayWithWidget:[NNWidget widget]], @"");
}

- (void)testStrongArrayWithWidgetFailure;
{
    STAssertThrows([NNMutableWidgetArray strongArrayWithWidget:[NSString string]], @"");
}

//- (void)testStrongArrayWithWidgetsCount;
//{
//
//}
//
//- (void)testStrongArrayWithWidgetsCountFailure;
//{
//
//}
//
//- (void)testStrongArrayWithWidgets;
//{
//
//}
//
//- (void)testStrongArrayWithWidgetsFailure;
//{
//
//}

- (void)testStrongArrayWithArray;
{
    NSArray *array = @[
    [NNWidget widget],
    [NNWidget widget],
    [NNWidget widget],
    [NNWidget widget],
    [NNWidget widget],
    [NNWidget widget],
    [NNWidget widget]
    ];
    
    STAssertNotNil([NNMutableWidgetArray strongArrayWithArray:array], @"");
    STAssertNotNil([NNMutableWidgetArray strongArrayWithArray:@[]], @"");
}

- (void)testStrongArrayWithArrayFailure;
{
    STAssertThrows([NNMutableWidgetArray strongArrayWithArray:@[[NSString string]]], @"");
}

//- (void)testInitWithWidgetsCount;
//{
//
//}
//
//- (void)testInitWithWidgetsCountFailure;
//{
//
//}
//
//- (void)testInitWithWidgets;
//{
//
//}
//
//- (void)testInitWithWidgetsFailure;
//{
//
//}

- (void)testAddObject;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray array];
    [array addObject:[NNWidget widget]];
    STAssertTrue([array count] == 1, @"");
}

- (void)testAddObjectFailure;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray array];
    STAssertThrows([array addObject:[NSString string]], @"");
    STAssertTrue([array count] == 0, @"");
}

- (void)testInsertObjectAtIndex;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NNWidget widget], [NNWidget widget]]];
    NNWidget *widget = [NNWidget widget];
    
    [array insertObject:widget atIndex:1];
    STAssertTrue([array count] == 3, @"");
    STAssertTrue([array objectAtIndex:1] == widget, @"");
}

- (void)testInsertObjectAtIndexFailure;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NNWidget widget], [NNWidget widget]]];

    STAssertThrows([array insertObject:[NSString string] atIndex:1], @"");
    STAssertTrue([array count] == 2, @"");
}

- (void)testReplaceObjectAtIndexWithObject;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NNWidget widget], [NNWidget widget]]];
    NNWidget *widget = [NNWidget widget];
    
    [array replaceObjectAtIndex:1 withObject:widget];
    STAssertTrue([array count] == 2, @"");
    STAssertTrue([array objectAtIndex:1] == widget, @"");
}

- (void)testReplaceObjectAtIndexWithObjectFailure;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NNWidget widget], [NNWidget widget]]];
    
    STAssertThrows([array replaceObjectAtIndex:1 withObject:[NSString string]], @"");
    STAssertTrue([array count] == 2, @"");
}

@end
