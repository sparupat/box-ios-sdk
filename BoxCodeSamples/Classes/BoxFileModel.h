//
//  BoxFileModel.h
//  BoxDotNetDataCache
//
//  Created by Michael Smith on 7/30/09.
//  Copyright 2009 Box.net.
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
//  See the License for the specific language governing permissions and 
//  limitations under the License. 
//

#import <Foundation/Foundation.h>
#import "BoxObjectModel.h"
#import "BoxModelUtilityFunctions.h"

/*
 * BoxFileModel subclasses BoxObjectModel and contains a few properties specific to files - specifically image thumbnail URLs that
 * can be used to give a preview of the image or an icon representing a certain filetype.
 */

typedef enum _BoxFileModelFileType {
	BoxFileModelMediaFileType,  
	BoxFileModelWebdocFileType,
	BoxFileModelGeneralFileType
} BoxFileModelFileType;

@interface BoxFileModel : BoxObjectModel {
	NSString	* _smallThumbnailURL;
	NSString	* _largeThumbnailURL;
	NSString	* _largerThumbnailURL;
	NSString	* _previewThumbnailURL;
	
	NSString	* _sha1;
}

@property (retain) NSString * smallThumbnailURL;
@property (retain) NSString * largeThumbnailURL;
@property (retain) NSString * largerThumbnailURL;
@property (retain) NSString * previewThumbnailURL;
@property (retain) NSString * sha1;

/*
 * This function can be used to return the type of file if you would like to preview it. Media files must be previewed in the media player,
 * webdocs can be rendered in a UIWebView, general files can also be rendered in UIWebViews.
 */
-(BoxFileModelFileType) getFileType;

-(NSMutableDictionary*)getValuesInDictionaryForm;

@end
