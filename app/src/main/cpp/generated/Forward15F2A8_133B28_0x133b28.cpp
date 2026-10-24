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

// Function: Forward15F2A8_133B28
// Address: 0x133b28 - 0x133b58
void Forward15F2A8_133B28_0x133b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward15F2A8_133B28_0x133b28");
#endif

    switch (ctx->pc) {
        case 0x133b44u: goto label_133b44;
        default: break;
    }

    ctx->pc = 0x133b28u;

    // 0x133b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133b38: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x133b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133b3c: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x133B3Cu;
    SET_GPR_U32(ctx, 31, 0x133B44u);
    ctx->pc = 0x133B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B3Cu;
    // 0x133b40: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x133B3Cu, 0x133B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B44u;
label_133b44:
    // 0x133b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b48: 0x3e00008  jr          $ra
    ctx->pc = 0x133B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B48u;
        // 0x133b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B50u;
    // 0x133b50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x133b54: 0x0  nop
    ctx->pc = 0x133b54u;
    // NOP
    ctx->pc = 0x133b58u;
}
