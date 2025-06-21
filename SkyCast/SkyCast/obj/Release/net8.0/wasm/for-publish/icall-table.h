#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
265,
266,
267,
291,
292,
293,
304,
305,
306,
307,
394,
395,
396,
399,
431,
432,
434,
436,
438,
440,
445,
453,
454,
455,
456,
457,
458,
459,
460,
461,
542,
543,
595,
601,
604,
606,
611,
612,
614,
615,
619,
620,
622,
624,
625,
628,
629,
630,
633,
636,
638,
640,
649,
706,
708,
710,
720,
721,
722,
724,
730,
731,
732,
733,
734,
742,
743,
744,
748,
749,
751,
753,
939,
1087,
1088,
6573,
6574,
6576,
6577,
6578,
6579,
6580,
6581,
6583,
6585,
6587,
6588,
6596,
6598,
6606,
6608,
6610,
6612,
6664,
6665,
6667,
6668,
6669,
6670,
6671,
6673,
6675,
7611,
7615,
7617,
7618,
7619,
7620,
7826,
7827,
7828,
7829,
7845,
7846,
7847,
7849,
7890,
7949,
7951,
7961,
7962,
7963,
7964,
8345,
8349,
8350,
8377,
8411,
8418,
8425,
8436,
8439,
8459,
8533,
8535,
8544,
8546,
8547,
8554,
8568,
8588,
8589,
8597,
8599,
8606,
8607,
8610,
8612,
8617,
8623,
8624,
8631,
8633,
8645,
8648,
8649,
8650,
8661,
8670,
8676,
8677,
8678,
8680,
8681,
8698,
8700,
8714,
8731,
8758,
8783,
8784,
9206,
9289,
9290,
9435,
9436,
9440,
9443,
9505,
9861,
9862,
10078,
10088,
10814,
10835,
10837,
10839,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 265,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 266,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 267,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 291,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 292,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 293,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 304,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 305,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 306,
ves_icall_System_Enum_InternalGetCorElementType,
// token 307,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 394,
ves_icall_System_Environment_get_ProcessorCount,
// token 395,
ves_icall_System_Environment_get_TickCount,
// token 396,
ves_icall_System_Environment_get_TickCount64,
// token 399,
ves_icall_System_Environment_FailFast_raw,
// token 431,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 432,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 434,
ves_icall_System_GC_SuppressFinalize_raw,
// token 436,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 438,
ves_icall_System_GC_GetGCMemoryInfo,
// token 440,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 445,
ves_icall_System_Object_MemberwiseClone_raw,
// token 453,
ves_icall_System_Math_Ceiling,
// token 454,
ves_icall_System_Math_Cos,
// token 455,
ves_icall_System_Math_Floor,
// token 456,
ves_icall_System_Math_Log10,
// token 457,
ves_icall_System_Math_Pow,
// token 458,
ves_icall_System_Math_Sin,
// token 459,
ves_icall_System_Math_Sqrt,
// token 460,
ves_icall_System_Math_Tan,
// token 461,
ves_icall_System_Math_ModF,
// token 542,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 543,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 595,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 601,
ves_icall_RuntimeType_make_array_type_raw,
// token 604,
ves_icall_RuntimeType_make_byref_type_raw,
// token 606,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 611,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 612,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 614,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 615,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 619,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 620,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 622,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 624,
ves_icall_System_RuntimeType_getFullName_raw,
// token 625,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 628,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 629,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 630,
ves_icall_RuntimeType_GetFields_native_raw,
// token 633,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 636,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 638,
ves_icall_RuntimeType_GetName_raw,
// token 640,
ves_icall_RuntimeType_GetNamespace_raw,
// token 649,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 706,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 708,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 710,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 720,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 721,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 722,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 724,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 731,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 732,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 733,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 734,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 742,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 743,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 744,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 748,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 749,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 751,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 753,
ves_icall_System_String_FastAllocateString_raw,
// token 939,
ves_icall_System_Type_internal_from_handle_raw,
// token 1087,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1088,
ves_icall_System_ValueType_Equals_raw,
// token 6573,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6574,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6576,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6577,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 6578,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6579,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6580,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6581,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6583,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6585,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6587,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 6588,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6596,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6598,
mono_monitor_exit_icall_raw,
// token 6606,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6608,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6610,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6612,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6664,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6665,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6667,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6668,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6669,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6670,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6671,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6673,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6675,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7611,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7615,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7617,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7618,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7619,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7620,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7826,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7827,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7828,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7829,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7845,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7846,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7847,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7849,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7890,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7949,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7951,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7961,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7962,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7963,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7964,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8345,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8349,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8350,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8377,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8411,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8418,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8425,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8436,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8439,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8459,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8533,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8535,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8544,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8546,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8547,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8554,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8568,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8588,
ves_icall_reflection_get_token_raw,
// token 8589,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8597,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8599,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8606,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8607,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8610,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8612,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8617,
ves_icall_reflection_get_token_raw,
// token 8623,
ves_icall_get_method_info_raw,
// token 8624,
ves_icall_get_method_attributes,
// token 8631,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8633,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8645,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8648,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8649,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8650,
ves_icall_reflection_get_token_raw,
// token 8661,
ves_icall_InternalInvoke_raw,
// token 8670,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8676,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8677,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8678,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8680,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8681,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8698,
ves_icall_InvokeClassConstructor_raw,
// token 8700,
ves_icall_InternalInvoke_raw,
// token 8714,
ves_icall_reflection_get_token_raw,
// token 8731,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8758,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8783,
ves_icall_reflection_get_token_raw,
// token 8784,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9206,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9289,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9290,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9435,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9436,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9440,
ves_icall_ModuleBuilder_getToken_raw,
// token 9443,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9505,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9861,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9862,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10078,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10088,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10814,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10835,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10837,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10839,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
