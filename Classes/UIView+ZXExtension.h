//
//  UIView+ZXExtension.h
//  ZXToolDemo
//
//  Created by aa123 on 2021/7/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ZXExtension)

/** x */
@property (nonatomic,assign)CGFloat x;
/** y */
@property (nonatomic,assign)CGFloat y;
/** width */
@property (nonatomic,assign)CGFloat width;
/** height */
@property (nonatomic,assign)CGFloat height;
/** centerX */
@property (nonatomic,assign)CGFloat centerX;
/** centerY */
@property (nonatomic,assign)CGFloat centerY;
/** size */
@property (nonatomic,assign)CGSize size;
/** origin */
@property (nonatomic,assign)CGPoint origin;


@end

NS_ASSUME_NONNULL_END
