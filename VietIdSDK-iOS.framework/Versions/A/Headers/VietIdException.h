//
//  VietIdException.h
//  VietidSDK-iOS
//
//  Created by Le Minh Son on 11/13/18.
//  Copyright © 2018 songoku20. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VietIdException : NSException

/**
 * @return new instance of vietid exception to handle error from sdk and call back error from server vietID
 */
+(instancetype)newInstance:(NSString*)message;
@end

NS_ASSUME_NONNULL_END
