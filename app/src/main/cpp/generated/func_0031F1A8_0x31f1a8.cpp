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

// Function: func_0031F1A8
// Address: 0x31f1a8 - 0x31f1f8
void func_0031F1A8_0x31f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F1A8_0x31f1a8");
#endif

    switch (ctx->pc) {
        case 0x31f1ccu: goto label_31f1cc;
        case 0x31f1e4u: goto label_31f1e4;
        default: break;
    }

    ctx->pc = 0x31f1a8u;

    // 0x31f1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f1ac: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31f1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f1b4: 0x8c626638  lw          $v0, 0x6638($v1)
    ctx->pc = 0x31f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786638u));
    // 0x31f1b8: 0x24706638  addiu       $s0, $v1, 0x6638
    ctx->pc = 0x31f1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26168));
    // 0x31f1bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F1BCu;
    {
        const bool branch_taken_0x31f1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1BCu;
        // 0x31f1c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1bc) {
            ctx->pc = 0x31F1E4u;
            goto label_31f1e4;
        }
    }
    ctx->pc = 0x31F1C4u;
    // 0x31f1c4: 0xc0c7cb0  jal         func_31F2C0
    ctx->pc = 0x31F1C4u;
    SET_GPR_U32(ctx, 31, 0x31F1CCu);
    ctx->pc = 0x31F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F2C0u, 0x31F1C4u, 0x31F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1CCu;
label_31f1cc:
    // 0x31f1cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f1d0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x31f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x31f1d4: 0x24a51048  addiu       $a1, $a1, 0x1048
    ctx->pc = 0x31f1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
    // 0x31f1d8: 0x24c66648  addiu       $a2, $a2, 0x6648
    ctx->pc = 0x31f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26184));
    // 0x31f1dc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31F1DCu;
    SET_GPR_U32(ctx, 31, 0x31F1E4u);
    ctx->pc = 0x31F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1DCu;
    // 0x31f1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31F1DCu, 0x31F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1E4u;
label_31f1e4:
    // 0x31f1e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1F0u;
        // 0x31f1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F1F8u;
}
