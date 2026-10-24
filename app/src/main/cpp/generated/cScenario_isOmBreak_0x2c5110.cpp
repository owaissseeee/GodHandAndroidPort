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

// Function: cScenario_isOmBreak
// Address: 0x2c5110 - 0x2c5168
void cScenario_isOmBreak_0x2c5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isOmBreak_0x2c5110");
#endif

    switch (ctx->pc) {
        case 0x2c5134u: goto label_2c5134;
        default: break;
    }

    ctx->pc = 0x2c5110u;

    // 0x2c5110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c5118: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c5118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c511c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C511Cu;
    {
        const bool branch_taken_0x2c511c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C511Cu;
        // 0x2c5120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c511c) {
            ctx->pc = 0x2C5154u;
            goto label_2c5154;
        }
    }
    ctx->pc = 0x2C5124u;
    // 0x2c5124: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2c5124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2c5128: 0xde050538  ld          $a1, 0x538($s0)
    ctx->pc = 0x2c5128u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x2c512c: 0xc0afb42  jal         func_2BED08
    ctx->pc = 0x2C512Cu;
    SET_GPR_U32(ctx, 31, 0x2C5134u);
    ctx->pc = 0x2C5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C512Cu;
    // 0x2c5130: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED08u, 0x2C512Cu, 0x2C5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5134u;
label_2c5134:
    // 0x2c5134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5138: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5138u;
    {
        const bool branch_taken_0x2c5138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5138u;
        // 0x2c513c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5138) {
            ctx->pc = 0x2C5154u;
            goto label_2c5154;
        }
    }
    ctx->pc = 0x2C5140u;
    // 0x2c5140: 0x9e0305b0  lwu         $v1, 0x5B0($s0)
    ctx->pc = 0x2c5140u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x2c5144: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x2c5144u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x2c5148: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c5148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c514c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C514Cu;
    {
        const bool branch_taken_0x2c514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C514Cu;
        // 0x2c5150: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c514c) {
            ctx->pc = 0x2C5158u;
            goto label_2c5158;
        }
    }
    ctx->pc = 0x2C5154u;
label_2c5154:
    // 0x2c5154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5158:
    // 0x2c5158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c5158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c515c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5160: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5160u;
        // 0x2c5164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5168u;
}
