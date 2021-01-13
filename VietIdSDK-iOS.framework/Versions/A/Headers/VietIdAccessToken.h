//
//  VietIdAccessToken.h
//  VietidSDK-iOS
//
//  Created by Le Minh Son on 11/13/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VietIdDataExtend.h"

NS_ASSUME_NONNULL_BEGIN

@interface VietIdAccessToken : NSObject

/**
 * @return Your accessToken when login via vietID successfully
 */
@property(nonatomic, weak) NSString* accessToken;
/**
 * @return time to expired token login
 */
@property(nonatomic, weak) NSString* expiresIn;
/**
 * @return token type of your login session
 */
@property(nonatomic, weak) NSString* tokenType;
/**
 * @return scope
 */
@property(nonatomic, weak) NSString* scope;
/**
 * @return Data from viva and king_talk
 */
//@property(nonatomic) VietIdDataExtend* dataExtend;
///**
// * @return Data debug
// */
//@property(nonatomic) VietIdDataExtend* dataExtendArray;

+(VietIdAccessToken*)initFromDictDebug:(NSDictionary*) dict;
/**
 * Not call method everytime from your app
 */
+(VietIdAccessToken*)initFromDic:(NSDictionary*) dict;
/**
 * @return Current token when login successfully
 */
+(VietIdAccessToken*)getCurrentAccessToken;
/**
 * Set current accessToken nil if
 */
+(void)setCurrentAccessToken:(VietIdAccessToken*)accessToken;
/**
 * Get accessToken object as NSDictionary
 */
-(NSDictionary*)toDict;
@end

NS_ASSUME_NONNULL_END
