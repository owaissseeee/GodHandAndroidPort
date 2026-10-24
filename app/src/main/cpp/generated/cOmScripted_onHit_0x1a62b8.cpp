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

// Function: cOmScripted_onHit
// Address: 0x1a62b8 - 0x1a6310
void cOmScripted_onHit_0x1a62b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmScripted_onHit_0x1a62b8");
#endif

    switch (ctx->pc) {
        case 0x1a62d0u: goto label_1a62d0;
        default: break;
    }

    ctx->pc = 0x1a62b8u;

    // 0x1a62b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a62bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a62c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a62c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a62c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a62c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62c8: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1A62C8u;
    SET_GPR_U32(ctx, 31, 0x1A62D0u);
    ctx->pc = 0x1A62CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C8u;
    // 0x1a62cc: 0x8e050608  lw          $a1, 0x608($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1A62C8u, 0x1A62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62D0u;
label_1a62d0:
    // 0x1a62d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a62d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a62d8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A62D8u;
    {
        const bool branch_taken_0x1a62d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a62d8) {
            ctx->pc = 0x1A62DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62D8u;
            // 0x1a62dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6300u;
            goto label_1a6300;
        }
    }
    ctx->pc = 0x1A62E0u;
    // 0x1a62e0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1a62e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1a62e4: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A62E4u;
    {
        const bool branch_taken_0x1a62e4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1a62e4) {
            ctx->pc = 0x1A62E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62E4u;
            // 0x1a62e8: 0xa2030605  sb          $v1, 0x605($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1541), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A62ECu;
            goto label_1a62ec;
        }
    }
    ctx->pc = 0x1A62ECu;
label_1a62ec:
    // 0x1a62ec: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x1a62ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a62f0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a62f4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a62f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a62f8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a62f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a62fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a62fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6300:
    // 0x1a6300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6304: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6304u;
        // 0x1a6308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A630Cu;
    // 0x1a630c: 0x0  nop
    ctx->pc = 0x1a630cu;
    // NOP
    ctx->pc = 0x1a6310u;
}
