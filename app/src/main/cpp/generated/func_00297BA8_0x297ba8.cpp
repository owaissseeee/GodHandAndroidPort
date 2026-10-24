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

// Function: func_00297BA8
// Address: 0x297ba8 - 0x297bf8
void func_00297BA8_0x297ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297BA8_0x297ba8");
#endif

    switch (ctx->pc) {
        case 0x297bbcu: goto label_297bbc;
        default: break;
    }

    ctx->pc = 0x297ba8u;

    // 0x297ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297bac: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297bacu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297BACu) & 0xFFFFu)) << 16));
    // 0x297bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297bb4: 0xc000000  jal         func_000000
    ctx->pc = 0x297BB4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297BB4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297BBCu);
        ctx->pc = 0x297BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BB4u;
        // 0x297bb8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297BB8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297BB4u, 0x297BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297BBCu;
label_297bbc:
    // 0x297bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x297BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BC0u;
        // 0x297bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297BC8u;
    // 0x297bc8: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x297bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x297bcc: 0x0  nop
    ctx->pc = 0x297bccu;
    // NOP
    // 0x297bd0: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x297bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x297bd4: 0x0  nop
    ctx->pc = 0x297bd4u;
    // NOP
    // 0x297bd8: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x297bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x297bdc: 0x0  nop
    ctx->pc = 0x297bdcu;
    // NOP
    // 0x297be0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x297be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x297be4: 0x0  nop
    ctx->pc = 0x297be4u;
    // NOP
    // 0x297be8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x297be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x297bec: 0x0  nop
    ctx->pc = 0x297becu;
    // NOP
    // 0x297bf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x297bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x297bf4: 0x0  nop
    ctx->pc = 0x297bf4u;
    // NOP
    ctx->pc = 0x297bf8u;
}
