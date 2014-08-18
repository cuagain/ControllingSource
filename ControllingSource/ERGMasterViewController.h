//
//  ERGMasterViewController.h
//  ControllingSource
//
//  Created by thanawat.s on 8/18/2557 BE.
//  Copyright (c) 2557 thanawat.s. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ERGMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
