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

// Function: func_00133888
// Address: 0x133888 - 0x133900
void func_00133888_0x133888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133888_0x133888");
#endif

    switch (ctx->pc) {
        case 0x1338d0u: goto label_1338d0;
        case 0x1338e4u: goto label_1338e4;
        default: break;
    }

    ctx->pc = 0x133888u;

    // 0x133888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13388c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x13388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x133890: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x133890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x133894: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x133894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x133898: 0x24515538  addiu       $s1, $v0, 0x5538
    ctx->pc = 0x133898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21816));
    // 0x13389c: 0x8c435538  lw          $v1, 0x5538($v0)
    ctx->pc = 0x13389cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x785538u));
    // 0x1338a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1338a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1338a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1338a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1338A8u;
    {
        const bool branch_taken_0x1338a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1338ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338A8u;
        // 0x1338ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338a8) {
            ctx->pc = 0x1338E4u;
            goto label_1338e4;
        }
    }
    ctx->pc = 0x1338B0u;
    // 0x1338b0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1338b4: 0x8c620d00  lw          $v0, 0xD00($v1)
    ctx->pc = 0x1338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D00u));
    // 0x1338b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1338B8u;
    {
        const bool branch_taken_0x1338b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338B8u;
        // 0x1338bc: 0x24700d00  addiu       $s0, $v1, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338b8) {
            ctx->pc = 0x1338D0u;
            goto label_1338d0;
        }
    }
    ctx->pc = 0x1338C0u;
    // 0x1338c0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1338c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1338c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338c8: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x1338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338C8u;
    // 0x1338cc: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1338C8u, 0x1338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1338d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1338d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338d8: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x1338d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x1338dc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1338DCu;
    SET_GPR_U32(ctx, 31, 0x1338E4u);
    ctx->pc = 0x1338E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338DCu;
    // 0x1338e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1338DCu, 0x1338E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338E4u;
label_1338e4:
    // 0x1338e4: 0x26425538  addiu       $v0, $s2, 0x5538
    ctx->pc = 0x1338e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21816));
    // 0x1338e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1338e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1338ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1338ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1338f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1338f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1338f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1338f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1338f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1338F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1338FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338F8u;
        // 0x1338fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1338F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133900u;
}
