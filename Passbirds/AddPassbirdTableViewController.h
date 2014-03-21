//
//  AddPassbirdTableViewController.h
//  Passbirds
//
//  Created by Ryan Hittner on 3/16/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddPassbirdTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
