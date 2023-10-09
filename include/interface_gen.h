

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for interface.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __interface_gen_h__
#define __interface_gen_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IFileMesh_FWD_DEFINED__
#define __IFileMesh_FWD_DEFINED__
typedef interface IFileMesh IFileMesh;

#endif 	/* __IFileMesh_FWD_DEFINED__ */


#ifndef __IFileAnimation_FWD_DEFINED__
#define __IFileAnimation_FWD_DEFINED__
typedef interface IFileAnimation IFileAnimation;

#endif 	/* __IFileAnimation_FWD_DEFINED__ */


#ifndef __IMeshFile_FWD_DEFINED__
#define __IMeshFile_FWD_DEFINED__
typedef interface IMeshFile IMeshFile;

#endif 	/* __IMeshFile_FWD_DEFINED__ */


#ifndef __ITextureFile_FWD_DEFINED__
#define __ITextureFile_FWD_DEFINED__
typedef interface ITextureFile ITextureFile;

#endif 	/* __ITextureFile_FWD_DEFINED__ */


#ifndef __IAssetManager_FWD_DEFINED__
#define __IAssetManager_FWD_DEFINED__
typedef interface IAssetManager IAssetManager;

#endif 	/* __IAssetManager_FWD_DEFINED__ */


#ifndef __IMeshRenderer_FWD_DEFINED__
#define __IMeshRenderer_FWD_DEFINED__
typedef interface IMeshRenderer IMeshRenderer;

#endif 	/* __IMeshRenderer_FWD_DEFINED__ */


#ifndef __IStaticMeshRenderer_FWD_DEFINED__
#define __IStaticMeshRenderer_FWD_DEFINED__
typedef interface IStaticMeshRenderer IStaticMeshRenderer;

#endif 	/* __IStaticMeshRenderer_FWD_DEFINED__ */


#ifndef __ISkinningMeshRenderer_FWD_DEFINED__
#define __ISkinningMeshRenderer_FWD_DEFINED__
typedef interface ISkinningMeshRenderer ISkinningMeshRenderer;

#endif 	/* __ISkinningMeshRenderer_FWD_DEFINED__ */


#ifndef __IGraphicsEngine_FWD_DEFINED__
#define __IGraphicsEngine_FWD_DEFINED__
typedef interface IGraphicsEngine IGraphicsEngine;

#endif 	/* __IGraphicsEngine_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFileMesh_INTERFACE_DEFINED__
#define __IFileMesh_INTERFACE_DEFINED__

/* interface IFileMesh */
/* [object][uuid] */ 


