#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0030F8B0
// Address: 0x30f8b0 - 0x30fa98
void func_0030F8B0_0x30f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F8B0_0x30f8b0");
#endif

    switch (ctx->pc) {
        case 0x30f8b0u: goto label_30f8b0;
        case 0x30f8b4u: goto label_30f8b4;
        case 0x30f8b8u: goto label_30f8b8;
        case 0x30f8bcu: goto label_30f8bc;
        case 0x30f8c0u: goto label_30f8c0;
        case 0x30f8c4u: goto label_30f8c4;
        case 0x30f8c8u: goto label_30f8c8;
        case 0x30f8ccu: goto label_30f8cc;
        case 0x30f8d0u: goto label_30f8d0;
        case 0x30f8d4u: goto label_30f8d4;
        case 0x30f8d8u: goto label_30f8d8;
        case 0x30f8dcu: goto label_30f8dc;
        case 0x30f8e0u: goto label_30f8e0;
        case 0x30f8e4u: goto label_30f8e4;
        case 0x30f8e8u: goto label_30f8e8;
        case 0x30f8ecu: goto label_30f8ec;
        case 0x30f8f0u: goto label_30f8f0;
        case 0x30f8f4u: goto label_30f8f4;
        case 0x30f8f8u: goto label_30f8f8;
        case 0x30f8fcu: goto label_30f8fc;
        case 0x30f900u: goto label_30f900;
        case 0x30f904u: goto label_30f904;
        case 0x30f908u: goto label_30f908;
        case 0x30f90cu: goto label_30f90c;
        case 0x30f910u: goto label_30f910;
        case 0x30f914u: goto label_30f914;
        case 0x30f918u: goto label_30f918;
        case 0x30f91cu: goto label_30f91c;
        case 0x30f920u: goto label_30f920;
        case 0x30f924u: goto label_30f924;
        case 0x30f928u: goto label_30f928;
        case 0x30f92cu: goto label_30f92c;
        case 0x30f930u: goto label_30f930;
        case 0x30f934u: goto label_30f934;
        case 0x30f938u: goto label_30f938;
        case 0x30f93cu: goto label_30f93c;
        case 0x30f940u: goto label_30f940;
        case 0x30f944u: goto label_30f944;
        case 0x30f948u: goto label_30f948;
        case 0x30f94cu: goto label_30f94c;
        case 0x30f950u: goto label_30f950;
        case 0x30f954u: goto label_30f954;
        case 0x30f958u: goto label_30f958;
        case 0x30f95cu: goto label_30f95c;
        case 0x30f960u: goto label_30f960;
        case 0x30f964u: goto label_30f964;
        case 0x30f968u: goto label_30f968;
        case 0x30f96cu: goto label_30f96c;
        case 0x30f970u: goto label_30f970;
        case 0x30f974u: goto label_30f974;
        case 0x30f978u: goto label_30f978;
        case 0x30f97cu: goto label_30f97c;
        case 0x30f980u: goto label_30f980;
        case 0x30f984u: goto label_30f984;
        case 0x30f988u: goto label_30f988;
        case 0x30f98cu: goto label_30f98c;
        case 0x30f990u: goto label_30f990;
        case 0x30f994u: goto label_30f994;
        case 0x30f998u: goto label_30f998;
        case 0x30f99cu: goto label_30f99c;
        case 0x30f9a0u: goto label_30f9a0;
        case 0x30f9a4u: goto label_30f9a4;
        case 0x30f9a8u: goto label_30f9a8;
        case 0x30f9acu: goto label_30f9ac;
        case 0x30f9b0u: goto label_30f9b0;
        case 0x30f9b4u: goto label_30f9b4;
        case 0x30f9b8u: goto label_30f9b8;
        case 0x30f9bcu: goto label_30f9bc;
        case 0x30f9c0u: goto label_30f9c0;
        case 0x30f9c4u: goto label_30f9c4;
        case 0x30f9c8u: goto label_30f9c8;
        case 0x30f9ccu: goto label_30f9cc;
        case 0x30f9d0u: goto label_30f9d0;
        case 0x30f9d4u: goto label_30f9d4;
        case 0x30f9d8u: goto label_30f9d8;
        case 0x30f9dcu: goto label_30f9dc;
        case 0x30f9e0u: goto label_30f9e0;
        case 0x30f9e4u: goto label_30f9e4;
        case 0x30f9e8u: goto label_30f9e8;
        case 0x30f9ecu: goto label_30f9ec;
        case 0x30f9f0u: goto label_30f9f0;
        case 0x30f9f4u: goto label_30f9f4;
        case 0x30f9f8u: goto label_30f9f8;
        case 0x30f9fcu: goto label_30f9fc;
        case 0x30fa00u: goto label_30fa00;
        case 0x30fa04u: goto label_30fa04;
        case 0x30fa08u: goto label_30fa08;
        case 0x30fa0cu: goto label_30fa0c;
        case 0x30fa10u: goto label_30fa10;
        case 0x30fa14u: goto label_30fa14;
        case 0x30fa18u: goto label_30fa18;
        case 0x30fa1cu: goto label_30fa1c;
        case 0x30fa20u: goto label_30fa20;
        case 0x30fa24u: goto label_30fa24;
        case 0x30fa28u: goto label_30fa28;
        case 0x30fa2cu: goto label_30fa2c;
        case 0x30fa30u: goto label_30fa30;
        case 0x30fa34u: goto label_30fa34;
        case 0x30fa38u: goto label_30fa38;
        case 0x30fa3cu: goto label_30fa3c;
        case 0x30fa40u: goto label_30fa40;
        case 0x30fa44u: goto label_30fa44;
        case 0x30fa48u: goto label_30fa48;
        case 0x30fa4cu: goto label_30fa4c;
        case 0x30fa50u: goto label_30fa50;
        case 0x30fa54u: goto label_30fa54;
        case 0x30fa58u: goto label_30fa58;
        case 0x30fa5cu: goto label_30fa5c;
        case 0x30fa60u: goto label_30fa60;
        case 0x30fa64u: goto label_30fa64;
        case 0x30fa68u: goto label_30fa68;
        case 0x30fa6cu: goto label_30fa6c;
        case 0x30fa70u: goto label_30fa70;
        case 0x30fa74u: goto label_30fa74;
        case 0x30fa78u: goto label_30fa78;
        case 0x30fa7cu: goto label_30fa7c;
        case 0x30fa80u: goto label_30fa80;
        case 0x30fa84u: goto label_30fa84;
        case 0x30fa88u: goto label_30fa88;
        case 0x30fa8cu: goto label_30fa8c;
        case 0x30fa90u: goto label_30fa90;
        case 0x30fa94u: goto label_30fa94;
        default: break;
    }

    ctx->pc = 0x30f8b0u;

