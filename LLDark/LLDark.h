//
//  LLDark.h
//  LLDark <https://github.com/internetWei/llDark>
//
//  Created by LL on 2020/11/17.
//

#ifndef LLDark_h
#define LLDark_h

#import <Foundation/Foundation.h>

#if __has_include(<LLDark/LLDark.h>)

FOUNDATION_EXPORT double LLDarkVersionNumber;
FOUNDATION_EXPORT const unsigned char LLDarkVersionString[];

#import <LLDark/LLDarkManager.h>
#import <LLDark/UIImageView+Dark.h>
#import <LLDark/NSObject+Dark.h>
#import <LLDark/UIColor+Dark.h>
#import <LLDark/UIImage+Dark.h>
#import <LLDark/UIView+Dark.h>
#import <LLDark/LLDarkSource.h>
#import <LLDark/LLLaunchScreen.h>

#else

#import "LLDarkManager.h"
#import "UIImageView+Dark.h"
#import "NSObject+Dark.h"
#import "UIColor+Dark.h"
#import "UIImage+Dark.h"
#import "UIView+Dark.h"
#import "LLDarkSource.h"
#import "LLLaunchScreen.h"

#endif

#endif /* LLDark_h */
