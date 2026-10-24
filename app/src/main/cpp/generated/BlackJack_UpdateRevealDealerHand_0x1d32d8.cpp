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

// Function: BlackJack_UpdateRevealDealerHand
// Address: 0x1d32d8 - 0x1d3430
void BlackJack_UpdateRevealDealerHand_0x1d32d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateRevealDealerHand_0x1d32d8");
#endif

    switch (ctx->pc) {
        case 0x1d3360u: goto label_1d3360;
        case 0x1d336cu: goto label_1d336c;
        case 0x1d3398u: goto label_1d3398;
        case 0x1d33d0u: goto label_1d33d0;
        default: break;
    }

    ctx->pc = 0x1d32d8u;

    // 0x1d32d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d32d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d32dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d32e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d32e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d32e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d32e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d32e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d32e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d32f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d32f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d32f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d32f8: 0x8e231808  lw          $v1, 0x1808($s1)
    ctx->pc = 0x1d32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
    // 0x1d32fc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D32FCu;
    {
        const bool branch_taken_0x1d32fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d32fc) {
            ctx->pc = 0x1D3300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D32FCu;
            // 0x1d3300: 0x8e23180c  lw          $v1, 0x180C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3338u;
            goto label_1d3338;
        }
    }
    ctx->pc = 0x1D3304u;
    // 0x1d3304: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3304u;
    {
        const bool branch_taken_0x1d3304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3304u;
        // 0x1d3308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3304) {
            ctx->pc = 0x1D3324u;
            goto label_1d3324;
        }
    }
    ctx->pc = 0x1D330Cu;
    // 0x1d330c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D330Cu;
    {
        const bool branch_taken_0x1d330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D330Cu;
        // 0x1d3310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d330c) {
            ctx->pc = 0x1D33B8u;
            goto label_1d33b8;
        }
    }
    ctx->pc = 0x1D3314u;
    // 0x1d3314: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D3314u;
    {
        const bool branch_taken_0x1d3314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3314u;
        // 0x1d3318: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3314) {
            ctx->pc = 0x1D3408u;
            goto label_1d3408;
        }
    }
    ctx->pc = 0x1D331Cu;
    // 0x1d331c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1D331Cu;
    {
        const bool branch_taken_0x1d331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D331Cu;
        // 0x1d3320: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d331c) {
            ctx->pc = 0x1D341Cu;
            goto label_1d341c;
        }
    }
    ctx->pc = 0x1D3324u;
label_1d3324:
    // 0x1d3324: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3328: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d3328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d332c: 0xae221808  sw          $v0, 0x1808($s1)
    ctx->pc = 0x1d332cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 2));
    // 0x1d3330: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D3330u;
    {
        const bool branch_taken_0x1d3330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3330u;
        // 0x1d3334: 0xae23180c  sw          $v1, 0x180C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3330) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D3338u;
label_1d3338:
    // 0x1d3338: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3338u;
    {
        const bool branch_taken_0x1d3338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3338u;
        // 0x1d333c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3338) {
            ctx->pc = 0x1D33B0u;
            goto label_1d33b0;
        }
    }
    ctx->pc = 0x1D3340u;
    // 0x1d3340: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d3340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d3344: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d3344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3348: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D3348u;
    {
        const bool branch_taken_0x1d3348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3348u;
        // 0x1d334c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3348) {
            ctx->pc = 0x1D33F8u;
            goto label_1d33f8;
        }
    }
    ctx->pc = 0x1D3350u;
    // 0x1d3350: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1d3350u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x1d3354: 0x263017e8  addiu       $s0, $s1, 0x17E8
    ctx->pc = 0x1d3354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6120));
    // 0x1d3358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d335c: 0x0  nop
    ctx->pc = 0x1d335cu;
    // NOP
label_1d3360:
    // 0x1d3360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3364: 0xc074326  jal         func_1D0C98
    ctx->pc = 0x1D3364u;
    SET_GPR_U32(ctx, 31, 0x1D336Cu);
    ctx->pc = 0x1D3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3364u;
    // 0x1d3368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D3364u, 0x1D336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D336Cu;
label_1d336c:
    // 0x1d336c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3370: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
    // 0x1d3374: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d337c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d3384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d338c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d338cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3390: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D3390u;
    SET_GPR_U32(ctx, 31, 0x1D3398u);
    ctx->pc = 0x1D3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3390u;
    // 0x1d3394: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D3390u, 0x1D3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3398u;
label_1d3398:
    // 0x1d3398: 0x962317fe  lhu         $v1, 0x17FE($s1)
    ctx->pc = 0x1d3398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d339c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1d339cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d33a0: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D33A0u;
    {
        const bool branch_taken_0x1d33a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d33a0) {
            ctx->pc = 0x1D33A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D33A0u;
            // 0x1d33a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3360;
        }
    }
    ctx->pc = 0x1D33A8u;
    // 0x1d33a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D33A8u;
    {
        const bool branch_taken_0x1d33a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33A8u;
        // 0x1d33ac: 0x8e221808  lw          $v0, 0x1808($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33a8) {
            ctx->pc = 0x1D33FCu;
            goto label_1d33fc;
        }
    }
    ctx->pc = 0x1D33B0u;
label_1d33b0:
    // 0x1d33b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D33B0u;
    {
        const bool branch_taken_0x1d33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33B0u;
        // 0x1d33b4: 0xae22180c  sw          $v0, 0x180C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33b0) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D33B8u;
label_1d33b8:
    // 0x1d33b8: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d33b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d33bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D33BCu;
    {
        const bool branch_taken_0x1d33bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33BCu;
        // 0x1d33c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33bc) {
            ctx->pc = 0x1D33F0u;
            goto label_1d33f0;
        }
    }
    ctx->pc = 0x1D33C4u;
    // 0x1d33c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d33c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33c8: 0x262417e8  addiu       $a0, $s1, 0x17E8
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6120));
    // 0x1d33cc: 0x0  nop
    ctx->pc = 0x1d33ccu;
    // NOP
label_1d33d0:
    // 0x1d33d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d33d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d33d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d33dc: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d33dcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d33e0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d33e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d33e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d33e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d33e8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D33E8u;
    {
        const bool branch_taken_0x1d33e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33E8u;
        // 0x1d33ec: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33e8) {
            ctx->pc = 0x1D33D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d33d0;
        }
    }
    ctx->pc = 0x1D33F0u;
label_1d33f0:
    // 0x1d33f0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D33F0u;
    {
        const bool branch_taken_0x1d33f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F0u;
        // 0x1d33f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f0) {
            ctx->pc = 0x1D3418u;
            goto label_1d3418;
        }
    }
    ctx->pc = 0x1D33F8u;
label_1d33f8:
    // 0x1d33f8: 0x8e221808  lw          $v0, 0x1808($s1)
    ctx->pc = 0x1d33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
label_1d33fc:
    // 0x1d33fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3400u;
    {
        const bool branch_taken_0x1d3400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3400u;
        // 0x1d3404: 0xae221808  sw          $v0, 0x1808($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3400) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D3408u;
label_1d3408:
    // 0x1d3408: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d340c: 0xae201808  sw          $zero, 0x1808($s1)
    ctx->pc = 0x1d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 0));
    // 0x1d3410: 0xae221804  sw          $v0, 0x1804($s1)
    ctx->pc = 0x1d3410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6148), GPR_U32(ctx, 2));
label_1d3414:
    // 0x1d3414: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d3414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3418:
    // 0x1d3418: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d341c:
    // 0x1d341c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d341cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3420: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d3420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3428: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3428u;
        // 0x1d342c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3430u;
}
