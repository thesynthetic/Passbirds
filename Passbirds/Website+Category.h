//
//  Website+Category.h
//  Passbirds
//
//  Created by Ryan Hittner on 2/2/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import "Website.h"

@interface Website (Category)

+ (void)loadWebsitesIntoManagedObjectContext:(NSManagedObjectContext *)context;
+ (void)insertWebsiteIntoManagedObjectContext:(NSManagedObjectContext *)context WithName:(NSString *)websiteName withImageURL:(NSString *)websiteImageURL withUsername:(NSString *)username withWebsiteURL:(NSString *) websiteURL;


@end