EXTERN_C const IID IID_IFileMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC94E919-0966-4646-92EC-F74AFE2AB6CB")
    IFileMesh : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IFileMeshVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileMesh * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileMesh * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileMesh * This);
        
        END_INTERFACE
    } IFileMeshVtbl;

    interface IFileMesh
    {
        CONST_VTBL struct IFileMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileMesh_INTERFACE_DEFINED__ */


#ifndef __IFileAnimation_INTERFACE_DEFINED__
#define __IFileAnimation_INTERFACE_DEFINED__

/* interface IFileAnimation */
/* [object][uuid] */ 


EXTERN_C const IID IID_IFileAnimation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F9E1858-181B-4FC4-B66C-1576FE97F20A")
    IFileAnimation : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IFileAnimationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileAnimation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileAnimation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileAnimation * This);
        
        END_INTERFACE
    } IFileAnimationVtbl;

    interface IFileAnimation
    {
        CONST_VTBL struct IFileAnimationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileAnimation_INTERFACE_DEFINED__ */


#ifndef __IMeshFile_INTERFACE_DEFINED__
#define __IMeshFile_INTERFACE_DEFINED__

/* interface IMeshFile */
/* [object][uuid] */ 


EXTERN_C const IID IID_IMeshFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1083981E-C631-4A1B-B5A4-12BA2FEFFD15")
    IMeshFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumOfMesh( 
            /* [out] */ UINT *pNumOfMesh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMesh( 
            /* [in] */ UINT index,
            /* [out] */ IFileMesh **ppMesh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumOfAnimation( 
            /* [out] */ UINT *pNumOfAnimation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAnimation( 
            /* [in] */ UINT index,
            /* [out] */ IFileAnimation **ppAnimation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMeshFileVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMeshFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMeshFile * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMeshFile * This);
        
        DECLSPEC_XFGVIRT(IMeshFile, GetNumOfMesh)
        HRESULT ( STDMETHODCALLTYPE *GetNumOfMesh )( 
            IMeshFile * This,
            /* [out] */ UINT *pNumOfMesh);
        
        DECLSPEC_XFGVIRT(IMeshFile, GetMesh)
        HRESULT ( STDMETHODCALLTYPE *GetMesh )( 
            IMeshFile * This,
            /* [in] */ UINT index,
            /* [out] */ IFileMesh **ppMesh);
        
        DECLSPEC_XFGVIRT(IMeshFile, GetNumOfAnimation)
        HRESULT ( STDMETHODCALLTYPE *GetNumOfAnimation )( 
            IMeshFile * This,
            /* [out] */ UINT *pNumOfAnimation);
        
        DECLSPEC_XFGVIRT(IMeshFile, GetAnimation)
        HRESULT ( STDMETHODCALLTYPE *GetAnimation )( 
            IMeshFile * This,
            /* [in] */ UINT index,
            /* [out] */ IFileAnimation **ppAnimation);
        
        END_INTERFACE
    } IMeshFileVtbl;

    interface IMeshFile
    {
        CONST_VTBL struct IMeshFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMeshFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMeshFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMeshFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMeshFile_GetNumOfMesh(This,pNumOfMesh)	\
    ( (This)->lpVtbl -> GetNumOfMesh(This,pNumOfMesh) ) 

#define IMeshFile_GetMesh(This,index,ppMesh)	\
    ( (This)->lpVtbl -> GetMesh(This,index,ppMesh) ) 

#define IMeshFile_GetNumOfAnimation(This,pNumOfAnimation)	\
    ( (This)->lpVtbl -> GetNumOfAnimation(This,pNumOfAnimation) ) 

#define IMeshFile_GetAnimation(This,index,ppAnimation)	\
    ( (This)->lpVtbl -> GetAnimation(This,index,ppAnimation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMeshFile_INTERFACE_DEFINED__ */


#ifndef __ITextureFile_INTERFACE_DEFINED__
#define __ITextureFile_INTERFACE_DEFINED__

/* interface ITextureFile */
/* [object][uuid] */ 


EXTERN_C const IID IID_ITextureFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C54E9F9-5CCA-4EB1-9F92-C6086BD7EE11")
    ITextureFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFormat( 
            /* [out] */ DXGI_FORMAT *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ UINT *pWidth,
            /* [out] */ UINT *pHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextureFileVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextureFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextureFile * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextureFile * This);
        
        DECLSPEC_XFGVIRT(ITextureFile, GetFormat)
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ITextureFile * This,
            /* [out] */ DXGI_FORMAT *pFormat);
        
        DECLSPEC_XFGVIRT(ITextureFile, GetSize)
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ITextureFile * This,
            /* [out] */ UINT *pWidth,
            /* [out] */ UINT *pHeight);
        
        END_INTERFACE
    } ITextureFileVtbl;

    interface ITextureFile
    {
        CONST_VTBL struct ITextureFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextureFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextureFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextureFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextureFile_GetFormat(This,pFormat)	\
    ( (This)->lpVtbl -> GetFormat(This,pFormat) ) 

#define ITextureFile_GetSize(This,pWidth,pHeight)	\
    ( (This)->lpVtbl -> GetSize(This,pWidth,pHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextureFile_INTERFACE_DEFINED__ */


#ifndef __IAssetManager_INTERFACE_DEFINED__
#define __IAssetManager_INTERFACE_DEFINED__

/* interface IAssetManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAssetManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16D6C23B-423B-45CC-BB2D-ECA889E790D8")
    IAssetManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadMeshFileFromFile( 
            /* [in] */ const WCHAR *meshFilePath,
            /* [out] */ IMeshFile **ppMeshFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadTextureFromFile( 
            /* [in] */ const WCHAR *textureFilePath,
            /* [out] */ ITextureFile **ppTextureFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAssetManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssetManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssetManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssetManager * This);
        
        DECLSPEC_XFGVIRT(IAssetManager, LoadMeshFileFromFile)
        HRESULT ( STDMETHODCALLTYPE *LoadMeshFileFromFile )( 
            IAssetManager * This,
            /* [in] */ const WCHAR *meshFilePath,
            /* [out] */ IMeshFile **ppMeshFile);
        
        DECLSPEC_XFGVIRT(IAssetManager, LoadTextureFromFile)
        HRESULT ( STDMETHODCALLTYPE *LoadTextureFromFile )( 
            IAssetManager * This,
            /* [in] */ const WCHAR *textureFilePath,
            /* [out] */ ITextureFile **ppTextureFile);
        
        END_INTERFACE
    } IAssetManagerVtbl;

    interface IAssetManager
    {
        CONST_VTBL struct IAssetManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssetManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssetManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssetManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssetManager_LoadMeshFileFromFile(This,meshFilePath,ppMeshFile)	\
    ( (This)->lpVtbl -> LoadMeshFileFromFile(This,meshFilePath,ppMeshFile) ) 

#define IAssetManager_LoadTextureFromFile(This,textureFilePath,ppTextureFile)	\
    ( (This)->lpVtbl -> LoadTextureFromFile(This,textureFilePath,ppTextureFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssetManager_INTERFACE_DEFINED__ */


#ifndef __IMeshRenderer_INTERFACE_DEFINED__
#define __IMeshRenderer_INTERFACE_DEFINED__

/* interface IMeshRenderer */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IMeshRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AB5D7BD-279E-43C9-9941-09C4F33D6001")
    IMeshRenderer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMesh( 
            /* [out] */ IMeshFile **pMesh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMesh( 
            /* [in] */ IMeshFile *pMesh) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetNumOfMaterial( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaterial( 
            /* [in] */ UINT materialId,
            /* [in] */ ITextureFile *pTexture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaterial( 
            /* [in] */ UINT materialId,
            /* [out] */ ITextureFile **ppTexture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorldMatrix( 
            /* [in] */ PVOID pMatrix) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Realize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMeshRendererVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMeshRenderer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMesh)
        HRESULT ( STDMETHODCALLTYPE *GetMesh )( 
            IMeshRenderer * This,
            /* [out] */ IMeshFile **pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMesh)
        HRESULT ( STDMETHODCALLTYPE *SetMesh )( 
            IMeshRenderer * This,
            /* [in] */ IMeshFile *pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetNumOfMaterial)
        UINT ( STDMETHODCALLTYPE *GetNumOfMaterial )( 
            IMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMaterial)
        HRESULT ( STDMETHODCALLTYPE *SetMaterial )( 
            IMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [in] */ ITextureFile *pTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMaterial)
        HRESULT ( STDMETHODCALLTYPE *GetMaterial )( 
            IMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [out] */ ITextureFile **ppTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetWorldMatrix)
        HRESULT ( STDMETHODCALLTYPE *SetWorldMatrix )( 
            IMeshRenderer * This,
            /* [in] */ PVOID pMatrix);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, Realize)
        HRESULT ( STDMETHODCALLTYPE *Realize )( 
            IMeshRenderer * This);
        
        END_INTERFACE
    } IMeshRendererVtbl;

    interface IMeshRenderer
    {
        CONST_VTBL struct IMeshRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMeshRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMeshRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMeshRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMeshRenderer_GetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> GetMesh(This,pMesh) ) 

#define IMeshRenderer_SetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> SetMesh(This,pMesh) ) 

#define IMeshRenderer_GetNumOfMaterial(This)	\
    ( (This)->lpVtbl -> GetNumOfMaterial(This) ) 

#define IMeshRenderer_SetMaterial(This,materialId,pTexture)	\
    ( (This)->lpVtbl -> SetMaterial(This,materialId,pTexture) ) 

#define IMeshRenderer_GetMaterial(This,materialId,ppTexture)	\
    ( (This)->lpVtbl -> GetMaterial(This,materialId,ppTexture) ) 

#define IMeshRenderer_SetWorldMatrix(This,pMatrix)	\
    ( (This)->lpVtbl -> SetWorldMatrix(This,pMatrix) ) 

#define IMeshRenderer_Realize(This)	\
    ( (This)->lpVtbl -> Realize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMeshRenderer_INTERFACE_DEFINED__ */


#ifndef __IStaticMeshRenderer_INTERFACE_DEFINED__
#define __IStaticMeshRenderer_INTERFACE_DEFINED__

/* interface IStaticMeshRenderer */
/* [object][uuid] */ 


EXTERN_C const IID IID_IStaticMeshRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("229F6A2D-45D1-4B21-A51A-13636181AC35")
    IStaticMeshRenderer : public IMeshRenderer
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IStaticMeshRendererVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStaticMeshRenderer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStaticMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStaticMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMesh)
        HRESULT ( STDMETHODCALLTYPE *GetMesh )( 
            IStaticMeshRenderer * This,
            /* [out] */ IMeshFile **pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMesh)
        HRESULT ( STDMETHODCALLTYPE *SetMesh )( 
            IStaticMeshRenderer * This,
            /* [in] */ IMeshFile *pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetNumOfMaterial)
        UINT ( STDMETHODCALLTYPE *GetNumOfMaterial )( 
            IStaticMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMaterial)
        HRESULT ( STDMETHODCALLTYPE *SetMaterial )( 
            IStaticMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [in] */ ITextureFile *pTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMaterial)
        HRESULT ( STDMETHODCALLTYPE *GetMaterial )( 
            IStaticMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [out] */ ITextureFile **ppTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetWorldMatrix)
        HRESULT ( STDMETHODCALLTYPE *SetWorldMatrix )( 
            IStaticMeshRenderer * This,
            /* [in] */ PVOID pMatrix);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, Realize)
        HRESULT ( STDMETHODCALLTYPE *Realize )( 
            IStaticMeshRenderer * This);
        
        END_INTERFACE
    } IStaticMeshRendererVtbl;

    interface IStaticMeshRenderer
    {
        CONST_VTBL struct IStaticMeshRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStaticMeshRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStaticMeshRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStaticMeshRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStaticMeshRenderer_GetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> GetMesh(This,pMesh) ) 

#define IStaticMeshRenderer_SetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> SetMesh(This,pMesh) ) 

#define IStaticMeshRenderer_GetNumOfMaterial(This)	\
    ( (This)->lpVtbl -> GetNumOfMaterial(This) ) 

#define IStaticMeshRenderer_SetMaterial(This,materialId,pTexture)	\
    ( (This)->lpVtbl -> SetMaterial(This,materialId,pTexture) ) 

#define IStaticMeshRenderer_GetMaterial(This,materialId,ppTexture)	\
    ( (This)->lpVtbl -> GetMaterial(This,materialId,ppTexture) ) 

#define IStaticMeshRenderer_SetWorldMatrix(This,pMatrix)	\
    ( (This)->lpVtbl -> SetWorldMatrix(This,pMatrix) ) 

#define IStaticMeshRenderer_Realize(This)	\
    ( (This)->lpVtbl -> Realize(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStaticMeshRenderer_INTERFACE_DEFINED__ */


#ifndef __ISkinningMeshRenderer_INTERFACE_DEFINED__
#define __ISkinningMeshRenderer_INTERFACE_DEFINED__

/* interface ISkinningMeshRenderer */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISkinningMeshRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8528400-E8AD-4B9B-8EF5-AFE6AF81ABE9")
    ISkinningMeshRenderer : public IMeshRenderer
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ISkinningMeshRendererVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkinningMeshRenderer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkinningMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkinningMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMesh)
        HRESULT ( STDMETHODCALLTYPE *GetMesh )( 
            ISkinningMeshRenderer * This,
            /* [out] */ IMeshFile **pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMesh)
        HRESULT ( STDMETHODCALLTYPE *SetMesh )( 
            ISkinningMeshRenderer * This,
            /* [in] */ IMeshFile *pMesh);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetNumOfMaterial)
        UINT ( STDMETHODCALLTYPE *GetNumOfMaterial )( 
            ISkinningMeshRenderer * This);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetMaterial)
        HRESULT ( STDMETHODCALLTYPE *SetMaterial )( 
            ISkinningMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [in] */ ITextureFile *pTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, GetMaterial)
        HRESULT ( STDMETHODCALLTYPE *GetMaterial )( 
            ISkinningMeshRenderer * This,
            /* [in] */ UINT materialId,
            /* [out] */ ITextureFile **ppTexture);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, SetWorldMatrix)
        HRESULT ( STDMETHODCALLTYPE *SetWorldMatrix )( 
            ISkinningMeshRenderer * This,
            /* [in] */ PVOID pMatrix);
        
        DECLSPEC_XFGVIRT(IMeshRenderer, Realize)
        HRESULT ( STDMETHODCALLTYPE *Realize )( 
            ISkinningMeshRenderer * This);
        
        END_INTERFACE
    } ISkinningMeshRendererVtbl;

    interface ISkinningMeshRenderer
    {
        CONST_VTBL struct ISkinningMeshRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkinningMeshRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISkinningMeshRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISkinningMeshRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISkinningMeshRenderer_GetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> GetMesh(This,pMesh) ) 

#define ISkinningMeshRenderer_SetMesh(This,pMesh)	\
    ( (This)->lpVtbl -> SetMesh(This,pMesh) ) 

#define ISkinningMeshRenderer_GetNumOfMaterial(This)	\
    ( (This)->lpVtbl -> GetNumOfMaterial(This) ) 

#define ISkinningMeshRenderer_SetMaterial(This,materialId,pTexture)	\
    ( (This)->lpVtbl -> SetMaterial(This,materialId,pTexture) ) 

#define ISkinningMeshRenderer_GetMaterial(This,materialId,ppTexture)	\
    ( (This)->lpVtbl -> GetMaterial(This,materialId,ppTexture) ) 

#define ISkinningMeshRenderer_SetWorldMatrix(This,pMatrix)	\
    ( (This)->lpVtbl -> SetWorldMatrix(This,pMatrix) ) 

#define ISkinningMeshRenderer_Realize(This)	\
    ( (This)->lpVtbl -> Realize(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISkinningMeshRenderer_INTERFACE_DEFINED__ */


#ifndef __IGraphicsEngine_INTERFACE_DEFINED__
#define __IGraphicsEngine_INTERFACE_DEFINED__

/* interface IGraphicsEngine */
/* [object][uuid] */ 


EXTERN_C const IID IID_IGraphicsEngine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67F42EE0-37DD-4347-9CBF-17EDBC75D2FC")
    IGraphicsEngine : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSwapChain( 
            /* [in] */ HWND hWnd,
            /* [in] */ UINT width,
            /* [in] */ UINT height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssetManager( 
            /* [out] */ IAssetManager **ppAssetManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStaticMeshRenderer( 
            /* [out] */ IStaticMeshRenderer **ppMeshRenderer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Render( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicsEngineVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicsEngine * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicsEngine * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicsEngine * This);
        
        DECLSPEC_XFGVIRT(IGraphicsEngine, CreateSwapChain)
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )( 
            IGraphicsEngine * This,
            /* [in] */ HWND hWnd,
            /* [in] */ UINT width,
            /* [in] */ UINT height);
        
        DECLSPEC_XFGVIRT(IGraphicsEngine, GetAssetManager)
        HRESULT ( STDMETHODCALLTYPE *GetAssetManager )( 
            IGraphicsEngine * This,
            /* [out] */ IAssetManager **ppAssetManager);
        
        DECLSPEC_XFGVIRT(IGraphicsEngine, CreateStaticMeshRenderer)
        HRESULT ( STDMETHODCALLTYPE *CreateStaticMeshRenderer )( 
            IGraphicsEngine * This,
            /* [out] */ IStaticMeshRenderer **ppMeshRenderer);
        
        DECLSPEC_XFGVIRT(IGraphicsEngine, Render)
        HRESULT ( STDMETHODCALLTYPE *Render )( 
            IGraphicsEngine * This);
        
        END_INTERFACE
    } IGraphicsEngineVtbl;

    interface IGraphicsEngine
    {
        CONST_VTBL struct IGraphicsEngineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraphicsEngine_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraphicsEngine_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraphicsEngine_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraphicsEngine_CreateSwapChain(This,hWnd,width,height)	\
    ( (This)->lpVtbl -> CreateSwapChain(This,hWnd,width,height) ) 

#define IGraphicsEngine_GetAssetManager(This,ppAssetManager)	\
    ( (This)->lpVtbl -> GetAssetManager(This,ppAssetManager) ) 

#define IGraphicsEngine_CreateStaticMeshRenderer(This,ppMeshRenderer)	\
    ( (This)->lpVtbl -> CreateStaticMeshRenderer(This,ppMeshRenderer) ) 

#define IGraphicsEngine_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicsEngine_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


