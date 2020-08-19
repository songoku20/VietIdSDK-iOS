//
// Created by SUUNC SUUNC on 7/23/20.
// Copyright (c) 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VietIdDataKingTalk : NSObject

@property (nonatomic, strong) NSString *status;

@property (nonatomic, strong) NSDictionary *result;

+ (VietIdDataKingTalk *)initFromDict:(NSDictionary *)dict;

- (NSDictionary *)toDict;

@end
