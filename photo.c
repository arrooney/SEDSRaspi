#include "/home/pi/arv/aravis/src/arv.h"

#include <png.h>

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/****************************************
* @photo.c
* This code is responsible for capturing image data from 
* the Teledyne DALSA genicam using an ethernet connection.
* This code includes the functionality to save images as a .png
* compressed file format.
*
* To build:
* gcc -o photo photo.c -I"/usr/include/glib-2.0" -I"/home/pi/arv/aravis/src" -I"/usr/lib/arm-linux-gnueabihf/glib-2.0/include/" -L"/home/pi/arv/aravis/src" -laravis-0.6 -L"/usr/lib/arm-linux-gnueabihf" -lgobject-2.0 -lpng
*
*
* author: 
* Andrew R. Rooney
*
******************************************/

time_t startTime;


int main (int argc, char **argv){
	startTime=time(NULL);
	ArvCamera *camera;
	ArvBuffer *buffer;
	char name[32], name2[32];
	time_t now;
	camera=arv_camera_new("Teledyne DALSA-S1176000");
	
	for (;;){
		buffer=arv_camera_acquisition(camera, 0);
		now=time( NULL );
		time_t missionTime;
		missionTime = now - startTime;
		sprintf(name, "%d_photo.png", missionTime);
		sprintf(name2, "%d_photo.raw", missionTime);
		
		//printf("%s", now);
		if(ARV_IS_BUFFER(buffer)){
			printf("opening the file\n");
			FILE * f;
			f=fopen(name2, "w");
			fwrite(&buffer, sizeof(ArvBuffer),1, f);
			fclose(f);
			arv_save_png(buffer, name);
		}else{
			printf("something went wrong\n");
		}
	
		g_clear_object(&buffer);
		sleep(5);
	}
	g_clear_object(&camera);
	return 0;
}

void arv_save_png(ArvBuffer * buffer, const char * filename){
	assert(arv_buffer_get_payload_type(buffer) == ARV_BUFFER_PAYLOAD_TYPE_IMAGE);

	size_t bufferSize;
	char * bufferData = (char*)arv_buffer_get_data(buffer, &bufferSize);
	int width, height;

	arv_buffer_get_image_region(buffer, NULL,NULL, &width, &height);

	int bitDepth = ARV_PIXEL_FORMAT_BIT_PER_PIXEL(arv_buffer_get_image_pixel_format(buffer));
	int arv_row_stride = width * bitDepth/8;
	int colourType = PNG_COLOR_TYPE_GRAY;

	png_structp png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL,NULL);
	png_infop info_ptr = png_create_info_struct(png_ptr);

	FILE * f = fopen(filename, "wb");
	png_init_io(png_ptr, f);
	png_set_IHDR(png_ptr, info_ptr, width, height, bitDepth, colourType, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);
	png_write_info(png_ptr, info_ptr);

	png_bytepp rows = (png_bytepp)(png_malloc(png_ptr, height*sizeof(png_bytep)));

	int i;
	for(i=0;i<height;++i){
		rows[i]=(png_bytep)(bufferData + (height - i)*arv_row_stride);
	}
	
	png_write_image(png_ptr, rows);
	png_write_end(png_ptr, NULL);
	fclose(f);
}