label_30f8b0:
    // 0x30f8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30f8b4:
    // 0x30f8b4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_30f8b8:
    // 0x30f8b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_30f8bc:
    // 0x30f8bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_30f8c0:
    // 0x30f8c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_30f8c4:
    // 0x30f8c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_30f8c8:
    // 0x30f8c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30f8cc:
    // 0x30f8cc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_30f8d0:
    // 0x30f8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30f8d4:
    // 0x30f8d4: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x30f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
label_30f8d8:
    // 0x30f8d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30f8dc:
    // 0x30f8dc: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x30f8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30f8e0:
    // 0x30f8e0: 0x12240063  beq         $s1, $a0, . + 4 + (0x63 << 2)
label_30f8e4:
    if (ctx->pc == 0x30F8E4u) {
        ctx->pc = 0x30F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8E0u;
        // 0x30f8e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F8E8u;
        goto label_30f8e8;
    }
    ctx->pc = 0x30F8E0u;
    {
        const bool branch_taken_0x30f8e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x30F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8E0u;
        // 0x30f8e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8e0) {
            ctx->pc = 0x30FA70u;
            goto label_30fa70;
        }
    }
    ctx->pc = 0x30F8E8u;
label_30f8e8:
    // 0x30f8e8: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x30f8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
label_30f8ec:
    // 0x30f8ec: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x30f8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
