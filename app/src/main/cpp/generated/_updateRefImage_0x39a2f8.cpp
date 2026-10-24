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

// Function: _updateRefImage
// Address: 0x39a2f8 - 0x39a5b0
void _updateRefImage_0x39a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateRefImage_0x39a2f8");
#endif

    ctx->pc = 0x39a2f8u;

    // 0x39a2f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x39a2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a2fc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x39a2fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39a300: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x39a300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x39a304: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x39a304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39a308: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x39a308u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x39a30c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39a30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a310: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x39a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x39a314: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39a314u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a318: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x39a318u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a31c: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x39A31Cu;
    {
        const bool branch_taken_0x39a31c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x39A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A31Cu;
        // 0x39a320: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a31c) {
            ctx->pc = 0x39A430u;
            goto label_39a430;
        }
    }
    ctx->pc = 0x39A324u;
    // 0x39a324: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x39a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x39a328: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x39a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x39a32c: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x39a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x39a330: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x39a330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x39a334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39a338: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x39a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x39a33c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x39a33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x39a340: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x39a340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x39a344: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x39a344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x39a348: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A348u;
    {
        const bool branch_taken_0x39a348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A348u;
        // 0x39a34c: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a348) {
            ctx->pc = 0x39A35Cu;
            goto label_39a35c;
        }
    }
    ctx->pc = 0x39A350u;
    // 0x39a350: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x39a350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x39a354: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x39a354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x39a358: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x39a358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_39a35c:
    // 0x39a35c: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x39a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x39a360: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A360u;
    {
        const bool branch_taken_0x39a360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a360) {
            ctx->pc = 0x39A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A360u;
            // 0x39a364: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A378u;
            goto label_39a378;
        }
    }
    ctx->pc = 0x39A368u;
    // 0x39a368: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x39a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x39a36c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x39A36Cu;
    {
        const bool branch_taken_0x39a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a36c) {
            ctx->pc = 0x39A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A36Cu;
            // 0x39a370: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A3A0u;
            goto label_39a3a0;
        }
    }
    ctx->pc = 0x39A374u;
    // 0x39a374: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x39a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_39a378:
    // 0x39a378: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A378u;
    {
        const bool branch_taken_0x39a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a378) {
            ctx->pc = 0x39A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A378u;
            // 0x39a37c: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A3A0u;
            goto label_39a3a0;
        }
    }
    ctx->pc = 0x39A380u;
    // 0x39a380: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x39a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x39a384: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x39a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x39a388: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x39a388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x39a38c: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x39a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x39a390: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x39a390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x39a394: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x39a394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x39a398: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x39a398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x39a39c: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x39a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_39a3a0:
    // 0x39a3a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a3a4: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A3A4u;
    {
        const bool branch_taken_0x39a3a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x39A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3A4u;
        // 0x39a3a8: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3a4) {
            ctx->pc = 0x39A3D4u;
            goto label_39a3d4;
        }
    }
    ctx->pc = 0x39A3ACu;
    // 0x39a3ac: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x39a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x39a3b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a3b4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x39a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x39a3b8: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39A3B8u;
    {
        const bool branch_taken_0x39a3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x39a3b8) {
            ctx->pc = 0x39A3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3B8u;
            // 0x39a3bc: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A41Cu;
            goto label_39a41c;
        }
    }
    ctx->pc = 0x39A3C0u;
    // 0x39a3c0: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x39a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x39a3c4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x39A3C4u;
    {
        const bool branch_taken_0x39a3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3C4u;
        // 0x39a3c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3c4) {
            ctx->pc = 0x39A4E8u;
            goto label_39a4e8;
        }
    }
    ctx->pc = 0x39A3CCu;
    // 0x39a3cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39A3CCu;
    {
        const bool branch_taken_0x39a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3CCu;
        // 0x39a3d0: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3cc) {
            ctx->pc = 0x39A41Cu;
            goto label_39a41c;
        }
    }
    ctx->pc = 0x39A3D4u;
