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

// Function: func_001F4700
// Address: 0x1f4700 - 0x1f4758
void func_001F4700_0x1f4700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4700_0x1f4700");
#endif

    switch (ctx->pc) {
        case 0x1f4720u: goto label_1f4720;
        case 0x1f472cu: goto label_1f472c;
        case 0x1f4740u: goto label_1f4740;
        default: break;
    }

    ctx->pc = 0x1f4700u;

    // 0x1f4700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4704: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f4708: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f470c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f470cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4714: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1f4714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1f4718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f471c: 0x2411006e  addiu       $s1, $zero, 0x6E
    ctx->pc = 0x1f471cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1f4720:
    // 0x1f4720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4724: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1F4724u;
    SET_GPR_U32(ctx, 31, 0x1F472Cu);
    ctx->pc = 0x1F4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4724u;
    // 0x1f4728: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1F4724u, 0x1F472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F472Cu;
label_1f472c:
    // 0x1f472c: 0x0  nop
    ctx->pc = 0x1f472cu;
    // NOP
    // 0x1f4730: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F4730u;
    {
        const bool branch_taken_0x1f4730 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4730u;
        // 0x1f4734: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4730) {
            ctx->pc = 0x1F4720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4720;
        }
    }
    ctx->pc = 0x1F4738u;
    // 0x1f4738: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1F4738u;
    SET_GPR_U32(ctx, 31, 0x1F4740u);
    ctx->pc = 0x1F473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4738u;
    // 0x1f473c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1F4738u, 0x1F4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4740u;
label_1f4740:
    // 0x1f4740: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f4740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f4744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4748: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f4748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f474c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4750: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4750u;
        // 0x1f4754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4758u;
}
