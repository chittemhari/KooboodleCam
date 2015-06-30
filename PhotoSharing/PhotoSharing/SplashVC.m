//
//  SplashVC.m
//  PhotoSharing
//
//  Created by One Click IT Consultancy  on 6/5/15.
//  Copyright (c) 2015 One Click IT Consultancy . All rights reserved.
//

#import "SplashVC.h"

@interface SplashVC ()

@end

@implementation SplashVC

- (void)viewDidLoad {
    [super viewDidLoad];
    [super viewDidLoad];
    
    [self.navigationController.navigationBar setHidden:YES];
    
    addDelegate =(AppDelegate *) [[UIApplication sharedApplication] delegate];
    NSLog(@"bounds height====%f",[[UIScreen mainScreen] bounds].size.height);
    NSLog(@"self height====%f",self.view.frame.size.height);
    
    if (IS_IPHONE_5) {
        imgLogo = [[UIImageView alloc] initWithFrame:CGRectMake(140, 568, 40, 40)];
    }else{
        imgLogo = [[UIImageView alloc] initWithFrame:CGRectMake(140, 480, 40, 40)];
    }
    [imgLogo setAlpha:0.9];
    [imgLogo setImage:[UIImage imageNamed:@"logo_yellow.png"]];
    [self.view addSubview:imgLogo];
    imgLogo.hidden=YES ;
        
    [self logoImageAnimation];
    
}
#pragma mark - logoImageAnimation
-(void)logoImageAnimation
{
    imgLogo.hidden=NO;
    
    [UIView transitionWithView:imgLogo duration:0.6
                       options:UIViewAnimationOptionCurveEaseOut
                    animations:^{
                        if (IS_IPHONE_5) {
                            [imgLogo setFrame:CGRectMake(140, 568/2-70/2, 40, 40)];
                        }else{
                            [imgLogo setFrame:CGRectMake(140, 480/2-70/2, 40, 40)];
                        }
                    }
                    completion:^(BOOL finished)
     {
         [self performSelector:@selector(gotoNextView) withObject:nil afterDelay:1];
     }];
}
#pragma mark - gotoNextView

-(void)gotoNextView
{
    [UIView beginAnimations:nil context:NULL];
    [UIView setAnimationDuration:1.3];
    [UIView setAnimationTransition:UIViewAnimationTransitionFlipFromLeft forView:[[UIApplication sharedApplication] keyWindow] cache:YES];
    [UIView commitAnimations];
    
    if ([CURRENT_USER_ID isEqualToString:@""] || [CURRENT_USER_ID isEqual:[NSNull null]] || CURRENT_USER_ID == nil || [CURRENT_USER_ID isEqualToString:@"(null)"])
    {
        /*LoginVC *  login = [[LoginVC alloc] init];
         UINavigationController * navControl = [[UINavigationController alloc] initWithRootViewController:login];
         addDelegate.window.rootViewController = navControl; // login*/
        
        /*  StartUpScreen1 *  login = [[StartUpScreen1 alloc] init];
         UINavigationController * navControl = [[UINavigationController alloc] initWithRootViewController:login];
         addDelegate.window.rootViewController = navControl; // login*/
        
        StartUpScreen *  strdup = [[StartUpScreen alloc] initWithNibName:@"StartUpScreen" bundle:nil];
        UINavigationController * navControl = [[UINavigationController alloc] initWithRootViewController:strdup];
        addDelegate.window.rootViewController = navControl; // login
    }
    else
    {
//        HomeVC *  home = [[HomeVC alloc] init];
//        UINavigationController * navControl = [[UINavigationController alloc] initWithRootViewController:home];
//        addDelegate.window.rootViewController = navControl; // login
        
        //        RegisterVC1 * register_view = [[RegisterVC1 alloc] init];
        //        [self.navigationController pushViewController:register_view animated:YES];
        
        //        RegisterVC2 * register_view = [[RegisterVC2 alloc] init];
        //        [self.navigationController pushViewController:register_view animated:YES];
        
        //        StartUpScreenNew *  startup = [[StartUpScreenNew alloc] init];
        //        UINavigationController * navControl = [[UINavigationController alloc] initWithRootViewController:startup];
        //        addDelegate.window.rootViewController = navControl;
    }
}

#pragma mark CleanUp
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
