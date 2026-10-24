#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A418
// Address: 0x79a418 - 0x79a7f0
void func_0079A418_0x79a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A418_0x79a418");
#endif

    switch (ctx->pc) {
        case 0x79a450u: goto label_79a450;
        case 0x79a480u: goto label_79a480;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a508u: goto label_79a508;
        case 0x79a538u: goto label_79a538;
        case 0x79a560u: goto label_79a560;
        case 0x79a584u: goto label_79a584;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a658u: goto label_79a658;
        case 0x79a688u: goto label_79a688;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a720u: goto label_79a720;
        case 0x79a740u: goto label_79a740;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a778u: goto label_79a778;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7c8u: goto label_79a7c8;
        default: break;
    }

    ctx->pc = 0x79a418u;

    // 0x79a418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a41c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a420: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a424: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a42c: 0x10a00078  beqz        $a1, . + 4 + (0x78 << 2)
    ctx->pc = 0x79A42Cu;
    {
        const bool branch_taken_0x79a42c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a42c) {
            ctx->pc = 0x79A610u;
            goto label_79a610;
        }
    }
    ctx->pc = 0x79A434u;
    // 0x79a434: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a438: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a43c: 0x24a5b660  addiu       $a1, $a1, -0x49A0
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948448));
    // 0x79a440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a444: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a448: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A448u;
    SET_GPR_U32(ctx, 31, 0x79A450u);
    ctx->pc = 0x79A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A448u;
    // 0x79a44c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A448u, 0x79A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A450u;
label_79a450:
    // 0x79a450: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a454: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a458: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a45c: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x79a460: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a46c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A46Cu;
    {
        const bool branch_taken_0x79a46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a46c) {
            ctx->pc = 0x79A4A8u;
            goto label_79a4a8;
        }
    }
    ctx->pc = 0x79A474u;
    // 0x79a474: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a478: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a47c: 0x0  nop
    ctx->pc = 0x79a47cu;
    // NOP
label_79a480:
    // 0x79a480: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a484: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a488: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a48c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a490: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a494: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A494u;
    {
        const bool branch_taken_0x79a494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A494u;
        // 0x79a498: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a494) {
            ctx->pc = 0x79A4A8u;
            goto label_79a4a8;
        }
    }
    ctx->pc = 0x79A49Cu;
    // 0x79a49c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A4A0u;
    {
        const bool branch_taken_0x79a4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4a0) {
            ctx->pc = 0x79A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4A0u;
            // 0x79a4a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A4A8u;
label_79a4a8:
    // 0x79a4a8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A4A8u;
    SET_GPR_U32(ctx, 31, 0x79A4B0u);
    ctx->pc = 0x79A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4A8u;
    // 0x79a4ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A4A8u, 0x79A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B0u;
label_79a4b0:
    // 0x79a4b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4b4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A4B4u;
    {
        const bool branch_taken_0x79a4b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B4u;
        // 0x79a4b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b4) {
            ctx->pc = 0x79A4DCu;
            goto label_79a4dc;
        }
    }
    ctx->pc = 0x79A4BCu;
    // 0x79a4bc: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a4c8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A4C8u;
    SET_GPR_U32(ctx, 31, 0x79A4D0u);
    ctx->pc = 0x79A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4C8u;
    // 0x79a4cc: 0xacc20250  sw          $v0, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A4C8u, 0x79A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D0u;
label_79a4d0:
    // 0x79a4d0: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a4d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x79a4d8: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x79a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_79a4dc:
    // 0x79a4dc: 0x2625b668  addiu       $a1, $s1, -0x4998
    ctx->pc = 0x79a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948456));
    // 0x79a4e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4e4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A4E4u;
    SET_GPR_U32(ctx, 31, 0x79A4ECu);
    ctx->pc = 0x79A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E4u;
    // 0x79a4e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A4E4u, 0x79A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4ECu;
label_79a4ec:
    // 0x79a4ec: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a4f0: 0x26484c38  addiu       $t0, $s2, 0x4C38
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
    // 0x79a4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79A530u;
            goto label_79a530;
        }
    }
    ctx->pc = 0x79A500u;
    // 0x79a500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a504: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a508:
    // 0x79a508: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a50c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a514: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a518: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a51c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A51Cu;
    {
        const bool branch_taken_0x79a51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a51c) {
            ctx->pc = 0x79A530u;
            goto label_79a530;
        }
    }
    ctx->pc = 0x79A524u;
    // 0x79a524: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a528: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A528u;
    {
        const bool branch_taken_0x79a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a528) {
            ctx->pc = 0x79A52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A528u;
            // 0x79a52c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A530u;
    SET_GPR_U32(ctx, 31, 0x79A538u);
    ctx->pc = 0x79A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A530u;
    // 0x79a534: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A530u, 0x79A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A538u;
label_79a538:
    // 0x79a538: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a53c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x79A53Cu;
    {
        const bool branch_taken_0x79a53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A53Cu;
        // 0x79a540: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a53c) {
            ctx->pc = 0x79A574u;
            goto label_79a574;
        }
    }
    ctx->pc = 0x79A544u;
    // 0x79a544: 0x8cc30250  lw          $v1, 0x250($a2)
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a548: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a54c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a550: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a558: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0xacc30250  sw          $v1, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a564: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x79a568: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x79a56c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79a56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a570: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x79a570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
label_79a574:
    // 0x79a574: 0x2665b670  addiu       $a1, $s3, -0x4990
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948464));
    // 0x79a578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a57c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A57Cu;
    SET_GPR_U32(ctx, 31, 0x79A584u);
    ctx->pc = 0x79A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A57Cu;
    // 0x79a580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A57Cu, 0x79A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A584u;
