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

// Function: ColiseumBattle__ctor
// Address: 0x1ee9c8 - 0x1eea38
void ColiseumBattle__ctor_0x1ee9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle__ctor_0x1ee9c8");
#endif

    switch (ctx->pc) {
        case 0x1ee9e4u: goto label_1ee9e4;
        case 0x1ee9f0u: goto label_1ee9f0;
        case 0x1eea00u: goto label_1eea00;
        default: break;
    }

    ctx->pc = 0x1ee9c8u;

    // 0x1ee9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ee9d4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1ee9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee9dc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1EE9DCu;
    SET_GPR_U32(ctx, 31, 0x1EE9E4u);
    ctx->pc = 0x1EE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9DCu;
    // 0x1ee9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1EE9DCu, 0x1EE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9E4u;
label_1ee9e4:
    // 0x1ee9e4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1ee9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1ee9e8: 0xc07c9c2  jal         func_1F2708
    ctx->pc = 0x1EE9E8u;
    SET_GPR_U32(ctx, 31, 0x1EE9F0u);
    ctx->pc = 0x1EE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9E8u;
    // 0x1ee9ec: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2708u, 0x1EE9E8u, 0x1EE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9F0u;
label_1ee9f0:
    // 0x1ee9f0: 0xae000bac  sw          $zero, 0xBAC($s0)
    ctx->pc = 0x1ee9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2988), GPR_U32(ctx, 0));
    // 0x1ee9f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ee9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee9f8: 0x26020bd0  addiu       $v0, $s0, 0xBD0
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3024));
    // 0x1ee9fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eea00:
    // 0x1eea00: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1eea00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eea04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eea08: 0x0  nop
    ctx->pc = 0x1eea08u;
    // NOP
    // 0x1eea0c: 0x0  nop
    ctx->pc = 0x1eea0cu;
    // NOP
    // 0x1eea10: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEA10u;
    {
        const bool branch_taken_0x1eea10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA10u;
        // 0x1eea14: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea10) {
            ctx->pc = 0x1EEA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eea00;
        }
    }
    ctx->pc = 0x1EEA18u;
    // 0x1eea18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eea18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eea1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eea20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eea24: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA24u;
        // 0x1eea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEA2Cu;
    // 0x1eea2c: 0x0  nop
    ctx->pc = 0x1eea2cu;
    // NOP
    // 0x1eea30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1eea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eea34: 0x0  nop
    ctx->pc = 0x1eea34u;
    // NOP
    ctx->pc = 0x1eea38u;
}