label_30f8f0:
    // 0x30f8f0: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x30f8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
label_30f8f4:
    // 0x30f8f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f8f8:
    // 0x30f8f8: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x30f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_30f8fc:
    // 0x30f8fc: 0x4610056  bgez        $v1, . + 4 + (0x56 << 2)
label_30f900:
    if (ctx->pc == 0x30F900u) {
        ctx->pc = 0x30F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8FCu;
        // 0x30f900: 0x3c062000  lui         $a2, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F904u;
        goto label_30f904;
    }
    ctx->pc = 0x30F8FCu;
    {
        const bool branch_taken_0x30f8fc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x30F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8FCu;
        // 0x30f900: 0x3c062000  lui         $a2, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8fc) {
            ctx->pc = 0x30FA58u;
            goto label_30fa58;
        }
    }
    ctx->pc = 0x30F904u;
label_30f904:
    // 0x30f904: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x30f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_30f908:
    // 0x30f908: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_30f90c:
    if (ctx->pc == 0x30F90Cu) {
        ctx->pc = 0x30F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F908u;
        // 0x30f90c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F910u;
        goto label_30f910;
    }
    ctx->pc = 0x30F908u;
    {
        const bool branch_taken_0x30f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F908u;
        // 0x30f90c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f908) {
            ctx->pc = 0x30FA3Cu;
            goto label_30fa3c;
        }
    }
    ctx->pc = 0x30F910u;
label_30f910:
    // 0x30f910: 0x948202fe  lhu         $v0, 0x2FE($a0)
    ctx->pc = 0x30f910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
label_30f914:
    // 0x30f914: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_30f918:
    if (ctx->pc == 0x30F918u) {
        ctx->pc = 0x30F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F914u;
        // 0x30f918: 0x8e424c58  lw          $v0, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F91Cu;
        goto label_30f91c;
    }
    ctx->pc = 0x30F914u;
    {
        const bool branch_taken_0x30f914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F914u;
        // 0x30f918: 0x8e424c58  lw          $v0, 0x4C58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f914) {
            ctx->pc = 0x30F9A4u;
            goto label_30f9a4;
        }
    }
    ctx->pc = 0x30F91Cu;
label_30f91c:
    // 0x30f91c: 0x8e824c38  lw          $v0, 0x4C38($s4)
    ctx->pc = 0x30f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19512)));
label_30f920:
    // 0x30f920: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f924:
    // 0x30f924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f928:
    // 0x30f928: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x30f928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f92c:
    // 0x30f92c: 0xc0c4b6e  jal         func_312DB8
label_30f930:
    if (ctx->pc == 0x30F930u) {
        ctx->pc = 0x30F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F92Cu;
        // 0x30f930: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F934u;
        goto label_30f934;
    }
    ctx->pc = 0x30F92Cu;
    SET_GPR_U32(ctx, 31, 0x30F934u);
    ctx->pc = 0x30F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F92Cu;
    // 0x30f930: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F92Cu, 0x30F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F934u;
label_30f934:
    // 0x30f934: 0x8e904c38  lw          $s0, 0x4C38($s4)
    ctx->pc = 0x30f934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19512)));
label_30f938:
    // 0x30f938: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x30f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30f93c:
    // 0x30f93c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f940:
    // 0x30f940: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30f944:
    if (ctx->pc == 0x30F944u) {
        ctx->pc = 0x30F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F940u;
        // 0x30f944: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F948u;
        goto label_30f948;
    }
    ctx->pc = 0x30F940u;
    {
        const bool branch_taken_0x30f940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F940u;
        // 0x30f944: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f940) {
            ctx->pc = 0x30F958u;
            goto label_30f958;
        }
    }
    ctx->pc = 0x30F948u;
label_30f948:
    // 0x30f948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f94c:
    // 0x30f94c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30f94cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30f950:
    // 0x30f950: 0xc0e947d  jal         func_3A51F4
label_30f954:
    if (ctx->pc == 0x30F954u) {
        ctx->pc = 0x30F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F950u;
        // 0x30f954: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F958u;
        goto label_30f958;
    }
    ctx->pc = 0x30F950u;
    SET_GPR_U32(ctx, 31, 0x30F958u);
    ctx->pc = 0x30F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F950u;
    // 0x30f954: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30F950u, 0x30F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F958u;
