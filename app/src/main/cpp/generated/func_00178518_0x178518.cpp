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

// Function: func_00178518
// Address: 0x178518 - 0x178568
void func_00178518_0x178518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178518_0x178518");
#endif

    switch (ctx->pc) {
        case 0x17853cu: goto label_17853c;
        case 0x178554u: goto label_178554;
        default: break;
    }

    ctx->pc = 0x178518u;

    // 0x178518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17851c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x178520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178524: 0x8c6258f8  lw          $v0, 0x58F8($v1)
    ctx->pc = 0x178524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858F8u));
    // 0x178528: 0x247058f8  addiu       $s0, $v1, 0x58F8
    ctx->pc = 0x178528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22776));
    // 0x17852c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17852Cu;
    {
        const bool branch_taken_0x17852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17852Cu;
        // 0x178530: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17852c) {
            ctx->pc = 0x178554u;
            goto label_178554;
        }
    }
    ctx->pc = 0x178534u;
    // 0x178534: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x178534u;
    SET_GPR_U32(ctx, 31, 0x17853Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x178534u, 0x17853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17853Cu;
label_17853c:
    // 0x17853c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17853cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x178540: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x178544: 0x24a51490  addiu       $a1, $a1, 0x1490
    ctx->pc = 0x178544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5264));
    // 0x178548: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x178548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x17854c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17854Cu;
    SET_GPR_U32(ctx, 31, 0x178554u);
    ctx->pc = 0x178550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17854Cu;
    // 0x178550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17854Cu, 0x178554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178554u;
label_178554:
    // 0x178554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17855c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17855cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178560: 0x3e00008  jr          $ra
    ctx->pc = 0x178560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178560u;
        // 0x178564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178568u;
}
