#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79b5c8 - 0x79b648
void r6xx_isActiveLever__FPCc_0x79b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79b5c8");
#endif

    switch (ctx->pc) {
        case 0x79b5f0u: goto label_79b5f0;
        case 0x79b620u: goto label_79b620;
        case 0x79b630u: goto label_79b630;
        default: break;
    }

    ctx->pc = 0x79b5c8u;

    // 0x79b5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b5cc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b5d4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b5d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5dc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b5e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B5E0u;
    {
        const bool branch_taken_0x79b5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5E0u;
        // 0x79b5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5e0) {
            ctx->pc = 0x79B618u;
            goto label_79b618;
        }
    }
    ctx->pc = 0x79B5E8u;
    // 0x79b5e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b5ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b5f0:
    // 0x79b5f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b5f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b5f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b5fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b600: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B604u;
    {
        const bool branch_taken_0x79b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B604u;
        // 0x79b608: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b604) {
            ctx->pc = 0x79B618u;
            goto label_79b618;
        }
    }
    ctx->pc = 0x79B60Cu;
    // 0x79b60c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b610: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B610u;
    {
        const bool branch_taken_0x79b610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b610) {
            ctx->pc = 0x79B614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B610u;
            // 0x79b614: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5f0;
        }
    }
    ctx->pc = 0x79B618u;
label_79b618:
    // 0x79b618: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B618u;
    SET_GPR_U32(ctx, 31, 0x79B620u);
    ctx->pc = 0x79B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B618u;
    // 0x79b61c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B618u, 0x79B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B620u;
label_79b620:
    // 0x79b620: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B620u;
    {
        const bool branch_taken_0x79b620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b620) {
            ctx->pc = 0x79B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B620u;
            // 0x79b624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B638u;
            goto label_79b638;
        }
    }
    ctx->pc = 0x79B628u;
    // 0x79b628: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79B628u;
    SET_GPR_U32(ctx, 31, 0x79B630u);
    ctx->pc = 0x79B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B628u;
    // 0x79b62c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79B628u, 0x79B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B630u;
label_79b630:
    // 0x79b630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B630u;
    {
        const bool branch_taken_0x79b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B630u;
        // 0x79b634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b630) {
            ctx->pc = 0x79B63Cu;
            goto label_79b63c;
        }
    }
    ctx->pc = 0x79B638u;
label_79b638:
    // 0x79b638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b63c:
    // 0x79b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B63Cu;
        // 0x79b640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B644u;
    // 0x79b644: 0x0  nop
    ctx->pc = 0x79b644u;
    // NOP
    ctx->pc = 0x79b648u;
}
} // namespace gh_r601
