//
//  NNStrongArrayTests.m
//  StrongCollections
//
//  Created by Scott Perry on 12/01/12.
//  Copyright (c) 2012 Scott Perry. All rights reserved.
//

#import "NNStrongArrayTests.h"

#import "NNStrongArrayAggregate.h"

@implementation NNStrongArrayTests

- (void)testStrongArrayWithWidget;
{
    STAssertNotNil([NNWidgetArray strongArrayWithWidget:[NSWidget widget]], @"");
}

- (void)testStrongArrayWithWidgetFailure;
{
    STAssertThrows([NNWidgetArray strongArrayWithWidget:[NSString string]], @"");
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
    NNWidgetArray *array = [NNWidgetArray strongArrayWithWidgets:[NSWidget widget], [NSWidget widget], nil];
    STAssertNotNil(array, @"");
}

- (void)testStrongArrayWithWidgetsFailure;
{
    STAssertThrows(([NNWidgetArray strongArrayWithWidgets:[NSWidget widget], [NSString string], [NSWidget widget], nil]), @"");
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
    
    STAssertNotNil([NNWidgetArray strongArrayWithArray:array], @"");
    STAssertNotNil([NNWidgetArray strongArrayWithArray:@[]], @"");
}

- (void)testStrongArrayWithArrayFailure;
{
    STAssertThrows([NNWidgetArray strongArrayWithArray:@[[NSString string]]], @"");
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
    NNWidgetArray *array = [[NNWidgetArray alloc]initWithWidgets:[NSWidget widget], [NSWidget widget], nil];
    STAssertNotNil(array, @"");
}

- (void)testInitWithWidgetsFailure;
{
    STAssertThrows(((void)[[NNWidgetArray alloc]initWithWidgets:[NSWidget widget], [NSString string], [NSWidget widget], nil]), @"");
}
@end
