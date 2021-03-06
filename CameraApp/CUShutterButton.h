#if FROM_IOS(9_0)

#import "CAMShutterButtonSpec.h"

@interface CUShutterButton : UIButton
+ (instancetype)shutterButton;
+ (instancetype)smallShutterButton;
+ (instancetype)smallShutterButtonWithLayoutStyle:(NSInteger)style PS_AVAILABLE_IOS(10_0);
+ (instancetype)tinyShutterButton;
+ (instancetype)tinyShutterButtonWithLayoutStyle:(NSInteger)style PS_AVAILABLE_IOS(10_0);
@property(getter = isPulsing) BOOL pulsing;
@property(getter = isSpinning) BOOL spinning;
@property NSInteger mode;
- (UIColor *)_colorForMode:(NSInteger)mode;
- (UIColor *)_innerCircleColorForMode:(NSInteger)mode spinning:(BOOL)spinning;
- (UIView *)_innerView;
- (UIView *)_outerView;
- (void)_updateOuterAndInnerLayers;
- (void)_setSpec:(CAMShutterButtonSpec)spec;
@end

#endif
