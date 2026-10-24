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

// Function: func_00164EF8
// Address: 0x164ef8 - 0x164f30
void func_00164EF8_0x164ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164EF8_0x164ef8");
#endif

    switch (ctx->pc) {
        case 0x164f0cu: goto label_164f0c;
        default: break;
    }

    ctx->pc = 0x164ef8u;

    // 0x164ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x164efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x164f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164f04: 0xc058534  jal         func_1614D0
    ctx->pc = 0x164F04u;
    SET_GPR_U32(ctx, 31, 0x164F0Cu);
    ctx->pc = 0x164F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F04u;
    // 0x164f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x164F04u, 0x164F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F0Cu;
label_164f0c:
    // 0x164f0c: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x164f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x164f10: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x164f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x164f14: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x164f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x164f18: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x164f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x164f1c: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x164f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x164f20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f28: 0x3e00008  jr          $ra
    ctx->pc = 0x164F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F28u;
        // 0x164f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164F30u;
}