label_39a3d4:
    // 0x39a3d4: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x39a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x39a3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a3dc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x39a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a3e0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A3E0u;
    {
        const bool branch_taken_0x39a3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39a3e0) {
            ctx->pc = 0x39A3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3E0u;
            // 0x39a3e4: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A3FCu;
            goto label_39a3fc;
        }
    }
    ctx->pc = 0x39A3E8u;
    // 0x39a3e8: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x39a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x39a3ec: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x39a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a3f0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A3F0u;
    {
        const bool branch_taken_0x39a3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x39a3f0) {
            ctx->pc = 0x39A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3F0u;
            // 0x39a3f4: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A408u;
            goto label_39a408;
        }
    }
    ctx->pc = 0x39A3F8u;
    // 0x39a3f8: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x39a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_39a3fc:
    // 0x39a3fc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x39A3FCu;
    {
        const bool branch_taken_0x39a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3FCu;
        // 0x39a400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3fc) {
            ctx->pc = 0x39A4E8u;
            goto label_39a4e8;
        }
    }
    ctx->pc = 0x39A404u;
    // 0x39a404: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x39a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_39a408:
    // 0x39a408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a40c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x39a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a410: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x39A410u;
    {
        const bool branch_taken_0x39a410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A410u;
        // 0x39a414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a410) {
            ctx->pc = 0x39A4E8u;
            goto label_39a4e8;
        }
    }
    ctx->pc = 0x39A418u;
    // 0x39a418: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x39a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_39a41c:
    // 0x39a41c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x39a41cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a420: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x39a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x39a424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39a424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x39a428: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x39A428u;
    {
        const bool branch_taken_0x39a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A428u;
        // 0x39a42c: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a428) {
            ctx->pc = 0x39A4E4u;
            goto label_39a4e4;
        }
    }
    ctx->pc = 0x39A430u;
label_39a430:
    // 0x39a430: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x39A430u;
    {
        const bool branch_taken_0x39a430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a430) {
            ctx->pc = 0x39A434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A430u;
            // 0x39a434: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A46Cu;
            goto label_39a46c;
        }
    }
    ctx->pc = 0x39A438u;
    // 0x39a438: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x39a438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x39a43c: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x39a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x39a440: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x39a440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x39a444: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x39a444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x39a448: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x39a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x39a44c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x39a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x39a450: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x39a450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x39a454: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x39a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x39a458: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x39a458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x39a45c: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x39a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x39a460: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x39a460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x39a464: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x39a464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x39a468: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x39a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_39a46c:
    // 0x39a46c: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x39a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x39a470: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x39a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x39a474: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x39a474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x39a478: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x39a478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x39a47c: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A47Cu;
    {
        const bool branch_taken_0x39a47c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x39A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A47Cu;
        // 0x39a480: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a47c) {
            ctx->pc = 0x39A498u;
            goto label_39a498;
        }
    }
    ctx->pc = 0x39A484u;
    // 0x39a484: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x39A484u;
    {
        const bool branch_taken_0x39a484 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x39a484) {
            ctx->pc = 0x39A488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A484u;
            // 0x39a488: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4E4u;
            goto label_39a4e4;
        }
    }
    ctx->pc = 0x39A48Cu;
    // 0x39a48c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x39a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x39a490: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39A490u;
    {
        const bool branch_taken_0x39a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A490u;
        // 0x39a494: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a490) {
            ctx->pc = 0x39A4D4u;
            goto label_39a4d4;
        }
    }
    ctx->pc = 0x39A498u;
