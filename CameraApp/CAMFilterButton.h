#if FROM_IOS(7_0)

@interface CAMFilterButton : UIButton <NSCoding>
@property(readonly) UIImageView *_circlesImageView;
@property(getter = isOn) BOOL on;
@property UIEdgeInsets tappableEdgeInsets;
+ (instancetype)filterButton;
- (void)_commonCAMFilterButtonInitialization;
- (UIImage *)_filterImage;
- (UIImage *)_filterOnImage;
- (CGFloat)_selectedIndicatorAlpha;
@end

#endif
