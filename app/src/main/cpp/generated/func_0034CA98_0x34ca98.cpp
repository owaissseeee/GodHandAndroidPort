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

// Function: func_0034CA98
// Address: 0x34ca98 - 0x34cad0
void func_0034CA98_0x34ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CA98_0x34ca98");
#endif

    ctx->pc = 0x34ca98u;

    // 0x34ca98: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34ca98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34caa0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34caa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34caa8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x34caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34caac: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CAACu;
    {
        const bool branch_taken_0x34caac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x34CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAACu;
        // 0x34cab0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34caac) {
            ctx->pc = 0x34CAC4u;
            goto label_34cac4;
        }
    }
    ctx->pc = 0x34CAB4u;
    // 0x34cab4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34cab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cabc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34cac0: 0x8c62131c  lw          $v0, 0x131C($v1)
    ctx->pc = 0x34cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4892)));
label_34cac4:
    // 0x34cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x34CAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CACCu;
    // 0x34cacc: 0x0  nop
    ctx->pc = 0x34caccu;
    // NOP
    ctx->pc = 0x34cad0u;
}
