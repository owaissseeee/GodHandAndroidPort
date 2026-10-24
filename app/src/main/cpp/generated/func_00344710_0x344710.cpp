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

// Function: func_00344710
// Address: 0x344710 - 0x344770
void func_00344710_0x344710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344710_0x344710");
#endif

    switch (ctx->pc) {
        case 0x344730u: goto label_344730;
        case 0x344744u: goto label_344744;
        default: break;
    }

    ctx->pc = 0x344710u;

    // 0x344710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34471c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x344720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344724: 0x26300280  addiu       $s0, $s1, 0x280
    ctx->pc = 0x344724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x344728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34472c: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x34472cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_344730:
    // 0x344730: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x344730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x344734: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x344734u;
    {
        const bool branch_taken_0x344734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x344734) {
            ctx->pc = 0x344738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344734u;
            // 0x344738: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34474Cu;
            goto label_34474c;
        }
    }
    ctx->pc = 0x34473Cu;
    // 0x34473c: 0xc0d11a0  jal         func_344680
    ctx->pc = 0x34473Cu;
    SET_GPR_U32(ctx, 31, 0x344744u);
    ctx->pc = 0x344740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34473Cu;
    // 0x344740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344680u, 0x34473Cu, 0x344744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344744u;
label_344744:
    // 0x344744: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x344744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x344748: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x344748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_34474c:
    // 0x34474c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34474Cu;
    {
        const bool branch_taken_0x34474c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x344750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34474Cu;
        // 0x344750: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34474c) {
            ctx->pc = 0x344730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344730;
        }
    }
    ctx->pc = 0x344754u;
    // 0x344754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34475c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34475cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344760: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344764: 0x3e00008  jr          $ra
    ctx->pc = 0x344764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344764u;
        // 0x344768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34476Cu;
    // 0x34476c: 0x0  nop
    ctx->pc = 0x34476cu;
    // NOP
    ctx->pc = 0x344770u;
}
