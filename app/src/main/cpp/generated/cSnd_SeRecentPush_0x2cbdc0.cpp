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

// Function: cSnd_SeRecentPush
// Address: 0x2cbdc0 - 0x2cbe18
void cSnd_SeRecentPush_0x2cbdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeRecentPush_0x2cbdc0");
#endif

    ctx->pc = 0x2cbdc0u;

    // 0x2cbdc0: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x2cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2cbdc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbdc8: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x2cbdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cbdcc: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x2cbdccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cbdd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2cbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2cbdd4: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x2cbdd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x2cbdd8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2cbdd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2cbddc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbde0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cbde4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x2cbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2cbde8: 0xac8801e0  sw          $t0, 0x1E0($a0)
    ctx->pc = 0x2cbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 8));
    // 0x2cbdec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cbdf0: 0xa4650160  sh          $a1, 0x160($v1)
    ctx->pc = 0x2cbdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cbdf4: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x2cbdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2cbdf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cbdfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cbe00: 0xa4460162  sh          $a2, 0x162($v0)
    ctx->pc = 0x2cbe00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cbe04: 0x8c8301e0  lw          $v1, 0x1E0($a0)
    ctx->pc = 0x2cbe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2cbe08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cbe0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cbe10: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE10u;
        // 0x2cbe14: 0xac870164  sw          $a3, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE18u;
}
