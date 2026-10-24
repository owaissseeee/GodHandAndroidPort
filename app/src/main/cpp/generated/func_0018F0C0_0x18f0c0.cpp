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

// Function: func_0018F0C0
// Address: 0x18f0c0 - 0x18f110
void func_0018F0C0_0x18f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F0C0_0x18f0c0");
#endif

    switch (ctx->pc) {
        case 0x18f0e4u: goto label_18f0e4;
        case 0x18f0fcu: goto label_18f0fc;
        default: break;
    }

    ctx->pc = 0x18f0c0u;

    // 0x18f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f0c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18f0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f0cc: 0x8c625bc8  lw          $v0, 0x5BC8($v1)
    ctx->pc = 0x18f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BC8u));
    // 0x18f0d0: 0x24705bc8  addiu       $s0, $v1, 0x5BC8
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23496));
    // 0x18f0d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F0D4u;
    {
        const bool branch_taken_0x18f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0D4u;
        // 0x18f0d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0d4) {
            ctx->pc = 0x18F0FCu;
            goto label_18f0fc;
        }
    }
    ctx->pc = 0x18F0DCu;
    // 0x18f0dc: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x18F0DCu;
    SET_GPR_U32(ctx, 31, 0x18F0E4u);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x18F0DCu, 0x18F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0E4u;
label_18f0e4:
    // 0x18f0e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18f0e8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18f0ec: 0x24a53df0  addiu       $a1, $a1, 0x3DF0
    ctx->pc = 0x18f0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
    // 0x18f0f0: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x18f0f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18F0F4u;
    SET_GPR_U32(ctx, 31, 0x18F0FCu);
    ctx->pc = 0x18F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0F4u;
    // 0x18f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18F0F4u, 0x18F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0FCu;
label_18f0fc:
    // 0x18f0fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18f0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18f104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f108: 0x3e00008  jr          $ra
    ctx->pc = 0x18F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F108u;
        // 0x18f10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F110u;
}
