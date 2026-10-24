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

// Function: func_00346DD0
// Address: 0x346dd0 - 0x346e20
void func_00346DD0_0x346dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346DD0_0x346dd0");
#endif

    ctx->pc = 0x346dd0u;

    // 0x346dd0: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x346dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x346dd4: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x346dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346dd8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x346dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x346ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346de0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x346de0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x346de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346de8: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x346de8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x346dec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x346decu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x346df0: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x346df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x346df4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x346df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x346df8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x346df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x346dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x346dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x346e00: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x346e04: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x346e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x346e08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x346e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346e0c: 0x14870002  bne         $a0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x346E0Cu;
    {
        const bool branch_taken_0x346e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x346E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E0Cu;
        // 0x346e10: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e0c) {
            ctx->pc = 0x346E18u;
            goto label_346e18;
        }
    }
    ctx->pc = 0x346E14u;
    // 0x346e14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x346e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_346e18:
    // 0x346e18: 0x3e00008  jr          $ra
    ctx->pc = 0x346E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346E20u;
}
