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

// Function: cScenario_endMess
// Address: 0x2c4390 - 0x2c43d8
void cScenario_endMess_0x2c4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_endMess_0x2c4390");
#endif

    switch (ctx->pc) {
        case 0x2c43c0u: goto label_2c43c0;
        default: break;
    }

    ctx->pc = 0x2c4390u;

    // 0x2c4390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c4394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c4398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c439c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c439cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c43a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c43a4: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2c43a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c43a8: 0x96020112  lhu         $v0, 0x112($s0)
    ctx->pc = 0x2c43a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x2c43ac: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C43ACu;
    {
        const bool branch_taken_0x2c43ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43ACu;
        // 0x2c43b0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43ac) {
            ctx->pc = 0x2C43C4u;
            goto label_2c43c4;
        }
    }
    ctx->pc = 0x2C43B4u;
    // 0x2c43b4: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x2c43b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x2c43b8: 0xc0abb10  jal         func_2AEC40
    ctx->pc = 0x2C43B8u;
    SET_GPR_U32(ctx, 31, 0x2C43C0u);
    ctx->pc = 0x2C43BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43B8u;
    // 0x2c43bc: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC40u, 0x2C43B8u, 0x2C43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43C0u;
label_2c43c0:
    // 0x2c43c0: 0xa6110112  sh          $s1, 0x112($s0)
    ctx->pc = 0x2c43c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 17));
label_2c43c4:
    // 0x2c43c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c43c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c43c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c43c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c43cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c43ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c43d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C43D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43D0u;
        // 0x2c43d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C43D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C43D8u;
}