label_30f958:
    // 0x30f958: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f95c:
    // 0x30f95c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f960:
    // 0x30f960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f964:
    // 0x30f964: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30f968:
    // 0x30f968: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x30f968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30f96c:
    // 0x30f96c: 0x8e634c50  lw          $v1, 0x4C50($s3)
    ctx->pc = 0x30f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19536)));
label_30f970:
    // 0x30f970: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x30f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30f974:
    // 0x30f974: 0xc0c4b6e  jal         func_312DB8
label_30f978:
    if (ctx->pc == 0x30F978u) {
        ctx->pc = 0x30F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F974u;
        // 0x30f978: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F97Cu;
        goto label_30f97c;
    }
    ctx->pc = 0x30F974u;
    SET_GPR_U32(ctx, 31, 0x30F97Cu);
    ctx->pc = 0x30F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F974u;
    // 0x30f978: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F974u, 0x30F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F97Cu;
label_30f97c:
    // 0x30f97c: 0x8e704c50  lw          $s0, 0x4C50($s3)
    ctx->pc = 0x30f97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19536)));
label_30f980:
    // 0x30f980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f984:
    // 0x30f984: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f988:
    // 0x30f988: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x30f988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_30f98c:
    // 0x30f98c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_30f990:
    if (ctx->pc == 0x30F990u) {
        ctx->pc = 0x30F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F98Cu;
        // 0x30f990: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F994u;
        goto label_30f994;
    }
    ctx->pc = 0x30F98Cu;
    {
        const bool branch_taken_0x30f98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F98Cu;
        // 0x30f990: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f98c) {
            ctx->pc = 0x30F9E8u;
            goto label_30f9e8;
        }
    }
    ctx->pc = 0x30F994u;
label_30f994:
    // 0x30f994: 0x10a60011  beq         $a1, $a2, . + 4 + (0x11 << 2)
label_30f998:
    if (ctx->pc == 0x30F998u) {
        ctx->pc = 0x30F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F994u;
        // 0x30f998: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F99Cu;
        goto label_30f99c;
    }
    ctx->pc = 0x30F994u;
    {
        const bool branch_taken_0x30f994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F994u;
        // 0x30f998: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f994) {
            ctx->pc = 0x30F9DCu;
            goto label_30f9dc;
        }
    }
    ctx->pc = 0x30F99Cu;
label_30f99c:
    // 0x30f99c: 0x1000000d  b           . + 4 + (0xD << 2)
label_30f9a0:
    if (ctx->pc == 0x30F9A0u) {
        ctx->pc = 0x30F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F99Cu;
        // 0x30f9a0: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9A4u;
        goto label_30f9a4;
    }
    ctx->pc = 0x30F99Cu;
    {
        const bool branch_taken_0x30f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F99Cu;
        // 0x30f9a0: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f99c) {
            ctx->pc = 0x30F9D4u;
            goto label_30f9d4;
        }
    }
    ctx->pc = 0x30F9A4u;
label_30f9a4:
    // 0x30f9a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f9a8:
    // 0x30f9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f9ac:
    // 0x30f9ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x30f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f9b0:
    // 0x30f9b0: 0xc0c4b6e  jal         func_312DB8
label_30f9b4:
    if (ctx->pc == 0x30F9B4u) {
        ctx->pc = 0x30F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9B0u;
        // 0x30f9b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9B8u;
        goto label_30f9b8;
    }
    ctx->pc = 0x30F9B0u;
    SET_GPR_U32(ctx, 31, 0x30F9B8u);
    ctx->pc = 0x30F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9B0u;
    // 0x30f9b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DB8u, 0x30F9B0u, 0x30F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9B8u;
label_30f9b8:
    // 0x30f9b8: 0x8e504c58  lw          $s0, 0x4C58($s2)
    ctx->pc = 0x30f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
