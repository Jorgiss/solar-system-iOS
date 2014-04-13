//
//  AppDelegate.h
//  solarsystem
//
//  Created by Active-ILG on 13/04/2014.
//  Copyright (c) 2014 Andrius. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, strong) RootViewController *rootViewController;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
