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

// Function: func_00297AA8
// Address: 0x297aa8 - 0x297ad0
void func_00297AA8_0x297aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297AA8_0x297aa8");
#endif

    switch (ctx->pc) {
        case 0x297abcu: goto label_297abc;
        default: break;
    }

    ctx->pc = 0x297aa8u;

    // 0x297aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297aac: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297aacu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297AACu) & 0xFFFFu)) << 16));
    // 0x297ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297ab4: 0xc000000  jal         func_000000
    ctx->pc = 0x297AB4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297AB4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297ABCu);
        ctx->pc = 0x297AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AB4u;
        // 0x297ab8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297AB8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AB4u, 0x297ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297ABCu;
label_297abc:
    // 0x297abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297ac0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x297ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x297ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x297AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AC4u;
        // 0x297ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297ACCu;
    // 0x297acc: 0x0  nop
    ctx->pc = 0x297accu;
    // NOP
    ctx->pc = 0x297ad0u;
}
