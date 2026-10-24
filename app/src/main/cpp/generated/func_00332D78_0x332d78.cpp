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

// Function: func_00332D78
// Address: 0x332d78 - 0x332dd0
void func_00332D78_0x332d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332D78_0x332d78");
#endif

    switch (ctx->pc) {
        case 0x332da4u: goto label_332da4;
        default: break;
    }

    ctx->pc = 0x332d78u;

    // 0x332d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x332d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d84: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x332D84u;
    {
        const bool branch_taken_0x332d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D84u;
        // 0x332d88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d84) {
            ctx->pc = 0x332DC0u;
            goto label_332dc0;
        }
    }
    ctx->pc = 0x332D8Cu;
    // 0x332d8c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x332d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x332d90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x332d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x332d94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x332D94u;
    {
        const bool branch_taken_0x332d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332d94) {
            ctx->pc = 0x332D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332D94u;
            // 0x332d98: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332DA8u;
            goto label_332da8;
        }
    }
    ctx->pc = 0x332D9Cu;
    // 0x332d9c: 0xc0ccc12  jal         func_333048
    ctx->pc = 0x332D9Cu;
    SET_GPR_U32(ctx, 31, 0x332DA4u);
    ctx->pc = 0x333048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333048u, 0x332D9Cu, 0x332DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DA4u;
label_332da4:
    // 0x332da4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x332da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_332da8:
    // 0x332da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332db4: 0x80ccaf8  j           func_332BE0
    ctx->pc = 0x332DB4u;
    ctx->pc = 0x332DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DB4u;
    // 0x332db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BE0u, 0x332DB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x332DBCu;
    // 0x332dbc: 0x0  nop
    ctx->pc = 0x332dbcu;
    // NOP
label_332dc0:
    // 0x332dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332dc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x332DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DC8u;
        // 0x332dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332DD0u;
}
