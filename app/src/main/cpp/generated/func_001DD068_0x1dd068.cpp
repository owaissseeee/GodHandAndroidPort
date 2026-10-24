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

// Function: func_001DD068
// Address: 0x1dd068 - 0x1dd0d8
void func_001DD068_0x1dd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD068_0x1dd068");
#endif

    switch (ctx->pc) {
        case 0x1dd09cu: goto label_1dd09c;
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0acu: goto label_1dd0ac;
        default: break;
    }

    ctx->pc = 0x1dd068u;

    // 0x1dd068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dd06c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dd070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd074: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dd078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd07c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dd080: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dd080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dd084: 0x2412004c  addiu       $s2, $zero, 0x4C
    ctx->pc = 0x1dd084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1dd088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd08c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1dd08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1dd090: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1dd090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1dd094: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1DD094u;
    SET_GPR_U32(ctx, 31, 0x1DD09Cu);
    ctx->pc = 0x1DD098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD094u;
    // 0x1dd098: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1DD094u, 0x1DD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD09Cu;
label_1dd09c:
    // 0x1dd09c: 0x0  nop
    ctx->pc = 0x1dd09cu;
    // NOP
label_1dd0a0:
    // 0x1dd0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0a4: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1DD0A4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ACu);
    ctx->pc = 0x1DD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0A4u;
    // 0x1dd0a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1DD0A4u, 0x1DD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0ACu;
label_1dd0ac:
    // 0x1dd0ac: 0x0  nop
    ctx->pc = 0x1dd0acu;
    // NOP
    // 0x1dd0b0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DD0B0u;
    {
        const bool branch_taken_0x1dd0b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1DD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0B0u;
        // 0x1dd0b4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0b0) {
            ctx->pc = 0x1DD0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd0a0;
        }
    }
    ctx->pc = 0x1DD0B8u;
    // 0x1dd0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dd0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd0c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd0c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd0c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dd0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D0u;
        // 0x1dd0d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0D8u;
}
