//
//  KingIdTalkDataExtend.h
//  KingIdTalkSDK
//
//  Created by SUUNC SUUNC on 7/20/20.
//  Copyright © 2020 SUUNC SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VietIdDataViva.h"
#import "VietIdDataKingTalk.h"
#import "VietIdDataApple.h"
#import "VietIdDataKingHub.h"

NS_ASSUME_NONNULL_BEGIN

@interface VietIdDataExtend : NSObject

@property(nonatomic) VietIdDataViva *dataViva;

@property(nonatomic) VietIdDataKingTalk *dataKingTalk;

@property(nonatomic) VietIdDataApple *dataApple;

@property(nonatomic) VietIdDataKingHub *dataKingHub;

+ (VietIdDataExtend *)initFromDict:(NSDictionary *)dict;
+ (VietIdDataExtend *)initFromArray:(NSArray *)dictArray;
+ (NSString *)defaultDescription;

- (NSDictionary *)toDict ;

@end

NS_ASSUME_NONNULL_END
