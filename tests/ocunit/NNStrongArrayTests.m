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
    STAssertNotNil([NNWidgetArray strongArrayWithWidget:[NNWidget widget]], @"");
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

@end
