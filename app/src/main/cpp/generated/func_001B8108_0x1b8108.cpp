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

// Function: func_001B8108
// Address: 0x1b8108 - 0x1b8140
void func_001B8108_0x1b8108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8108_0x1b8108");
#endif

    switch (ctx->pc) {
        case 0x1b811cu: goto label_1b811c;
        default: break;
    }

    ctx->pc = 0x1b8108u;

    // 0x1b8108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b810c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8114: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B8114u;
    SET_GPR_U32(ctx, 31, 0x1B811Cu);
    ctx->pc = 0x1B8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8114u;
    // 0x1b8118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B8114u, 0x1B811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B811Cu;
label_1b811c:
    // 0x1b811c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b8120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8124: 0x24638b58  addiu       $v1, $v1, -0x74A8
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937432));
    // 0x1b8128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b812c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b812cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b8130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8134: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8134u;
        // 0x1b8138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B813Cu;
    // 0x1b813c: 0x0  nop
    ctx->pc = 0x1b813cu;
    // NOP
    ctx->pc = 0x1b8140u;
}
