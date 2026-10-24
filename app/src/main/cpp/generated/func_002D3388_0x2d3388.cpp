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

// Function: func_002D3388
// Address: 0x2d3388 - 0x2d34a8
void func_002D3388_0x2d3388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3388_0x2d3388");
#endif

    switch (ctx->pc) {
        case 0x2d33d8u: goto label_2d33d8;
        case 0x2d33f8u: goto label_2d33f8;
        case 0x2d3408u: goto label_2d3408;
        case 0x2d3410u: goto label_2d3410;
        case 0x2d3430u: goto label_2d3430;
        case 0x2d3444u: goto label_2d3444;
        default: break;
    }

    ctx->pc = 0x2d3388u;

    // 0x2d3388: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d3388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d338c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d3390: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d3394: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d3394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3398: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d3398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d339c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d339cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d33a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d33a4: 0x26530084  addiu       $s3, $s2, 0x84
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x2d33a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d33ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d33acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d33b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d33b4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2d33b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33b8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2d33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2d33bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d33bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d33c0: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x2d33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x2d33c4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x2d33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2d33c8: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x2d33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x2d33cc: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x2d33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x2d33d0: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x2d33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x2d33d4: 0x0  nop
    ctx->pc = 0x2d33d4u;
    // NOP
label_2d33d8:
    // 0x2d33d8: 0xac60ff8c  sw          $zero, -0x74($v1)
    ctx->pc = 0x2d33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967180), GPR_U32(ctx, 0));
    // 0x2d33dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d33dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d33e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d33e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d33e4: 0x0  nop
    ctx->pc = 0x2d33e4u;
    // NOP
    // 0x2d33e8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D33E8u;
    {
        const bool branch_taken_0x2d33e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33E8u;
        // 0x2d33ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33e8) {
            ctx->pc = 0x2D33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d33d8;
        }
    }
    ctx->pc = 0x2D33F0u;
    // 0x2d33f0: 0x3c160002  lui         $s6, 0x2
    ctx->pc = 0x2d33f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)2 << 16));
    // 0x2d33f4: 0x2b61007  srav        $v0, $s6, $s5
    ctx->pc = 0x2d33f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), GPR_U32(ctx, 21) & 0x1F));
label_2d33f8:
    // 0x2d33f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d33f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33fc: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x2d33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x2d3400: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d3400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d3404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d3404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3408:
    // 0x2d3408: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x2D3408u;
    SET_GPR_U32(ctx, 31, 0x2D3410u);
    ctx->pc = 0x2D340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3408u;
    // 0x2d340c: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x2D3408u, 0x2D3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3410u;
label_2d3410:
    // 0x2d3410: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2d3410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d3414: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2d3414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2d3418: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3418u;
    {
        const bool branch_taken_0x2d3418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3418u;
        // 0x2d341c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3418) {
            ctx->pc = 0x2D345Cu;
            goto label_2d345c;
        }
    }
    ctx->pc = 0x2D3420u;
    // 0x2d3420: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3424: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2d3424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3428: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d3428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d342c: 0x0  nop
    ctx->pc = 0x2d342cu;
    // NOP
label_2d3430:
    // 0x2d3430: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3434: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3434u;
    {
        const bool branch_taken_0x2d3434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3434) {
            ctx->pc = 0x2D3438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3434u;
            // 0x2d3438: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3448u;
            goto label_2d3448;
        }
    }
    ctx->pc = 0x2D343Cu;
    // 0x2d343c: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x2D343Cu;
    SET_GPR_U32(ctx, 31, 0x2D3444u);
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x2D343Cu, 0x2D3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3444u;
label_2d3444:
    // 0x2d3444: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d3444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d3448:
    // 0x2d3448: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d3448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d344c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D344Cu;
    {
        const bool branch_taken_0x2d344c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D344Cu;
        // 0x2d3450: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d344c) {
            ctx->pc = 0x2D3430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3430;
        }
    }
    ctx->pc = 0x2D3454u;
    // 0x2d3454: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3454u;
    {
        const bool branch_taken_0x2d3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3454) {
            ctx->pc = 0x2D346Cu;
            goto label_2d346c;
        }
    }
    ctx->pc = 0x2D345Cu;
label_2d345c:
    // 0x2d345c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d345cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d3460: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2d3460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d3464: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D3464u;
    {
        const bool branch_taken_0x2d3464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3464) {
            ctx->pc = 0x2D3408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3408;
        }
    }
    ctx->pc = 0x2D346Cu;
label_2d346c:
    // 0x2d346c: 0x1680ffe2  bnez        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2D346Cu;
    {
        const bool branch_taken_0x2d346c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D346Cu;
        // 0x2d3470: 0x2b61007  srav        $v0, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), GPR_U32(ctx, 21) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d346c) {
            ctx->pc = 0x2D33F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d33f8;
        }
    }
    ctx->pc = 0x2D3474u;
    // 0x2d3474: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3478: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d3478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d347c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d3480: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d3480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3484: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d3484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d3488: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d3488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d348c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d348cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3490: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d3490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3494: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d3494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3498: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2d3498u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d349c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d34a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D34A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34A0u;
        // 0x2d34a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D34A8u;
}
