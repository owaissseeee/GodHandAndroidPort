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

// Function: func_00307140
// Address: 0x307140 - 0x3071a0
void func_00307140_0x307140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307140_0x307140");
#endif

    switch (ctx->pc) {
        case 0x307164u: goto label_307164;
        case 0x307178u: goto label_307178;
        default: break;
    }

    ctx->pc = 0x307140u;

    // 0x307140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307144: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x307144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307148: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x307148u;
    {
        const bool branch_taken_0x307148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307148u;
        // 0x30714c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307148) {
            ctx->pc = 0x307190u;
            goto label_307190;
        }
    }
    ctx->pc = 0x307150u;
    // 0x307150: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x307150u;
    {
        const bool branch_taken_0x307150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x307154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307150u;
        // 0x307154: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307150) {
            ctx->pc = 0x307194u;
            goto label_307194;
        }
    }
    ctx->pc = 0x307158u;
    // 0x307158: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x307158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30715c: 0xc0c1686  jal         func_305A18
    ctx->pc = 0x30715Cu;
    SET_GPR_U32(ctx, 31, 0x307164u);
    ctx->pc = 0x307160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30715Cu;
    // 0x307160: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305A18u, 0x30715Cu, 0x307164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307164u;
label_307164:
    // 0x307164: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x307168: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x307168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30716c: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x30716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x307170: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x307170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x307174: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
label_307178:
    // 0x307178: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x307178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30717c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x307180: 0x0  nop
    ctx->pc = 0x307180u;
    // NOP
    // 0x307184: 0x0  nop
    ctx->pc = 0x307184u;
    // NOP
    // 0x307188: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x307188u;
    {
        const bool branch_taken_0x307188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x30718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307188u;
        // 0x30718c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307188) {
            ctx->pc = 0x307178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307178;
        }
    }
    ctx->pc = 0x307190u;
label_307190:
    // 0x307190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307194:
    // 0x307194: 0x3e00008  jr          $ra
    ctx->pc = 0x307194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307194u;
        // 0x307198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30719Cu;
    // 0x30719c: 0x0  nop
    ctx->pc = 0x30719cu;
    // NOP
    ctx->pc = 0x3071a0u;
}
