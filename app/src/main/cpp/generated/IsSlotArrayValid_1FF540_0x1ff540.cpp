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

// Function: IsSlotArrayValid_1FF540
// Address: 0x1ff540 - 0x1ff5b8
void IsSlotArrayValid_1FF540_0x1ff540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSlotArrayValid_1FF540_0x1ff540");
#endif

    switch (ctx->pc) {
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff56cu: goto label_1ff56c;
        default: break;
    }

    ctx->pc = 0x1ff540u;

    // 0x1ff540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff544: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ff544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ff548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ff54c: 0x24900024  addiu       $s0, $a0, 0x24
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1ff550: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ff550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ff554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff55c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_1ff560:
    // 0x1ff560: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff564: 0xc0b2dde  jal         func_2CB778
    ctx->pc = 0x1FF564u;
    SET_GPR_U32(ctx, 31, 0x1FF56Cu);
    ctx->pc = 0x1FF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF564u;
    // 0x1ff568: 0x2644ee00  addiu       $a0, $s2, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB778u, 0x1FF564u, 0x1FF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF56Cu;
label_1ff56c:
    // 0x1ff56c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF56Cu;
    {
        const bool branch_taken_0x1ff56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF56Cu;
        // 0x1ff570: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff56c) {
            ctx->pc = 0x1FF57Cu;
            goto label_1ff57c;
        }
    }
    ctx->pc = 0x1FF574u;
    // 0x1ff574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF574u;
    {
        const bool branch_taken_0x1ff574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF574u;
        // 0x1ff578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff574) {
            ctx->pc = 0x1FF58Cu;
            goto label_1ff58c;
        }
    }
    ctx->pc = 0x1FF57Cu;
label_1ff57c:
    // 0x1ff57c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1ff57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ff580: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FF580u;
    {
        const bool branch_taken_0x1ff580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF580u;
        // 0x1ff584: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff580) {
            ctx->pc = 0x1FF560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff560;
        }
    }
    ctx->pc = 0x1FF588u;
    // 0x1ff588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff58c:
    // 0x1ff58c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ff58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff590: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ff590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff594: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ff594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF59Cu;
        // 0x1ff5a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF5A4u;
    // 0x1ff5a4: 0x0  nop
    ctx->pc = 0x1ff5a4u;
    // NOP
    // 0x1ff5a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff5ac: 0x0  nop
    ctx->pc = 0x1ff5acu;
    // NOP
    // 0x1ff5b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff5b4: 0x0  nop
    ctx->pc = 0x1ff5b4u;
    // NOP
    ctx->pc = 0x1ff5b8u;
}
