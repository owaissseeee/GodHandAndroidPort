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

// Function: func_00338D90
// Address: 0x338d90 - 0x338de8
void func_00338D90_0x338d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338D90_0x338d90");
#endif

    switch (ctx->pc) {
        case 0x338dd4u: goto label_338dd4;
        default: break;
    }

    ctx->pc = 0x338d90u;

    // 0x338d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338d94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338D94u;
    {
        const bool branch_taken_0x338d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x338D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D94u;
        // 0x338d98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d94) {
            ctx->pc = 0x338DB0u;
            goto label_338db0;
        }
    }
    ctx->pc = 0x338D9Cu;
    // 0x338d9c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338da0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338da4: 0x24845970  addiu       $a0, $a0, 0x5970
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22896));
    // 0x338da8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x338DA8u;
    {
        const bool branch_taken_0x338da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DA8u;
        // 0x338dac: 0x24a55920  addiu       $a1, $a1, 0x5920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338da8) {
            ctx->pc = 0x338DCCu;
            goto label_338dcc;
        }
    }
    ctx->pc = 0x338DB0u;
label_338db0:
    // 0x338db0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x338db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338db4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x338DB4u;
    {
        const bool branch_taken_0x338db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338db4) {
            ctx->pc = 0x338DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338DB4u;
            // 0x338db8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338DD8u;
            goto label_338dd8;
        }
    }
    ctx->pc = 0x338DBCu;
    // 0x338dbc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338dc0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338dc4: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x338dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x338dc8: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x338dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_338dcc:
    // 0x338dcc: 0xc0ce292  jal         func_338A48
    ctx->pc = 0x338DCCu;
    SET_GPR_U32(ctx, 31, 0x338DD4u);
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338DCCu, 0x338DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DD4u;
label_338dd4:
    // 0x338dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338dd8:
    // 0x338dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x338DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DDCu;
        // 0x338de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338DE4u;
    // 0x338de4: 0x0  nop
    ctx->pc = 0x338de4u;
    // NOP
    ctx->pc = 0x338de8u;
}
