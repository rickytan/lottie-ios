//
//  LOTMaskContainer.h
//  Lottie
//
//  Created by brandon_withrow on 7/19/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "LOTMask.h"
#import "LOTLayerContainer.h"

@interface LOTMaskContainer : CALayer

- (instancetype _Nonnull)initWithMasks:(NSArray<LOTMask *> * _Nonnull)masks;

@property (nonatomic, strong, nullable) NSNumber *currentFrame;

@end

@interface LOTInvertedMatteContainer : CALayer <LOTLayerContainerDelegate>

- (instancetype _Nullable)initWithInputMatte:(LOTLayerContainer * _Nonnull)matte;

@end
