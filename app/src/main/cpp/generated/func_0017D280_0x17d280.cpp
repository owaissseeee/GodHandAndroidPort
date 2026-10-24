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

// Function: func_0017D280
// Address: 0x17d280 - 0x17d2e0
void func_0017D280_0x17d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D280_0x17d280");
#endif

    switch (ctx->pc) {
        case 0x17d2b4u: goto label_17d2b4;
        case 0x17d2c8u: goto label_17d2c8;
        case 0x17d2d0u: goto label_17d2d0;
        default: break;
    }

    ctx->pc = 0x17d280u;

    // 0x17d280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d284: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x17d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d294: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x17d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x17d298: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x17d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x17d29c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17d2a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17d2a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D2A4u;
    {
        const bool branch_taken_0x17d2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2A4u;
        // 0x17d2a8: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2a4) {
            ctx->pc = 0x17D2B4u;
            goto label_17d2b4;
        }
    }
    ctx->pc = 0x17D2ACu;
    // 0x17d2ac: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17D2ACu;
    SET_GPR_U32(ctx, 31, 0x17D2B4u);
    ctx->pc = 0x17D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ACu;
    // 0x17d2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17D2ACu, 0x17D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2B4u;
label_17d2b4:
    // 0x17d2b4: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x17d2b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x17d2b8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x17d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x17d2bc: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x17d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x17d2c0: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x17D2C0u;
    SET_GPR_U32(ctx, 31, 0x17D2C8u);
    ctx->pc = 0x17D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2C0u;
    // 0x17d2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x17D2C0u, 0x17D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2C8u;
label_17d2c8:
    // 0x17d2c8: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x17D2C8u;
    SET_GPR_U32(ctx, 31, 0x17D2D0u);
    ctx->pc = 0x17D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2C8u;
    // 0x17d2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x17D2C8u, 0x17D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2D0u;
label_17d2d0:
    // 0x17d2d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2D8u;
        // 0x17d2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D2E0u;
}
