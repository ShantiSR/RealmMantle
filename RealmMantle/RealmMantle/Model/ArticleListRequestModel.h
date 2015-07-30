//
//  ArticleListRequestModel.h
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import "MTLModel.h"
#import "Mantle.h"
 
@interface ArticleListRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSDate *articlesFromDate;
@property (nonatomic, copy) NSDate *articlesToDate;

+ (NSDateFormatter *)dateFormatter;

@end
