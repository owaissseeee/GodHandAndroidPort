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

// Function: func_003BB980
// Address: 0x3bb980 - 0x3bba10
void func_003BB980_0x3bb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BB980_0x3bb980");
#endif

    switch (ctx->pc) {
        case 0x3bb9a8u: goto label_3bb9a8;
        case 0x3bb9ccu: goto label_3bb9cc;
        default: break;
    }

    ctx->pc = 0x3bb980u;

    // 0x3bb980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb984: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bb984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3bb988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bb98c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bb98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb990: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3bb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3bb994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bb998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb99c: 0x12320015  beq         $s1, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BB99Cu;
    {
        const bool branch_taken_0x3bb99c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3BB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB99Cu;
        // 0x3bb9a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb99c) {
            ctx->pc = 0x3BB9F4u;
            goto label_3bb9f4;
        }
    }
    ctx->pc = 0x3BB9A4u;
    // 0x3bb9a4: 0x0  nop
    ctx->pc = 0x3bb9a4u;
    // NOP
label_3bb9a8:
    // 0x3bb9a8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BB9A8u;
    {
        const bool branch_taken_0x3bb9a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb9a8) {
            ctx->pc = 0x3BB9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB9A8u;
            // 0x3bb9ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB9ECu;
            goto label_3bb9ec;
        }
    }
    ctx->pc = 0x3BB9B0u;
    // 0x3bb9b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bb9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb9b4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb9b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb9bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB9BCu;
    {
        const bool branch_taken_0x3bb9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb9bc) {
            ctx->pc = 0x3BB9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB9BCu;
            // 0x3bb9c0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB9D4u;
            goto label_3bb9d4;
        }
    }
    ctx->pc = 0x3BB9C4u;
    // 0x3bb9c4: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB9C4u;
    SET_GPR_U32(ctx, 31, 0x3BB9CCu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB9C4u, 0x3BB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB9CCu;
label_3bb9cc:
    // 0x3bb9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB9CCu;
    {
        const bool branch_taken_0x3bb9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9CCu;
        // 0x3bb9d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9cc) {
            ctx->pc = 0x3BB9DCu;
            goto label_3bb9dc;
        }
    }
    ctx->pc = 0x3BB9D4u;
label_3bb9d4:
    // 0x3bb9d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb9d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb9dc:
    // 0x3bb9dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bb9e0: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x3bb9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bb9e4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3bb9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb9e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3bb9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3bb9ec:
    // 0x3bb9ec: 0x1632ffee  bne         $s1, $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3BB9ECu;
    {
        const bool branch_taken_0x3bb9ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x3BB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9ECu;
        // 0x3bb9f0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9ec) {
            ctx->pc = 0x3BB9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb9a8;
        }
    }
    ctx->pc = 0x3BB9F4u;
label_3bb9f4:
    // 0x3bb9f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bb9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bb9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb9fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bb9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bba00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bba00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bba04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bba08: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA08u;
        // 0x3bba0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBA10u;
}
