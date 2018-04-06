//
//  UIView+Corner.h
//
//  Created by 迪远 王 on 16/10/3.
//  Copyright © 2016年 andforce. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Corner)

@property(nonatomic, strong) IBInspectable UIColor *borderColor;
@property(nonatomic, assign) IBInspectable CGFloat borderWidth;
@property(nonatomic, assign) IBInspectable CGFloat cornerRadius;

@end
