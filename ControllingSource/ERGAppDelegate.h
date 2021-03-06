//
//  ERGAppDelegate.h
//  ControllingSource
//
//  Created by thanawat.s on 8/18/2557 BE.
//  Copyright (c) 2557 thanawat.s. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ERGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
