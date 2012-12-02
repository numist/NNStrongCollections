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
    STAssertNotNil([NNMutableWidgetArray strongArrayWithWidget:[NSWidget widget]], @"");
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

- (void)testStrongArrayWithWidgets;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray strongArrayWithWidgets:[NSWidget widget], [NSWidget widget], nil];
    STAssertNotNil(array, @"");
}

- (void)testStrongArrayWithWidgetsFailure;
{
    STAssertThrows(([NNMutableWidgetArray strongArrayWithWidgets:[NSWidget widget], [NSString string], [NSWidget widget], nil]), @"");
}

- (void)testStrongArrayWithArray;
{
    NSArray *array = @[
        [NSWidget widget],
        [NSWidget widget],
        [NSWidget widget],
        [NSWidget widget],
        [NSWidget widget],
        [NSWidget widget],
        [NSWidget widget]
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

- (void)testInitWithWidgets;
{
    NNMutableWidgetArray *array = [[NNMutableWidgetArray alloc]initWithWidgets:[NSWidget widget], [NSWidget widget], nil];
    STAssertNotNil(array, @"");
}

- (void)testInitWithWidgetsFailure;
{
    STAssertThrows(((void)[[NNMutableWidgetArray alloc]initWithWidgets:[NSWidget widget], [NSString string], [NSWidget widget], nil]), @"");
}

- (void)testAddObject;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray array];
    [array addObject:[NSWidget widget]];
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
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NSWidget widget], [NSWidget widget]]];
    NSWidget *widget = [NSWidget widget];
    
    [array insertObject:widget atIndex:1];
    STAssertTrue([array count] == 3, @"");
    STAssertTrue([array objectAtIndex:1] == widget, @"");
}

- (void)testInsertObjectAtIndexFailure;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NSWidget widget], [NSWidget widget]]];

    STAssertThrows([array insertObject:[NSString string] atIndex:1], @"");
    STAssertTrue([array count] == 2, @"");
}

- (void)testReplaceObjectAtIndexWithObject;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NSWidget widget], [NSWidget widget]]];
    NSWidget *widget = [NSWidget widget];
    
    [array replaceObjectAtIndex:1 withObject:widget];
    STAssertTrue([array count] == 2, @"");
    STAssertTrue([array objectAtIndex:1] == widget, @"");
}

- (void)testReplaceObjectAtIndexWithObjectFailure;
{
    NNMutableWidgetArray *array = [NNMutableWidgetArray arrayWithArray:@[[NSWidget widget], [NSWidget widget]]];
    
    STAssertThrows([array replaceObjectAtIndex:1 withObject:[NSString string]], @"");
    STAssertTrue([array count] == 2, @"");
}

@end
