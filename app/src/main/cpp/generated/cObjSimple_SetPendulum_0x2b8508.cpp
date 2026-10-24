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

// Function: cObjSimple_SetPendulum
// Address: 0x2b8508 - 0x2b8570
void cObjSimple_SetPendulum_0x2b8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SetPendulum_0x2b8508");
#endif

    switch (ctx->pc) {
        case 0x2b8548u: goto label_2b8548;
        case 0x2b8558u: goto label_2b8558;
        default: break;
    }

    ctx->pc = 0x2b8508u;

    // 0x2b8508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b850c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b850cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8510: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b8510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b8518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b851c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b851cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8524: 0x24512f20  addiu       $s1, $v0, 0x2F20
    ctx->pc = 0x2b8524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x2b8528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8530: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2b8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8534: 0xac471394  sw          $a3, 0x1394($v0)
    ctx->pc = 0x2b8534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5012), GPR_U32(ctx, 7));
    // 0x2b8538: 0xa0431390  sb          $v1, 0x1390($v0)
    ctx->pc = 0x2b8538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5008), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b853c: 0x24a613a0  addiu       $a2, $a1, 0x13A0
    ctx->pc = 0x2b853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5024));
    // 0x2b8540: 0xc0b7a60  jal         func_2DE980
    ctx->pc = 0x2B8540u;
    SET_GPR_U32(ctx, 31, 0x2B8548u);
    ctx->pc = 0x2B8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8540u;
    // 0x2b8544: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE980u, 0x2B8540u, 0x2B8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8548u;
label_2b8548:
    // 0x2b8548: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8548u;
    {
        const bool branch_taken_0x2b8548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8548u;
        // 0x2b854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8548) {
            ctx->pc = 0x2B8558u;
            goto label_2b8558;
        }
    }
    ctx->pc = 0x2B8550u;
    // 0x2b8550: 0xc0b7e4e  jal         func_2DF938
    ctx->pc = 0x2B8550u;
    SET_GPR_U32(ctx, 31, 0x2B8558u);
    ctx->pc = 0x2B8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8550u;
    // 0x2b8554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF938u, 0x2B8550u, 0x2B8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8558u;
label_2b8558:
    // 0x2b8558: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b8558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b855c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b855cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8564: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8564u;
        // 0x2b8568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B856Cu;
    // 0x2b856c: 0x0  nop
    ctx->pc = 0x2b856cu;
    // NOP
    ctx->pc = 0x2b8570u;
}
