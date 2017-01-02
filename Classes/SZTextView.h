//
//  SZTextView.h
//  SZTextView
//
//  Created by glaszig on 14.03.13.
//  Copyright (c) 2013 glaszig. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SZTextView.
FOUNDATION_EXPORT double SZTextViewVersionNumber;

//! Project version string for SZTextView.
FOUNDATION_EXPORT const unsigned char SZTextViewVersionString[];

@class SZTextView;
@protocol SZTextViewTapDelegate <NSObject>
- (void)textView:(SZTextView *)textView touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event;
@end

IB_DESIGNABLE

@interface SZTextView : UITextView

@property (copy, nonatomic) IBInspectable NSString *placeholder;
@property (nonatomic) IBInspectable double fadeTime;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (retain, nonatomic) UIColor *placeholderTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, weak) id<SZTextViewTapDelegate> tapDelegate;

@end
