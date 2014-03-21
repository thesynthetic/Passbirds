//
//  PassbirdElement.h
//  Passbirds
//
//  Created by Ryan Hittner on 2/2/14.
//  Copyright (c) 2014 Ryan Hittner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Website;

@interface PassbirdElement : NSManagedObject

@property (nonatomic, retain) NSNumber * isImage;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSString * imageURL;
@property (nonatomic, retain) NSNumber * numberForOrder;
@property (nonatomic, retain) Website *forWebsite;

@end
