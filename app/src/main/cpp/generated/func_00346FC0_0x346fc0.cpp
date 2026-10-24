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

// Function: func_00346FC0
// Address: 0x346fc0 - 0x347008
void func_00346FC0_0x346fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346FC0_0x346fc0");
#endif

    switch (ctx->pc) {
        case 0x346fe0u: goto label_346fe0;
        default: break;
    }

    ctx->pc = 0x346fc0u;

    // 0x346fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346fc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x346fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346fc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x346fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x346fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fd4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x346fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x346fd8: 0xc0d7f48  jal         func_35FD20
    ctx->pc = 0x346FD8u;
    SET_GPR_U32(ctx, 31, 0x346FE0u);
    ctx->pc = 0x346FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FD8u;
    // 0x346fdc: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FD20u, 0x346FD8u, 0x346FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FE0u;
label_346fe0:
    // 0x346fe0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x346fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x346fe4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346fe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x346fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346fec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x346fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x346ff0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x346ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x346ff4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x346ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x346ff8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x346ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x346ffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x346ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347000: 0x3e00008  jr          $ra
    ctx->pc = 0x347000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347000u;
        // 0x347004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347008u;
}
