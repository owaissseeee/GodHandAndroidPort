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

// Function: func_002D5610
// Address: 0x2d5610 - 0x2d56a8
void func_002D5610_0x2d5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5610_0x2d5610");
#endif

    switch (ctx->pc) {
        case 0x2d5630u: goto label_2d5630;
        default: break;
    }

    ctx->pc = 0x2d5610u;

    // 0x2d5610: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d5610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5614: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2D5614u;
    {
        const bool branch_taken_0x2d5614 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2d5614) {
            ctx->pc = 0x2D5618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5614u;
            // 0x2d5618: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5654u;
            goto label_2d5654;
        }
    }
    ctx->pc = 0x2D561Cu;
    // 0x2d561c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x2d561cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d5620: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5620u;
    {
        const bool branch_taken_0x2d5620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5620u;
        // 0x2d5624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5620) {
            ctx->pc = 0x2D564Cu;
            goto label_2d564c;
        }
    }
    ctx->pc = 0x2D5628u;
    // 0x2d5628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d562c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2d562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2d5630:
    // 0x2d5630: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d5630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5634: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D5634u;
    {
        const bool branch_taken_0x2d5634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5634) {
            ctx->pc = 0x2D567Cu;
            goto label_2d567c;
        }
    }
    ctx->pc = 0x2D563Cu;
    // 0x2d563c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5640: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2d5640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d5644: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5644u;
    {
        const bool branch_taken_0x2d5644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5644u;
        // 0x2d5648: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5644) {
            ctx->pc = 0x2D5630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5630;
        }
    }
    ctx->pc = 0x2D564Cu;
label_2d564c:
    // 0x2d564c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D564Cu;
        // 0x2d5650: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5654u;
label_2d5654:
    // 0x2d5654: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d5654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5658: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5658u;
    {
        const bool branch_taken_0x2d5658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5658u;
        // 0x2d565c: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5658) {
            ctx->pc = 0x2D5684u;
            goto label_2d5684;
        }
    }
    ctx->pc = 0x2D5660u;
    // 0x2d5660: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d5660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5664: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2d5664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d5668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d566c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5670: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x2d5670u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d5674: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5674u;
        // 0x2d5678: 0xc4100a  movz        $v0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D567Cu;
label_2d567c:
    // 0x2d567c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D567Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D567Cu;
        // 0x2d5680: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D567Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5684u;
label_2d5684:
    // 0x2d5684: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5684u;
        // 0x2d5688: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D568Cu;
    // 0x2d568c: 0x0  nop
    ctx->pc = 0x2d568cu;
    // NOP
    // 0x2d5690: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5694: 0x0  nop
    ctx->pc = 0x2d5694u;
    // NOP
    // 0x2d5698: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d569c: 0x0  nop
    ctx->pc = 0x2d569cu;
    // NOP
    // 0x2d56a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d56a4: 0x0  nop
    ctx->pc = 0x2d56a4u;
    // NOP
    ctx->pc = 0x2d56a8u;
}
