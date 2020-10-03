//
//  VietIdSDKController.h
//  VietidSDK-iOS
//
//  Created by Le Minh Son on 11/13/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VietIdAccessToken.h"
#import "VietIdException.h"
#import "VietIdUserInfo.h"

#define VERSION_NAME @"1.2.0"

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define EN @"en"
#define VI @"vi"
#define FR @"fr"
#define CN @"zh"


typedef enum{
    LOGIN = 0,
    CHECK_SESSION = 1
} ActionType;

@protocol OnVietIdResponse
-(void)onSuccess:(VietIdUserInfo*)userInfo;
-(void)onFailed:(VietIdException*) e;
@end

@protocol OnVietIdLoginCallback
-(void)onSuccess:(VietIdAccessToken*) accessToken;
-(void)onFailed:(VietIdException*) vietIdException;
-(void)onCancel;
@end

//For VietIdSDK public method and properties
@interface VietIdSDKController : NSObject

@property(nonatomic) BOOL debugMode;
@property(nonatomic, strong) NSString* language;
@property(nonatomic, readonly) NSInteger actionType;
@property(nonatomic, strong) id<OnVietIdLoginCallback> onVietIdLoginCallback;
@property(nonatomic, strong) id<OnVietIdResponse> onVietIdResponse;
@property(nonatomic) BOOL disableExitLogin;

/**
 * Create singleton instance of VietIdSDKController
 */
+(instancetype)sharedInstance;

/**
 * Init and make config for vietidController
 * Call first before working with VietIdController
 * Such that: [[VietIdSDKController sharedInstance] configure];
 */
-(void) configure:(NSString*) clientId clientSecret:(NSString*)clientSecret;

/**
 * @return clientId for your application with vietIdSDK
 */
-(NSString*)getCLientId;

/**
 * @return redirectUri for your application with vietIdSDK
 */
-(NSString*)getRedirectUri;

/**
 * @return clientSecret for your application with vietIdSDK
 */
-(NSString*)getClientSecret;

/**
 * @return bundleId of your application
 */
-(NSString*)getBundleId;

/**
 * Call to check logged in session on local
 *
 * @return boolean state true if token is valid otherwise
 */
-(BOOL)checkTokenOnLocal;

/**
 * Call to check logged in session with asynchronous from server check
 * Callback result via delegate class: OnVietIdResponse
 */
-(void)checkTokenOnServer;

//For login/logout
/**
 * Call this when you want to login via vietID
 */
-(void)login;
/**
 * Call this when you want to logout via vietID
 */
-(BOOL)logout;

/**
 * Call this when you want to logout via vietID with asynchronous state
 */
-(void)logoutAsync:(void(^)(BOOL  success,VietIdException* error))callback;

//For get user information
/**
 * Get user info with asynchronous
 */
-(void)getUserInfoAsync:(void(^)(BOOL  success,VietIdException* error,VietIdUserInfo* userinfo))callback;
/**
 * Get user info with synchronous
 */
-(VietIdUserInfo*)getUserInfo;

/**
 * Set disable phone number on login session: YES if you want disable login via vietID with phonenumber otherwise
 */
-(void)disablePhone:(BOOL) disable;

/**
 * Get disable phone number on login session: YES if you want disable login via vietID with phonenumber otherwise
 */
-(NSString*)isDisablePhone;

/**
 * Get identifier for advertisers
 */
-(NSString*)getIDFA;

/**
 * Get unique ID.
 */
-(NSString*)getUniqueID;

/**
 * Get accounts login on device.
 */
-(void)getArrayAccounts:(void(^)(BOOL  success, NSArray<NSDictionary<NSString*,id>*> * _Nonnull devices, NSString* code))completion;

/**
 * Quick login with email or phone number.
 */
-(void)quickLogin:(NSString*)email code:(NSString*)code;

@end

NS_ASSUME_NONNULL_END
