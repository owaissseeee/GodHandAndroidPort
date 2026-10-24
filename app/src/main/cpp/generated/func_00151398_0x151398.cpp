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

// Function: func_00151398
// Address: 0x151398 - 0x151630
void func_00151398_0x151398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151398_0x151398");
#endif

    switch (ctx->pc) {
        case 0x151400u: goto label_151400;
        case 0x151470u: goto label_151470;
        case 0x15149cu: goto label_15149c;
        case 0x1514d0u: goto label_1514d0;
        case 0x151544u: goto label_151544;
        case 0x15159cu: goto label_15159c;
        case 0x1515bcu: goto label_1515bc;
        case 0x1515dcu: goto label_1515dc;
        case 0x1515fcu: goto label_1515fc;
        default: break;
    }

    ctx->pc = 0x151398u;

    // 0x151398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x151398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15139c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x15139cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1513a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1513a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1513a4: 0x3463c990  ori         $v1, $v1, 0xC990
    ctx->pc = 0x1513a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51600);
    // 0x1513a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1513a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1513ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1513acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1513b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1513b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1513b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1513b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1513bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1513bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1513c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1513c4: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x1513c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1513c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1513c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1513cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1513ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1513d0: 0x1682001a  bne         $s4, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1513D0u;
    {
        const bool branch_taken_0x1513d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1513D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513D0u;
        // 0x1513d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513d0) {
            ctx->pc = 0x15143Cu;
            goto label_15143c;
        }
    }
    ctx->pc = 0x1513D8u;
    // 0x1513d8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1513dc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1513e0: 0x3442d2f0  ori         $v0, $v0, 0xD2F0
    ctx->pc = 0x1513e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54000);
    // 0x1513e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1513e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1513e8: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1513ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1513ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1513f0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1513F0u;
    {
        const bool branch_taken_0x1513f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513F0u;
        // 0x1513f4: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513f0) {
            ctx->pc = 0x15141Cu;
            goto label_15141c;
        }
    }
    ctx->pc = 0x1513F8u;
    // 0x1513f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1513f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1513fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1513fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_151400:
    // 0x151400: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x151400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151404: 0x5053007e  beql        $v0, $s3, . + 4 + (0x7E << 2)
    ctx->pc = 0x151404u;
    {
        const bool branch_taken_0x151404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x151404) {
            ctx->pc = 0x151408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151404u;
            // 0x151408: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x15140Cu;
    // 0x15140c: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x15140cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x151410: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x151410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151414: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151414u;
    {
        const bool branch_taken_0x151414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x151418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151414u;
        // 0x151418: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151414) {
            ctx->pc = 0x151400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151400;
        }
    }
    ctx->pc = 0x15141Cu;
label_15141c:
    // 0x15141c: 0x3442c9a0  ori         $v0, $v0, 0xC9A0
    ctx->pc = 0x15141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51616);
    // 0x151420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x151424: 0x1102001d  beq         $t0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x151424u;
    {
        const bool branch_taken_0x151424 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x151428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151424u;
        // 0x151428: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151424) {
            ctx->pc = 0x15149Cu;
            goto label_15149c;
        }
    }
    ctx->pc = 0x15142Cu;
    // 0x15142c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x15142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x151430: 0x3442dc6c  ori         $v0, $v0, 0xDC6C
    ctx->pc = 0x151430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56428);
    // 0x151434: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x151434u;
    {
        const bool branch_taken_0x151434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151434u;
        // 0x151438: 0x3463dc70  ori         $v1, $v1, 0xDC70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56432);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151434) {
            ctx->pc = 0x151508u;
            goto label_151508;
        }
    }
    ctx->pc = 0x15143Cu;
label_15143c:
    // 0x15143c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151440: 0x5682001c  bnel        $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x151440u;
    {
        const bool branch_taken_0x151440 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x151440) {
            ctx->pc = 0x151444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151440u;
            // 0x151444: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1514B4u;
            goto label_1514b4;
        }
    }
    ctx->pc = 0x151448u;
    // 0x151448: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x151448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x15144c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x15144cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x151450: 0x3442dc50  ori         $v0, $v0, 0xDC50
    ctx->pc = 0x151450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56400);
    // 0x151454: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151458: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x151458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15145c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x15145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151460: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x151460u;
    {
        const bool branch_taken_0x151460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x151464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151460u;
        // 0x151464: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151460) {
            ctx->pc = 0x15148Cu;
            goto label_15148c;
        }
    }
    ctx->pc = 0x151468u;
    // 0x151468: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x151468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x15146c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15146cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_151470:
    // 0x151470: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151474: 0x50530062  beql        $v0, $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x151474u;
    {
        const bool branch_taken_0x151474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x151474) {
            ctx->pc = 0x151478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151474u;
            // 0x151478: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x15147Cu;
    // 0x15147c: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x15147cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x151480: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151484: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151484u;
    {
        const bool branch_taken_0x151484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x151488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151484u;
        // 0x151488: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151484) {
            ctx->pc = 0x151470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151470;
        }
    }
    ctx->pc = 0x15148Cu;
