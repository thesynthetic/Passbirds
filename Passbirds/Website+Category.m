//
//  Website+Category.m
//  Passbirds
//
//  Created by Ryan Hittner on 2/2/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import "Website+Category.h"


@implementation Website (Category)

+ (void)loadWebsitesIntoManagedObjectContext:(NSManagedObjectContext *)context
{
    Website *ws = [NSEntityDescription insertNewObjectForEntityForName:@"Website" inManagedObjectContext:context];

    
    [ws setWebsiteImageURL:@""];
    [ws setWebsiteName:@"American Express"];
    [ws setUsername:@"ryeguy_24@yahoo.com"];
    [ws setWebsiteURL:@"http://www.americanexpress.com"];
    NSError *error;
    if (![context save:&error]) {
        NSLog(@"CoreData Error: %@", error.description);
    }
}

+ (void)insertWebsiteIntoManagedObjectContext:(NSManagedObjectContext *)context WithName:(NSString *)websiteName withImageURL:(NSString *)websiteImageURL withUsername:(NSString *)username withWebsiteURL:(NSString *) websiteURL
{
    //Open: Test existence before inserting
    
    Website *ws = [NSEntityDescription insertNewObjectForEntityForName:@"Website" inManagedObjectContext:context];
    [ws setWebsiteImageURL:websiteImageURL];
    [ws setWebsiteName:websiteName];
    [ws setUsername:username];
    [ws setWebsiteURL:websiteURL];
    NSError *error;
    if (![context save:&error]) {
        NSLog(@"CoreData Error: %@", error.description);
    }
    
}


@end
