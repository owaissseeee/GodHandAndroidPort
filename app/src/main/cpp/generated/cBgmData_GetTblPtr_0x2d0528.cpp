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

// Function: cBgmData_GetTblPtr
// Address: 0x2d0528 - 0x2d0578
void cBgmData_GetTblPtr_0x2d0528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_GetTblPtr_0x2d0528");
#endif

    switch (ctx->pc) {
        case 0x2d0544u: goto label_2d0544;
        default: break;
    }

    ctx->pc = 0x2d0528u;

    // 0x2d0528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d052c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d0530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d053c: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D053Cu;
    SET_GPR_U32(ctx, 31, 0x2D0544u);
    ctx->pc = 0x2D0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D053Cu;
    // 0x2d0540: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D053Cu, 0x2D0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0544u;
label_2d0544:
    // 0x2d0544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0544u;
    {
        const bool branch_taken_0x2d0544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0544u;
        // 0x2d0548: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0544) {
            ctx->pc = 0x2D0558u;
            goto label_2d0558;
        }
    }
    ctx->pc = 0x2D054Cu;
    // 0x2d054c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d0550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0550u;
    {
        const bool branch_taken_0x2d0550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0550u;
        // 0x2d0554: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0550) {
            ctx->pc = 0x2D055Cu;
            goto label_2d055c;
        }
    }
    ctx->pc = 0x2D0558u;
label_2d0558:
    // 0x2d0558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d055c:
    // 0x2d055c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d055cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0568: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0568u;
        // 0x2d056c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0570u;
    // 0x2d0570: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d0574: 0x0  nop
    ctx->pc = 0x2d0574u;
    // NOP
    ctx->pc = 0x2d0578u;
}
