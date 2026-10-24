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

// Function: pl00_CannonGameMode
// Address: 0x10bcc0 - 0x10bd08
void pl00_CannonGameMode_0x10bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_CannonGameMode_0x10bcc0");
#endif

    switch (ctx->pc) {
        case 0x10bcf8u: goto label_10bcf8;
        default: break;
    }

    ctx->pc = 0x10bcc0u;

    // 0x10bcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bcc4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10BCC4u;
    {
        const bool branch_taken_0x10bcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCC4u;
        // 0x10bcc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcc4) {
            ctx->pc = 0x10BCF0u;
            goto label_10bcf0;
        }
    }
    ctx->pc = 0x10BCCCu;
    // 0x10bccc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10bcd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bcd4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10bcd8: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x10bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10bcdc: 0xe480054c  swc1        $f0, 0x54C($a0)
    ctx->pc = 0x10bcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1356), bits); }
    // 0x10bce0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x10bce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bce4: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x10bce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BCE8u;
    {
        const bool branch_taken_0x10bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCE8u;
        // 0x10bcec: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bce8) {
            ctx->pc = 0x10BCF8u;
            goto label_10bcf8;
        }
    }
    ctx->pc = 0x10BCF0u;
label_10bcf0:
    // 0x10bcf0: 0xc04b106  jal         func_12C418
    ctx->pc = 0x10BCF0u;
    SET_GPR_U32(ctx, 31, 0x10BCF8u);
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x10BCF0u, 0x10BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCF8u;
label_10bcf8:
    // 0x10bcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCFCu;
        // 0x10bd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD04u;
    // 0x10bd04: 0x0  nop
    ctx->pc = 0x10bd04u;
    // NOP
    ctx->pc = 0x10bd08u;
}
