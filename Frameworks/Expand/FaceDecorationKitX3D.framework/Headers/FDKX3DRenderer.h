//
//  FDK3DRenderer.h
//  Pods
//
//  Created by YuAo on 12/20/16.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FDK3DRendering;
@interface FDKX3DRenderer : NSObject <FDK3DRendering>

+ (BOOL)USE_METAL;

@end

NS_ASSUME_NONNULL_END
