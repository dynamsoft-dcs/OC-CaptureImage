//
//  AppDelegate.h
//  CaptureImage
//
//  Created by Dynamsoft on 12/6/17.
//  Copyright © 2017 Dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

