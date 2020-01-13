//
// SFIGenericConfig.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFIODataObject.h"

@class SFIUser;

@interface SFIGenericConfig : SFIODataObject
{
}

@property (nonatomic, strong) SFIUser *User;
@property (nonatomic, strong) NSString *ConfigName;
@property (nonatomic, strong) NSNumber *ConfigSize;
@property (nonatomic, strong) NSDate *CreationDate;
@property (nonatomic, strong) NSDate *ModifiedDate;
@property (nonatomic, strong) NSString *Config;


@end