//
//  SplashVC.h
//  PhotoSharing
//
//  Created by One Click IT Consultancy  on 6/5/15.
//  Copyright (c) 2015 One Click IT Consultancy . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Constant.h"
#import "StartUpScreen.h"

@class AppDelegate;
@interface SplashVC : UIViewController
{
    UIImageView * imgLogoName;
    UIImageView * imgLogo;
    
    AppDelegate * addDelegate;
    
    NSTimer * colorTimer;
}

@end
