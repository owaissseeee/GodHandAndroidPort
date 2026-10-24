#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79b340 - 0x79b3c0
void r6xx_isActiveLever__FPCc_0x79b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79b340");
#endif

    switch (ctx->pc) {
        case 0x79b368u: goto label_79b368;
        case 0x79b398u: goto label_79b398;
        case 0x79b3a8u: goto label_79b3a8;
        default: break;
    }

    ctx->pc = 0x79b340u;

    // 0x79b340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b344: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b34c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b354: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b358: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B358u;
    {
        const bool branch_taken_0x79b358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B358u;
        // 0x79b35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b358) {
            ctx->pc = 0x79B390u;
            goto label_79b390;
        }
    }
    ctx->pc = 0x79B360u;
    // 0x79b360: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b364: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b368:
    // 0x79b368: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b36c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b370: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b374: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b378: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b37c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B37Cu;
    {
        const bool branch_taken_0x79b37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B37Cu;
        // 0x79b380: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b37c) {
            ctx->pc = 0x79B390u;
            goto label_79b390;
        }
    }
    ctx->pc = 0x79B384u;
    // 0x79b384: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b388: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B388u;
    {
        const bool branch_taken_0x79b388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b388) {
            ctx->pc = 0x79B38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B388u;
            // 0x79b38c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b368;
        }
    }
    ctx->pc = 0x79B390u;
label_79b390:
    // 0x79b390: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B390u;
    SET_GPR_U32(ctx, 31, 0x79B398u);
    ctx->pc = 0x79B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B390u;
    // 0x79b394: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B390u, 0x79B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B398u;
label_79b398:
    // 0x79b398: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B398u;
    {
        const bool branch_taken_0x79b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b398) {
            ctx->pc = 0x79B39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B398u;
            // 0x79b39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B3B0u;
            goto label_79b3b0;
        }
    }
    ctx->pc = 0x79B3A0u;
    // 0x79b3a0: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79B3A0u;
    SET_GPR_U32(ctx, 31, 0x79B3A8u);
    ctx->pc = 0x79B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3A0u;
    // 0x79b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79B3A0u, 0x79B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3A8u;
label_79b3a8:
    // 0x79b3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B3A8u;
    {
        const bool branch_taken_0x79b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A8u;
        // 0x79b3ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3a8) {
            ctx->pc = 0x79B3B4u;
            goto label_79b3b4;
        }
    }
    ctx->pc = 0x79B3B0u;
label_79b3b0:
    // 0x79b3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b3b4:
    // 0x79b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B4u;
        // 0x79b3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3BCu;
    // 0x79b3bc: 0x0  nop
    ctx->pc = 0x79b3bcu;
    // NOP
    ctx->pc = 0x79b3c0u;
}
} // namespace gh_r600
