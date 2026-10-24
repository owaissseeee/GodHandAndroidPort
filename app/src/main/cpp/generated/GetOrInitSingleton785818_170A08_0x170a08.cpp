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

// Function: GetOrInitSingleton785818_170A08
// Address: 0x170a08 - 0x170a58
void GetOrInitSingleton785818_170A08_0x170a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton785818_170A08_0x170a08");
#endif

    switch (ctx->pc) {
        case 0x170a2cu: goto label_170a2c;
        case 0x170a44u: goto label_170a44;
        default: break;
    }

    ctx->pc = 0x170a08u;

    // 0x170a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170a0c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x170a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x170a10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170a14: 0x8c625818  lw          $v0, 0x5818($v1)
    ctx->pc = 0x170a14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785818u));
    // 0x170a18: 0x24705818  addiu       $s0, $v1, 0x5818
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22552));
    // 0x170a1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170A1Cu;
    {
        const bool branch_taken_0x170a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A1Cu;
        // 0x170a20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a1c) {
            ctx->pc = 0x170A44u;
            goto label_170a44;
        }
    }
    ctx->pc = 0x170A24u;
    // 0x170a24: 0xc070006  jal         func_1C0018
    ctx->pc = 0x170A24u;
    SET_GPR_U32(ctx, 31, 0x170A2Cu);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x170A24u, 0x170A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A2Cu;
label_170a2c:
    // 0x170a2c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x170a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x170a30: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x170a34: 0x24a50768  addiu       $a1, $a1, 0x768
    ctx->pc = 0x170a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1896));
    // 0x170a38: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x170a3c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x170A3Cu;
    SET_GPR_U32(ctx, 31, 0x170A44u);
    ctx->pc = 0x170A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A3Cu;
    // 0x170a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x170A3Cu, 0x170A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A44u;
label_170a44:
    // 0x170a44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a50: 0x3e00008  jr          $ra
    ctx->pc = 0x170A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A50u;
        // 0x170a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A58u;
}
