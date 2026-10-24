#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79a428 - 0x79a4a8
void r6xx_isActiveLever__FPCc_0x79a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79a428");
#endif

    switch (ctx->pc) {
        case 0x79a450u: goto label_79a450;
        case 0x79a480u: goto label_79a480;
        case 0x79a490u: goto label_79a490;
        default: break;
    }

    ctx->pc = 0x79a428u;

    // 0x79a428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a42c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a434: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a43c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a440: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A440u;
    {
        const bool branch_taken_0x79a440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a440) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A448u;
    // 0x79a448: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a44c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a450:
    // 0x79a450: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a458: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a45c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a460: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A464u;
    {
        const bool branch_taken_0x79a464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A464u;
        // 0x79a468: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a464) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A46Cu;
    // 0x79a46c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a470: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A470u;
    {
        const bool branch_taken_0x79a470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a470) {
            ctx->pc = 0x79A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A470u;
            // 0x79a474: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a450;
        }
    }
    ctx->pc = 0x79A478u;
label_79a478:
    // 0x79a478: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A478u;
    SET_GPR_U32(ctx, 31, 0x79A480u);
    ctx->pc = 0x79A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A478u;
    // 0x79a47c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A478u, 0x79A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A480u;
    {
        const bool branch_taken_0x79a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a480) {
            ctx->pc = 0x79A484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A480u;
            // 0x79a484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A498u;
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A488u;
    // 0x79a488: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79A488u;
    SET_GPR_U32(ctx, 31, 0x79A490u);
    ctx->pc = 0x79A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A488u;
    // 0x79a48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79A488u, 0x79A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A490u;
    {
        const bool branch_taken_0x79a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A490u;
        // 0x79a494: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a490) {
            ctx->pc = 0x79A49Cu;
            goto label_79a49c;
        }
    }
    ctx->pc = 0x79A498u;
label_79a498:
    // 0x79a498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a49c:
    // 0x79a49c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A49Cu;
        // 0x79a4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4A4u;
    // 0x79a4a4: 0x0  nop
    ctx->pc = 0x79a4a4u;
    // NOP
    ctx->pc = 0x79a4a8u;
}
} // namespace gh_r606
