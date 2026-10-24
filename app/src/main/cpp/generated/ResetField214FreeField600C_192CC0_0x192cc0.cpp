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

// Function: ResetField214FreeField600C_192CC0
// Address: 0x192cc0 - 0x192d20
void ResetField214FreeField600C_192CC0_0x192cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600C_192CC0_0x192cc0");
#endif

    switch (ctx->pc) {
        case 0x192cfcu: goto label_192cfc;
        case 0x192d0cu: goto label_192d0c;
        default: break;
    }

    ctx->pc = 0x192cc0u;

    // 0x192cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192cc4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192cc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x192ccc: 0x244244d8  addiu       $v0, $v0, 0x44D8
    ctx->pc = 0x192cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17624));
    // 0x192cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192cdc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x192cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x192ce0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x192ce4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192CE4u;
    {
        const bool branch_taken_0x192ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CE4u;
        // 0x192ce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ce4) {
            ctx->pc = 0x192D00u;
            goto label_192d00;
        }
    }
    ctx->pc = 0x192CECu;
    // 0x192cec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x192cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x192cf0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x192cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cf4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x192CF4u;
    SET_GPR_U32(ctx, 31, 0x192CFCu);
    ctx->pc = 0x192CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CF4u;
    // 0x192cf8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x192CF4u, 0x192CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CFCu;
label_192cfc:
    // 0x192cfc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x192cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_192d00:
    // 0x192d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d04: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x192D04u;
    SET_GPR_U32(ctx, 31, 0x192D0Cu);
    ctx->pc = 0x192D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D04u;
    // 0x192d08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x192D04u, 0x192D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D0Cu;
label_192d0c:
    // 0x192d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d18: 0x3e00008  jr          $ra
    ctx->pc = 0x192D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D18u;
        // 0x192d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192D20u;
}