label_15148c:
    // 0x15148c: 0x3442d300  ori         $v0, $v0, 0xD300
    ctx->pc = 0x15148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54016);
    // 0x151490: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x151494: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151494u;
    {
        const bool branch_taken_0x151494 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x151498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151494u;
        // 0x151498: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151494) {
            ctx->pc = 0x1514A4u;
            goto label_1514a4;
        }
    }
    ctx->pc = 0x15149Cu;
label_15149c:
    // 0x15149c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x15149Cu;
    {
        const bool branch_taken_0x15149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15149Cu;
        // 0x1514a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15149c) {
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1514A4u;
label_1514a4:
    // 0x1514a4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1514a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1514a8: 0x3442dc78  ori         $v0, $v0, 0xDC78
    ctx->pc = 0x1514a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56440);
    // 0x1514ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1514ACu;
    {
        const bool branch_taken_0x1514ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514ACu;
        // 0x1514b0: 0x3463dc7c  ori         $v1, $v1, 0xDC7C (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56444);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514ac) {
            ctx->pc = 0x151508u;
            goto label_151508;
        }
    }
    ctx->pc = 0x1514B4u;
label_1514b4:
    // 0x1514b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1514b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1514b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1514bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1514BCu;
    {
        const bool branch_taken_0x1514bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1514C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514BCu;
        // 0x1514c0: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514bc) {
            ctx->pc = 0x1514ECu;
            goto label_1514ec;
        }
    }
    ctx->pc = 0x1514C4u;
    // 0x1514c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1514c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1514c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1514cc: 0x0  nop
    ctx->pc = 0x1514ccu;
    // NOP
label_1514d0:
    // 0x1514d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1514d4: 0x5053004a  beql        $v0, $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x1514D4u;
    {
        const bool branch_taken_0x1514d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1514d4) {
            ctx->pc = 0x1514D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1514D4u;
            // 0x1514d8: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1514DCu;
    // 0x1514dc: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x1514dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x1514e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1514e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1514e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1514E4u;
    {
        const bool branch_taken_0x1514e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1514E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514E4u;
        // 0x1514e8: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514e4) {
            ctx->pc = 0x1514D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1514d0;
        }
    }
    ctx->pc = 0x1514ECu;
label_1514ec:
    // 0x1514ec: 0x3442c040  ori         $v0, $v0, 0xC040
    ctx->pc = 0x1514ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49216);
    // 0x1514f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1514f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1514f4: 0x1102ffe9  beq         $t0, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1514F4u;
    {
        const bool branch_taken_0x1514f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1514F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514F4u;
        // 0x1514f8: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514f4) {
            ctx->pc = 0x15149Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15149c;
        }
    }
    ctx->pc = 0x1514FCu;
    // 0x1514fc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1514fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x151500: 0x3442dc60  ori         $v0, $v0, 0xDC60
    ctx->pc = 0x151500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56416);
    // 0x151504: 0x3463dc64  ori         $v1, $v1, 0xDC64
    ctx->pc = 0x151504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56420);
label_151508:
    // 0x151508: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15150c: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x15150cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x151510: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x151510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x151514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x151514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151518: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x151518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x15151c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x15151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x151520: 0x94b578a8  lhu         $s5, 0x78A8($a1)
    ctx->pc = 0x151520u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30888)));
    // 0x151524: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x151524u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
    // 0x151528: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x151528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15152c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x15152cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x151530: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151534: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x151534u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x151538: 0x94a278a8  lhu         $v0, 0x78A8($a1)
    ctx->pc = 0x151538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30888)));
    // 0x15153c: 0xc05458c  jal         func_151630
    ctx->pc = 0x15153Cu;
    SET_GPR_U32(ctx, 31, 0x151544u);
    ctx->pc = 0x151540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15153Cu;
    // 0x151540: 0xad02000c  sw          $v0, 0xC($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x15153Cu, 0x151544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151544u;