label_79a584:
    // 0x79a584: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a588: 0x26484c38  addiu       $t0, $s2, 0x4C38
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
    // 0x79a58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a590: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A590u;
    {
        const bool branch_taken_0x79a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a590) {
            ctx->pc = 0x79A5C8u;
            goto label_79a5c8;
        }
    }
    ctx->pc = 0x79A598u;
    // 0x79a598: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a59c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a5a0:
    // 0x79a5a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a5a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a5a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a5ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a5b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a5b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A5B4u;
    {
        const bool branch_taken_0x79a5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B4u;
        // 0x79a5b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5b4) {
            ctx->pc = 0x79A5C8u;
            goto label_79a5c8;
        }
    }
    ctx->pc = 0x79A5BCu;
    // 0x79a5bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a5c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A5C0u;
    {
        const bool branch_taken_0x79a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5c0) {
            ctx->pc = 0x79A5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5C0u;
            // 0x79a5c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5a0;
        }
    }
    ctx->pc = 0x79A5C8u;
label_79a5c8:
    // 0x79a5c8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5d4: 0x10c0007f  beqz        $a2, . + 4 + (0x7F << 2)
    ctx->pc = 0x79A5D4u;
    {
        const bool branch_taken_0x79a5d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D4u;
        // 0x79a5d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d4) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A5DCu;
    // 0x79a5dc: 0x8cc30250  lw          $v1, 0x250($a2)
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a5e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a5e4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a5e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A5F0u;
    SET_GPR_U32(ctx, 31, 0x79A5F8u);
    ctx->pc = 0x79A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5F0u;
    // 0x79a5f4: 0xacc30250  sw          $v1, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A5F0u, 0x79A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5F8u;
label_79a5f8:
    // 0x79a5f8: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a5fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x79a600: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x79a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x79a604: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79a604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a608: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x79A608u;
    {
        const bool branch_taken_0x79a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A608u;
        // 0x79a60c: 0xac440380  sw          $a0, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a608) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A610u;
label_79a610:
    // 0x79a610: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a614: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a618: 0x24a5b660  addiu       $a1, $a1, -0x49A0
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948448));
    // 0x79a61c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a620: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a624: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A624u;
    SET_GPR_U32(ctx, 31, 0x79A62Cu);
    ctx->pc = 0x79A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A624u;
    // 0x79a628: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A624u, 0x79A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A62Cu;
label_79a62c:
    // 0x79a62c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a630: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a634: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a638: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x79a63c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a648: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A648u;
    {
        const bool branch_taken_0x79a648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A648u;
        // 0x79a64c: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a648) {
            ctx->pc = 0x79A680u;
            goto label_79a680;
        }
    }
    ctx->pc = 0x79A650u;
    // 0x79a650: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a654: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a658:
    // 0x79a658: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a65c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a660: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a664: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a668: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a66c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A66Cu;
    {
        const bool branch_taken_0x79a66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A66Cu;
        // 0x79a670: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a66c) {
            ctx->pc = 0x79A680u;
            goto label_79a680;
        }
    }
    ctx->pc = 0x79A674u;
    // 0x79a674: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a678: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A678u;
    {
        const bool branch_taken_0x79a678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a678) {
            ctx->pc = 0x79A67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A678u;
            // 0x79a67c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a658;
        }
    }
    ctx->pc = 0x79A680u;
label_79a680:
    // 0x79a680: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A680u;
    SET_GPR_U32(ctx, 31, 0x79A688u);
    ctx->pc = 0x79A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A680u;
    // 0x79a684: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A680u, 0x79A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A688u;
