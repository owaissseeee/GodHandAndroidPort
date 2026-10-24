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

// Function: func_001BBE68
// Address: 0x1bbe68 - 0x1bbeb8
void func_001BBE68_0x1bbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBE68_0x1bbe68");
#endif

    switch (ctx->pc) {
        case 0x1bbe8cu: goto label_1bbe8c;
        case 0x1bbea4u: goto label_1bbea4;
        default: break;
    }

    ctx->pc = 0x1bbe68u;

    // 0x1bbe68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbe6c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1bbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1bbe70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbe74: 0x8c626118  lw          $v0, 0x6118($v1)
    ctx->pc = 0x1bbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786118u));
    // 0x1bbe78: 0x24706118  addiu       $s0, $v1, 0x6118
    ctx->pc = 0x1bbe78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24856));
    // 0x1bbe7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE7Cu;
    {
        const bool branch_taken_0x1bbe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE7Cu;
        // 0x1bbe80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe7c) {
            ctx->pc = 0x1BBEA4u;
            goto label_1bbea4;
        }
    }
    ctx->pc = 0x1BBE84u;
    // 0x1bbe84: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BBE84u;
    SET_GPR_U32(ctx, 31, 0x1BBE8Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1BBE84u, 0x1BBE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE8Cu;
label_1bbe8c:
    // 0x1bbe8c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1bbe90: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1bbe94: 0x24a59240  addiu       $a1, $a1, -0x6DC0
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939200));
    // 0x1bbe98: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1bbe9c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1BBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBEA4u);
    ctx->pc = 0x1BBEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE9Cu;
    // 0x1bbea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1BBE9Cu, 0x1BBEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEA4u;
label_1bbea4:
    // 0x1bbea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbeac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEB0u;
        // 0x1bbeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBEB8u;
}