label_30f9bc:
    // 0x30f9bc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x30f9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30f9c0:
    // 0x30f9c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30f9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f9c4:
    // 0x30f9c4: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30f9c8:
    if (ctx->pc == 0x30F9C8u) {
        ctx->pc = 0x30F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9C4u;
        // 0x30f9c8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9CCu;
        goto label_30f9cc;
    }
    ctx->pc = 0x30F9C4u;
    {
        const bool branch_taken_0x30f9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9C4u;
        // 0x30f9c8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9c4) {
            ctx->pc = 0x30F9DCu;
            goto label_30f9dc;
        }
    }
    ctx->pc = 0x30F9CCu;
label_30f9cc:
    // 0x30f9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f9d0:
    // 0x30f9d0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30f9d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30f9d4:
    // 0x30f9d4: 0xc0e947d  jal         func_3A51F4
label_30f9d8:
    if (ctx->pc == 0x30F9D8u) {
        ctx->pc = 0x30F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9D4u;
        // 0x30f9d8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9DCu;
        goto label_30f9dc;
    }
    ctx->pc = 0x30F9D4u;
    SET_GPR_U32(ctx, 31, 0x30F9DCu);
    ctx->pc = 0x30F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9D4u;
    // 0x30f9d8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30F9D4u, 0x30F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9DCu;
label_30f9dc:
    // 0x30f9dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30f9e0:
    // 0x30f9e0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30f9e4:
    // 0x30f9e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x30f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30f9e8:
    // 0x30f9e8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x30f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f9ec:
    // 0x30f9ec: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_30f9f0:
    if (ctx->pc == 0x30F9F0u) {
        ctx->pc = 0x30F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9ECu;
        // 0x30f9f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F9F4u;
        goto label_30f9f4;
    }
    ctx->pc = 0x30F9ECu;
    {
        const bool branch_taken_0x30f9ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9ECu;
        // 0x30f9f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9ec) {
            ctx->pc = 0x30FA08u;
            goto label_30fa08;
        }
    }
    ctx->pc = 0x30F9F4u;
label_30f9f4:
    // 0x30f9f4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x30f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_30f9f8:
    // 0x30f9f8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x30f9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_30f9fc:
    // 0x30f9fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_30fa00:
    // 0x30fa00: 0x60f809  jalr        $v1
label_30fa04:
    if (ctx->pc == 0x30FA04u) {
        ctx->pc = 0x30FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA00u;
        // 0x30fa04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA08u;
        goto label_30fa08;
    }
    ctx->pc = 0x30FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30FA08u);
        ctx->pc = 0x30FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA00u;
        // 0x30fa04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA00u, 0x30FA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30FA08u;
label_30fa08:
    // 0x30fa08: 0x8eb04c30  lw          $s0, 0x4C30($s5)
    ctx->pc = 0x30fa08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30fa0c:
    // 0x30fa0c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x30fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30fa10:
    // 0x30fa10: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x30fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30fa14:
    // 0x30fa14: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
label_30fa18:
    if (ctx->pc == 0x30FA18u) {
        ctx->pc = 0x30FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA14u;
        // 0x30fa18: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA1Cu;
        goto label_30fa1c;
    }
    ctx->pc = 0x30FA14u;
    {
        const bool branch_taken_0x30fa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA14u;
        // 0x30fa18: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa14) {
            ctx->pc = 0x30FA2Cu;
            goto label_30fa2c;
        }
    }
    ctx->pc = 0x30FA1Cu;
label_30fa1c:
    // 0x30fa1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30fa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30fa20:
    // 0x30fa20: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x30fa20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_30fa24:
    // 0x30fa24: 0xc0e947d  jal         func_3A51F4
label_30fa28:
    if (ctx->pc == 0x30FA28u) {
        ctx->pc = 0x30FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA24u;
        // 0x30fa28: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA2Cu;
        goto label_30fa2c;
    }
    ctx->pc = 0x30FA24u;
    SET_GPR_U32(ctx, 31, 0x30FA2Cu);
    ctx->pc = 0x30FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA24u;
    // 0x30fa28: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x30FA24u, 0x30FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA2Cu;
