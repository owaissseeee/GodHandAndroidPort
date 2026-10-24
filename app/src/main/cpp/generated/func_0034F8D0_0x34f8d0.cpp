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

// Function: func_0034F8D0
// Address: 0x34f8d0 - 0x34f930
void func_0034F8D0_0x34f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F8D0_0x34f8d0");
#endif

    switch (ctx->pc) {
        case 0x34f8e4u: goto label_34f8e4;
        case 0x34f918u: goto label_34f918;
        default: break;
    }

    ctx->pc = 0x34f8d0u;

    // 0x34f8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34f8dc: 0xc0d3a62  jal         func_34E988
    ctx->pc = 0x34F8DCu;
    SET_GPR_U32(ctx, 31, 0x34F8E4u);
    ctx->pc = 0x34F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8DCu;
    // 0x34f8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E988u, 0x34F8DCu, 0x34F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8E4u;
label_34f8e4:
    // 0x34f8e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x34f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34f8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8ec: 0x26100a0c  addiu       $s0, $s0, 0xA0C
    ctx->pc = 0x34f8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
    // 0x34f8f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8f4: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x34F8F4u;
    {
        const bool branch_taken_0x34f8f4 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x34F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8F4u;
        // 0x34f8f8: 0x8e070058  lw          $a3, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8f4) {
            ctx->pc = 0x34F900u;
            goto label_34f900;
        }
    }
    ctx->pc = 0x34F8FCu;
    // 0x34f8fc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x34f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34f900:
    // 0x34f900: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x34f900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x34f904: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x34f904u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x34f908: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x34f908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x34f90c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34f90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f910: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x34F910u;
    SET_GPR_U32(ctx, 31, 0x34F918u);
    ctx->pc = 0x34F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F910u;
    // 0x34f914: 0xe3800a  movz        $s0, $a3, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x34F910u, 0x34F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F918u;
label_34f918:
    // 0x34f918: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x34f918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34f91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34f920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f924: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34f924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34f928: 0x3e00008  jr          $ra
    ctx->pc = 0x34F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F928u;
        // 0x34f92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F930u;
}
