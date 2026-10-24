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

// Function: InitObjectSetVtable_4FC98_304DB0
// Address: 0x304db0 - 0x304df0
void InitObjectSetVtable_4FC98_304DB0_0x304db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4FC98_304DB0_0x304db0");
#endif

    switch (ctx->pc) {
        case 0x304dccu: goto label_304dcc;
        default: break;
    }

    ctx->pc = 0x304db0u;

    // 0x304db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304db4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x304db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304dbc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304DBCu;
    {
        const bool branch_taken_0x304dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DBCu;
        // 0x304dc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dbc) {
            ctx->pc = 0x304DD8u;
            goto label_304dd8;
        }
    }
    ctx->pc = 0x304DC4u;
    // 0x304dc4: 0xc0c09e4  jal         func_302790
    ctx->pc = 0x304DC4u;
    SET_GPR_U32(ctx, 31, 0x304DCCu);
    ctx->pc = 0x302790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302790u, 0x304DC4u, 0x304DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304DCCu;
label_304dcc:
    // 0x304dcc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x304dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x304dd0: 0x2463fc98  addiu       $v1, $v1, -0x368
    ctx->pc = 0x304dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966424));
    // 0x304dd4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x304dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_304dd8:
    // 0x304dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x304dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304de4: 0x3e00008  jr          $ra
    ctx->pc = 0x304DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DE4u;
        // 0x304de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304DECu;
    // 0x304dec: 0x0  nop
    ctx->pc = 0x304decu;
    // NOP
    ctx->pc = 0x304df0u;
}
