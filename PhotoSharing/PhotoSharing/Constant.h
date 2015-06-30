//
//  Constant.h
//  ibeacon stores
//
//  Created by One Click IT Consultancy  on 5/14/14.
//  Copyright (c) 2014 One Click IT Consultancy . All rights reserved.
//

#import <Foundation/Foundation.h>


#define WEB_SERVICE_TOKEN @"3e3d7f49a85bd118a62743f392169e1b"

#define KONTACT_API_KEY @"JrOUjzPCEVSpMaaxDZFyAIZmZwNrztSQ"

#define kScanditSDKAppKey    @"iqXQ/P4FEeOTEpvIsUyNUZKe38J7B1hUzIYR3cxYWSs"

//#define kClientId    @"150919368019-7d4ee9d024huudgh7l3k4roauck7stla.apps.googleusercontent.com" //Google+

//#define kClientId    @"150919368019-ir7q3l6as8a8ivb2vlrumihs7608uuab.apps.googleusercontent.com" //Google+
//// romit sir account //// com.oneclick.storescort


//#define kClientId    @"150919368019-9jpqo3cf8r3ul6b13u93kjc4tc9dmuc6.apps.googleusercontent.com" // sawan sir account //// com.oneclick.storescort1

#define kClientId @"150919368019-brdpt92ku7jlt390rab5nrt5j4boh7lu.apps.googleusercontent.com" // Onrclick account //// com.oneclick.storescortapp

//#define kClientId    @"954661535817-3r334o64iepthd6f3018bu3mggei49e0.apps.googleusercontent.com" // Onrclick account //// com.oneclick.storescortapp


//static NSString * const kClientId = @"101046264356-lqncecos6vad4dp4ej4gmokvgtagl64r.apps.googleusercontent.com";




@protocol Constant <NSObject>

typedef enum ScrollDirection {
    ScrollDirectionNone,
    ScrollDirectionRight,
    ScrollDirectionLeft,
    ScrollDirectionUp,
    ScrollDirectionDown,
    ScrollDirectionCrazy,
} ScrollDirection;

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)



#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE_5 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_IPAD ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)


//#define WEB_SERVICE_URL @"http://oneclickitsolution.com/subdomain/demo/storescort/admin/webservice/webservice.php"
#define WEB_SERVICE_URL @"http://storescort.oneclickitsolution.com/admin/webservice/webservice.php"




#define GalleryImagePerRow  (IS_IPAD ? 3 :2)


#define ALERT_TITLE @"Shopop"
#define OK_BTN @"OK"
#define ALERT_CANCEL  @"Cancel"
#define ALERT_NO  @"NO"
#define ALERT_YES  @"YES"

#define ACTION_TAKE_PHOTO       @"Take Photo"
#define ACTION_LIBRARY_PHOTO    @"Photo From Library"
#define CONNECTION_FAILED @"Please check internet connection"



#pragma mark User Credential-----------------------------------------

#define CURRENT_USER_ID [[NSUserDefaults standardUserDefaults] stringForKey:@"userId"]
#define CURRENT_USER_FIRSTNAME [[NSUserDefaults standardUserDefaults] stringForKey:@"Fisrt_Name"]
#define CURRENT_USER_LASTNAME [[NSUserDefaults standardUserDefaults] stringForKey:@"Last_Name"]
#define CURRENT_USER_EMAIL [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Email"]
#define CURRENT_USER_PROFILE_IMAGE [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Image"]
#define CURRENT_USER_BIRTHDATE [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Birthdate"]
#define CURRENT_USER_GENDER [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Gender"]
#define CURRENT_USER_Phone [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Phone"]
#define CURRENT_USER_ZipCode [[NSUserDefaults standardUserDefaults] stringForKey:@"User_ZipCode"]
#define USER_POINTS[[NSUserDefaults standardUserDefaults] stringForKey:@"User_Points"]

#define USER_POINTS[[NSUserDefaults standardUserDefaults] stringForKey:@"Notification"]

#define Alert_Animation_Type URBAlertAnimationTopToBottom




//#define CURRENT_USER_Current_Kick_Points [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Kick_Points"]
//#define CURRENT_USER_All_Kick_Points [[NSUserDefaults standardUserDefaults] stringForKey:@"User_All_Kick_Points"]
//#define CURRENT_USER_Targeted_Kick_Points [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Targrted_Kick_Points"]
//
//#define CURRENT_USER_Selected_Reward_Point [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Selected_Reward_Point"]
//#define CURRENT_USER_Selected_Reward_ID [[NSUserDefaults standardUserDefaults] stringForKey:@"User_Selected_Reward_Id"]





@end
