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

// Function: InitObjectSetVtable_4FC38_304DF0
// Address: 0x304df0 - 0x304e38
void InitObjectSetVtable_4FC38_304DF0_0x304df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4FC38_304DF0_0x304df0");
#endif

    switch (ctx->pc) {
        case 0x304e0cu: goto label_304e0c;
        default: break;
    }

    ctx->pc = 0x304df0u;

    // 0x304df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304dfc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304DFCu;
    {
        const bool branch_taken_0x304dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DFCu;
        // 0x304e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dfc) {
            ctx->pc = 0x304E18u;
            goto label_304e18;
        }
    }
    ctx->pc = 0x304E04u;
    // 0x304e04: 0xc0c09e4  jal         func_302790
    ctx->pc = 0x304E04u;
    SET_GPR_U32(ctx, 31, 0x304E0Cu);
    ctx->pc = 0x302790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302790u, 0x304E04u, 0x304E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E0Cu;
label_304e0c:
    // 0x304e0c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x304e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x304e10: 0x2463fc38  addiu       $v1, $v1, -0x3C8
    ctx->pc = 0x304e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966328));
    // 0x304e14: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x304e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_304e18:
    // 0x304e18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x304e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304e24: 0x3e00008  jr          $ra
    ctx->pc = 0x304E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E24u;
        // 0x304e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304E2Cu;
    // 0x304e2c: 0x0  nop
    ctx->pc = 0x304e2cu;
    // NOP
    // 0x304e30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x304e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304e34: 0x0  nop
    ctx->pc = 0x304e34u;
    // NOP
    ctx->pc = 0x304e38u;
}