label_30fa2c:
    // 0x30fa2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x30fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30fa30:
    // 0x30fa30: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x30fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_30fa34:
    // 0x30fa34: 0x1000000a  b           . + 4 + (0xA << 2)
label_30fa38:
    if (ctx->pc == 0x30FA38u) {
        ctx->pc = 0x30FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA34u;
        // 0x30fa38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA3Cu;
        goto label_30fa3c;
    }
    ctx->pc = 0x30FA34u;
    {
        const bool branch_taken_0x30fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA34u;
        // 0x30fa38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa34) {
            ctx->pc = 0x30FA60u;
            goto label_30fa60;
        }
    }
    ctx->pc = 0x30FA3Cu;
label_30fa3c:
    // 0x30fa3c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x30fa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_30fa40:
    // 0x30fa40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_30fa44:
    if (ctx->pc == 0x30FA44u) {
        ctx->pc = 0x30FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA40u;
        // 0x30fa44: 0x661025  or          $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA48u;
        goto label_30fa48;
    }
    ctx->pc = 0x30FA40u;
    {
        const bool branch_taken_0x30fa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA40u;
        // 0x30fa44: 0x661025  or          $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa40) {
            ctx->pc = 0x30FA4Cu;
            goto label_30fa4c;
        }
    }
    ctx->pc = 0x30FA48u;
label_30fa48:
    // 0x30fa48: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x30fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_30fa4c:
    // 0x30fa4c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30fa4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_30fa50:
    // 0x30fa50: 0x10000003  b           . + 4 + (0x3 << 2)
label_30fa54:
    if (ctx->pc == 0x30FA54u) {
        ctx->pc = 0x30FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA50u;
        // 0x30fa54: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA58u;
        goto label_30fa58;
    }
    ctx->pc = 0x30FA50u;
    {
        const bool branch_taken_0x30fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA50u;
        // 0x30fa54: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa50) {
            ctx->pc = 0x30FA60u;
            goto label_30fa60;
        }
    }
    ctx->pc = 0x30FA58u;
label_30fa58:
    // 0x30fa58: 0xc0c49c2  jal         func_312708
label_30fa5c:
    if (ctx->pc == 0x30FA5Cu) {
        ctx->pc = 0x30FA60u;
        goto label_30fa60;
    }
    ctx->pc = 0x30FA58u;
    SET_GPR_U32(ctx, 31, 0x30FA60u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x30FA58u, 0x30FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA60u;
label_30fa60:
    // 0x30fa60: 0x8ea24c30  lw          $v0, 0x4C30($s5)
    ctx->pc = 0x30fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30fa64:
    // 0x30fa64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x30fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30fa68:
    // 0x30fa68: 0x5623ffa3  bnel        $s1, $v1, . + 4 + (-0x5D << 2)
label_30fa6c:
    if (ctx->pc == 0x30FA6Cu) {
        ctx->pc = 0x30FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA68u;
        // 0x30fa6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA70u;
        goto label_30fa70;
    }
    ctx->pc = 0x30FA68u;
    {
        const bool branch_taken_0x30fa68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x30fa68) {
            ctx->pc = 0x30FA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FA68u;
            // 0x30fa6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f8f8;
        }
    }
    ctx->pc = 0x30FA70u;
label_30fa70:
    // 0x30fa70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30fa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30fa74:
    // 0x30fa74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30fa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30fa78:
    // 0x30fa78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30fa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30fa7c:
    // 0x30fa7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30fa7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30fa80:
    // 0x30fa80: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30fa80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30fa84:
    // 0x30fa84: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30fa84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30fa88:
    // 0x30fa88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30fa8c:
    // 0x30fa8c: 0x3e00008  jr          $ra
label_30fa90:
    if (ctx->pc == 0x30FA90u) {
        ctx->pc = 0x30FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA8Cu;
        // 0x30fa90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FA94u;
        goto label_30fa94;
    }
    ctx->pc = 0x30FA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA8Cu;
        // 0x30fa90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FA94u;
label_30fa94:
    // 0x30fa94: 0x0  nop
    ctx->pc = 0x30fa94u;
    // NOP
    ctx->pc = 0x30fa98u;
}