label_79a688:
    // 0x79a688: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a68c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x79A68Cu;
    {
        const bool branch_taken_0x79a68c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A68Cu;
        // 0x79a690: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a68c) {
            ctx->pc = 0x79A6C4u;
            goto label_79a6c4;
        }
    }
    ctx->pc = 0x79A694u;
    // 0x79a694: 0x8cc30250  lw          $v1, 0x250($a2)
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a698: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a69c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a6a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6a8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A6A8u;
    SET_GPR_U32(ctx, 31, 0x79A6B0u);
    ctx->pc = 0x79A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A8u;
    // 0x79a6ac: 0xacc30250  sw          $v1, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A6A8u, 0x79A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B0u;
label_79a6b0:
    // 0x79a6b0: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a6b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x79a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x79a6b8: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x79a6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x79a6bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79a6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a6c0: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x79a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
label_79a6c4:
    // 0x79a6c4: 0x2625b668  addiu       $a1, $s1, -0x4998
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948456));
    // 0x79a6c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6cc: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A6CCu;
    SET_GPR_U32(ctx, 31, 0x79A6D4u);
    ctx->pc = 0x79A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6CCu;
    // 0x79a6d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A6CCu, 0x79A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D4u;
label_79a6d4:
    // 0x79a6d4: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6d8: 0x26484c38  addiu       $t0, $s2, 0x4C38
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
    // 0x79a6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A6E0u;
    {
        const bool branch_taken_0x79a6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6E0u;
        // 0x79a6e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6e0) {
            ctx->pc = 0x79A718u;
            goto label_79a718;
        }
    }
    ctx->pc = 0x79A6E8u;
    // 0x79a6e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a6f0:
    // 0x79a6f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a6f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a6f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a6fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a700: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a704: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A718u;
            goto label_79a718;
        }
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a710: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A710u;
    {
        const bool branch_taken_0x79a710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a710) {
            ctx->pc = 0x79A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A710u;
            // 0x79a714: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6f0;
        }
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A718u;
    SET_GPR_U32(ctx, 31, 0x79A720u);
    ctx->pc = 0x79A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A718u;
    // 0x79a71c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A718u, 0x79A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A720u;
label_79a720:
    // 0x79a720: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a724: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A724u;
    {
        const bool branch_taken_0x79a724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a724) {
            ctx->pc = 0x79A74Cu;
            goto label_79a74c;
        }
    }
    ctx->pc = 0x79A72Cu;
    // 0x79a72c: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a734: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a738: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A738u;
    SET_GPR_U32(ctx, 31, 0x79A740u);
    ctx->pc = 0x79A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A738u;
    // 0x79a73c: 0xacc20250  sw          $v0, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A738u, 0x79A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A740u;
label_79a740:
    // 0x79a740: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a744: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x79a744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x79a748: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x79a748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_79a74c:
    // 0x79a74c: 0x2665b670  addiu       $a1, $s3, -0x4990
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948464));
    // 0x79a750: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a754: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x79A754u;
    SET_GPR_U32(ctx, 31, 0x79A75Cu);
    ctx->pc = 0x79A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A754u;
    // 0x79a758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x79A754u, 0x79A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A75Cu;
label_79a75c:
    // 0x79a75c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a760: 0x26484c38  addiu       $t0, $s2, 0x4C38
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
    // 0x79a764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a768: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A768u;
    {
        const bool branch_taken_0x79a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a768) {
            ctx->pc = 0x79A7A0u;
            goto label_79a7a0;
        }
    }
    ctx->pc = 0x79A770u;
    // 0x79a770: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a774: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a778:
    // 0x79a778: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a77c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a784: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a788: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a78c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A78Cu;
    {
        const bool branch_taken_0x79a78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A78Cu;
        // 0x79a790: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a78c) {
            ctx->pc = 0x79A7A0u;
            goto label_79a7a0;
        }
    }
    ctx->pc = 0x79A794u;
    // 0x79a794: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a798: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A798u;
    {
        const bool branch_taken_0x79a798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a798) {
            ctx->pc = 0x79A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A798u;
            // 0x79a79c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a778;
        }
    }
    ctx->pc = 0x79A7A0u;
label_79a7a0:
    // 0x79a7a0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A7A0u;
    SET_GPR_U32(ctx, 31, 0x79A7A8u);
    ctx->pc = 0x79A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A0u;
    // 0x79a7a4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A7A0u, 0x79A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7A8u;
label_79a7a8:
    // 0x79a7a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7ac: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A7ACu;
    {
        const bool branch_taken_0x79a7ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ACu;
        // 0x79a7b0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7ac) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A7B4u;
    // 0x79a7b4: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x79a7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a7c0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x79A7C0u;
    SET_GPR_U32(ctx, 31, 0x79A7C8u);
    ctx->pc = 0x79A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C0u;
    // 0x79a7c4: 0xacc20250  sw          $v0, 0x250($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x79A7C0u, 0x79A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x79a7cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x79a7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x79a7d0: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x79a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_79a7d4:
    // 0x79a7d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a7d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a7dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a7e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a7e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a7e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7F0u;
}
} // namespace gh_r607
