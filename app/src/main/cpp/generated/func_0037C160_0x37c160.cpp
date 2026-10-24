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

// Function: func_0037C160
// Address: 0x37c160 - 0x37c1b8
void func_0037C160_0x37c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C160_0x37c160");
#endif

    ctx->pc = 0x37c160u;

    // 0x37c160: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x37c160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37c164: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x37c164u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c168: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x37c168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x37c16c: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x37c16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c170: 0x90a6000d  lbu         $a2, 0xD($a1)
    ctx->pc = 0x37c170u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x37c174: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x37c174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x37c178: 0xa0860005  sb          $a2, 0x5($a0)
    ctx->pc = 0x37c178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x37c17c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x37c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37c180: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x37c180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x37c184: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x37c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37c188: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x37c188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x37c18c: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x37c18cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x37c190: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x37c190u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c194: 0x94a30020  lhu         $v1, 0x20($a1)
    ctx->pc = 0x37c194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x37c198: 0xa483001a  sh          $v1, 0x1A($a0)
    ctx->pc = 0x37c198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c19c: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x37c19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x37c1a0: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x37c1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c1a4: 0x90a30028  lbu         $v1, 0x28($a1)
    ctx->pc = 0x37c1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x37c1a8: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x37c1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c1ac: 0x94a20048  lhu         $v0, 0x48($a1)
    ctx->pc = 0x37c1acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x37c1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1B0u;
        // 0x37c1b4: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C1B8u;
}
