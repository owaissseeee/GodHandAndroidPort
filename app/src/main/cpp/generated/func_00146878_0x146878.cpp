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

// Function: func_00146878
// Address: 0x146878 - 0x1468b0
void func_00146878_0x146878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146878_0x146878");
#endif

    switch (ctx->pc) {
        case 0x14688cu: goto label_14688c;
        case 0x146898u: goto label_146898;
        default: break;
    }

    ctx->pc = 0x146878u;

    // 0x146878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14687c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146884: 0xc051a2c  jal         func_1468B0
    ctx->pc = 0x146884u;
    SET_GPR_U32(ctx, 31, 0x14688Cu);
    ctx->pc = 0x146888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146884u;
    // 0x146888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468B0u, 0x146884u, 0x14688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14688Cu;
label_14688c:
    // 0x14688c: 0xa6000100  sh          $zero, 0x100($s0)
    ctx->pc = 0x14688cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x146890: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x146890u;
    SET_GPR_U32(ctx, 31, 0x146898u);
    ctx->pc = 0x146894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146890u;
    // 0x146894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x146890u, 0x146898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146898u;
label_146898:
    // 0x146898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14689c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1468a0: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x1468a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x1468a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1468a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1468a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1468A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1468ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468A8u;
        // 0x1468ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1468A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1468B0u;
}
