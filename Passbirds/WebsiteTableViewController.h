//
//  WebsiteTableViewController.h
//  Passbirds
//
//  Created by Ryan Hittner on 2/2/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Website.h"
#import "Website+Category.h"
#import "AppDelegate.h"
#import "WebsiteTableViewCell.h"

@interface WebsiteTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@property (nonatomic, retain) NSMutableArray *mutableFetchResults;

@end