label_151544:
    // 0x151544: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x151544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15154c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15154Cu;
    {
        const bool branch_taken_0x15154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15154Cu;
        // 0x151550: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15154c) {
            ctx->pc = 0x1515A4u;
            goto label_1515a4;
        }
    }
    ctx->pc = 0x151554u;
    // 0x151554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151554u;
    {
        const bool branch_taken_0x151554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151554u;
        // 0x151558: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151554) {
            ctx->pc = 0x15156Cu;
            goto label_15156c;
        }
    }
    ctx->pc = 0x15155Cu;
    // 0x15155c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15155Cu;
    {
        const bool branch_taken_0x15155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15155Cu;
        // 0x151560: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15155c) {
            ctx->pc = 0x151584u;
            goto label_151584;
        }
    }
    ctx->pc = 0x151564u;
    // 0x151564: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x151564u;
    {
        const bool branch_taken_0x151564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151564u;
        // 0x151568: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151564) {
            ctx->pc = 0x151604u;
            goto label_151604;
        }
    }
    ctx->pc = 0x15156Cu;
label_15156c:
    // 0x15156c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15156Cu;
    {
        const bool branch_taken_0x15156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15156Cu;
        // 0x151570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15156c) {
            ctx->pc = 0x1515C4u;
            goto label_1515c4;
        }
    }
    ctx->pc = 0x151574u;
    // 0x151574: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x151574u;
    {
        const bool branch_taken_0x151574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151574u;
        // 0x151578: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151574) {
            ctx->pc = 0x1515E4u;
            goto label_1515e4;
        }
    }
    ctx->pc = 0x15157Cu;
    // 0x15157c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15157Cu;
    {
        const bool branch_taken_0x15157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15157Cu;
        // 0x151580: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15157c) {
            ctx->pc = 0x151604u;
            goto label_151604;
        }
    }
    ctx->pc = 0x151584u;
label_151584:
    // 0x151584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151588: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15158c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151590: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x151590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151594: 0xc054664  jal         func_151990
    ctx->pc = 0x151594u;
    SET_GPR_U32(ctx, 31, 0x15159Cu);
    ctx->pc = 0x151598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151594u;
    // 0x151598: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151990u, 0x151594u, 0x15159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15159Cu;
label_15159c:
    // 0x15159c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15159Cu;
    {
        const bool branch_taken_0x15159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15159Cu;
        // 0x1515a0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15159c) {
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1515A4u;
label_1515a4:
    // 0x1515a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1515a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1515a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1515acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1515b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515b4: 0xc054730  jal         func_151CC0
    ctx->pc = 0x1515B4u;
    SET_GPR_U32(ctx, 31, 0x1515BCu);
    ctx->pc = 0x1515B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515B4u;
    // 0x1515b8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CC0u, 0x1515B4u, 0x1515BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515BCu;
label_1515bc:
    // 0x1515bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1515BCu;
    {
        const bool branch_taken_0x1515bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515BCu;
        // 0x1515c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515bc) {
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1515C4u;
label_1515c4:
    // 0x1515c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1515c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1515c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1515ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1515d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515d4: 0xc0545a2  jal         func_151688
    ctx->pc = 0x1515D4u;
    SET_GPR_U32(ctx, 31, 0x1515DCu);
    ctx->pc = 0x1515D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515D4u;
    // 0x1515d8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151688u, 0x1515D4u, 0x1515DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515DCu;
label_1515dc:
    // 0x1515dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1515DCu;
    {
        const bool branch_taken_0x1515dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515DCu;
        // 0x1515e0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515dc) {
            ctx->pc = 0x151600u;
            goto label_151600;
        }
    }
    ctx->pc = 0x1515E4u;
label_1515e4:
    // 0x1515e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1515e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1515e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1515ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1515f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515f4: 0xc0547e8  jal         func_151FA0
    ctx->pc = 0x1515F4u;
    SET_GPR_U32(ctx, 31, 0x1515FCu);
    ctx->pc = 0x1515F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515F4u;
    // 0x1515f8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151FA0u, 0x1515F4u, 0x1515FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515FCu;
label_1515fc:
    // 0x1515fc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1515fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_151600:
    // 0x151600: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x151600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_151604:
    // 0x151604: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x151604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151608: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x151608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15160c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15160cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151610: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x151610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151614: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x151614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15161c: 0x3e00008  jr          $ra
    ctx->pc = 0x15161Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15161Cu;
        // 0x151620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15161Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151624u;
    // 0x151624: 0x0  nop
    ctx->pc = 0x151624u;
    // NOP
    // 0x151628: 0x0  nop
    ctx->pc = 0x151628u;
    // NOP
    // 0x15162c: 0x0  nop
    ctx->pc = 0x15162cu;
    // NOP
    ctx->pc = 0x151630u;
}
