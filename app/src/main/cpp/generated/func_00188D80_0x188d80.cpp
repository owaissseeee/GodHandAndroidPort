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

// Function: func_00188D80
// Address: 0x188d80 - 0x188de0
void func_00188D80_0x188d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188D80_0x188d80");
#endif

    switch (ctx->pc) {
        case 0x188dbcu: goto label_188dbc;
        case 0x188dccu: goto label_188dcc;
        default: break;
    }

    ctx->pc = 0x188d80u;

    // 0x188d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188d84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x188d88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x188d8c: 0x244234e8  addiu       $v0, $v0, 0x34E8
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13544));
    // 0x188d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188d9c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x188d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x188da0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x188da4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188DC0u;
            goto label_188dc0;
        }
    }
    ctx->pc = 0x188DACu;
    // 0x188dac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x188db0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x188db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188db4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x188DB4u;
    SET_GPR_U32(ctx, 31, 0x188DBCu);
    ctx->pc = 0x188DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DB4u;
    // 0x188db8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x188DB4u, 0x188DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DBCu;
label_188dbc:
    // 0x188dbc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x188dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_188dc0:
    // 0x188dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dc4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x188DC4u;
    SET_GPR_U32(ctx, 31, 0x188DCCu);
    ctx->pc = 0x188DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DC4u;
    // 0x188dc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x188DC4u, 0x188DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DCCu;
label_188dcc:
    // 0x188dcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x188DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD8u;
        // 0x188ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188DE0u;
}
