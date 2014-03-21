//
//  Website.h
//  Passbirds
//
//  Created by Ryan Hittner on 2/2/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PassbirdElement;

@interface Website : NSManagedObject

@property (nonatomic, retain) NSString * websiteName;
@property (nonatomic, retain) NSString * websiteURL;
@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * websiteImageURL;
@property (nonatomic, retain) NSNumber * frequency;
@property (nonatomic, retain) NSSet *passbirdElements;
@end

@interface Website (CoreDataGeneratedAccessors)

- (void)addPassbirdElementsObject:(PassbirdElement *)value;
- (void)removePassbirdElementsObject:(PassbirdElement *)value;
- (void)addPassbirdElements:(NSSet *)values;
- (void)removePassbirdElements:(NSSet *)values;

@end