label_39a498:
    // 0x39a498: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x39a498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x39a49c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39a49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a4a0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x39a4a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x39a4a4: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x39A4A4u;
    {
        const bool branch_taken_0x39a4a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x39A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4A4u;
        // 0x39a4a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4a4) {
            ctx->pc = 0x39A4E0u;
            goto label_39a4e0;
        }
    }
    ctx->pc = 0x39A4ACu;
    // 0x39a4ac: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A4ACu;
    {
        const bool branch_taken_0x39a4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a4ac) {
            ctx->pc = 0x39A4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A4ACu;
            // 0x39a4b0: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4C4u;
            goto label_39a4c4;
        }
    }
    ctx->pc = 0x39A4B4u;
    // 0x39a4b4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x39a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a4b8: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x39A4B8u;
    {
        const bool branch_taken_0x39a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x39a4b8) {
            ctx->pc = 0x39A4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A4B8u;
            // 0x39a4bc: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4E4u;
            goto label_39a4e4;
        }
    }
    ctx->pc = 0x39A4C0u;
    // 0x39a4c0: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x39a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_39a4c4:
    // 0x39a4c4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x39a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a4c8: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A4C8u;
    {
        const bool branch_taken_0x39a4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x39A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4C8u;
        // 0x39a4cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4c8) {
            ctx->pc = 0x39A4E8u;
            goto label_39a4e8;
        }
    }
    ctx->pc = 0x39A4D0u;
    // 0x39a4d0: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x39a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_39a4d4:
    // 0x39a4d4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x39a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39a4d8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A4D8u;
    {
        const bool branch_taken_0x39a4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x39A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4D8u;
        // 0x39a4dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4d8) {
            ctx->pc = 0x39A4E8u;
            goto label_39a4e8;
        }
    }
    ctx->pc = 0x39A4E0u;
label_39a4e0:
    // 0x39a4e0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x39a4e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a4e4:
    // 0x39a4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39a4e8:
    // 0x39a4e8: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39A4E8u;
    {
        const bool branch_taken_0x39a4e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4E8u;
        // 0x39a4ec: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4e8) {
            ctx->pc = 0x39A51Cu;
            goto label_39a51c;
        }
    }
    ctx->pc = 0x39A4F0u;
    // 0x39a4f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A4F0u;
    {
        const bool branch_taken_0x39a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A4F0u;
        // 0x39a4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a4f0) {
            ctx->pc = 0x39A508u;
            goto label_39a508;
        }
    }
    ctx->pc = 0x39A4F8u;
    // 0x39a4f8: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A4F8u;
    {
        const bool branch_taken_0x39a4f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a4f8) {
            ctx->pc = 0x39A4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A4F8u;
            // 0x39a4fc: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A520u;
            goto label_39a520;
        }
    }
    ctx->pc = 0x39A500u;
    // 0x39a500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39A500u;
    {
        const bool branch_taken_0x39a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A500u;
        // 0x39a504: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a500) {
            ctx->pc = 0x39A524u;
            goto label_39a524;
        }
    }
    ctx->pc = 0x39A508u;
label_39a508:
    // 0x39a508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a50c: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A50Cu;
    {
        const bool branch_taken_0x39a50c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a50c) {
            ctx->pc = 0x39A510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A50Cu;
            // 0x39a510: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A520u;
            goto label_39a520;
        }
    }
    ctx->pc = 0x39A514u;
    // 0x39a514: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39A514u;
    {
        const bool branch_taken_0x39a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A514u;
        // 0x39a518: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a514) {
            ctx->pc = 0x39A524u;
            goto label_39a524;
        }
    }
    ctx->pc = 0x39A51Cu;
label_39a51c:
    // 0x39a51c: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x39a51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_39a520:
    // 0x39a520: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x39a520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_39a524:
    // 0x39a524: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x39a524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a528: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x39a528u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x39a52c: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x39a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x39a530: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x39a530u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x39a534: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x39a534u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x39a538: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x39a538u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x39a53c: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x39a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x39a540: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x39a540u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x39a544: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x39a544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x39a548: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x39a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x39a54c: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x39a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x39a550: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x39a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x39a554: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x39a554u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x39a558: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x39a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x39a55c: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x39a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x39a560: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x39a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x39a564: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x39a564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x39a568: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x39a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x39a56c: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x39a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x39a570: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x39a570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x39a574: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x39a574u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x39a578: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x39a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x39a57c: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x39a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x39a580: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x39a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x39a584: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x39a584u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x39a588: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x39a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x39a58c: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x39a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x39a590: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x39a590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x39a594: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x39a594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x39a598: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x39a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x39a59c: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x39a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x39a5a0: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x39a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x39a5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x39A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5A4u;
        // 0x39a5a8: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A5ACu;
    // 0x39a5ac: 0x0  nop
    ctx->pc = 0x39a5acu;
    // NOP
    ctx->pc = 0x39a5b0u;
}
