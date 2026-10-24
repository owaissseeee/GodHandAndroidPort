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

// Function: cCoreSave_getComboLv
// Address: 0x1fb750 - 0x1fb7d8
void cCoreSave_getComboLv_0x1fb750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getComboLv_0x1fb750");
#endif

    switch (ctx->pc) {
        case 0x1fb78cu: goto label_1fb78c;
        default: break;
    }

    ctx->pc = 0x1fb750u;

    // 0x1fb750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fb754: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fb754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fb758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fb75c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fb75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb760: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fb760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fb764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb76c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb770: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB770u;
    {
        const bool branch_taken_0x1fb770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB770u;
        // 0x1fb774: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb770) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB778u;
    // 0x1fb778: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1fb778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb77c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FB77Cu;
    {
        const bool branch_taken_0x1fb77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB77Cu;
        // 0x1fb780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb77c) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB784u;
    // 0x1fb784: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x1FB784u;
    SET_GPR_U32(ctx, 31, 0x1FB78Cu);
    ctx->pc = 0x1FB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB784u;
    // 0x1fb788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x1FB784u, 0x1FB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB78Cu;
label_1fb78c:
    // 0x1fb78c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fb790: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB790u;
    {
        const bool branch_taken_0x1fb790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB790u;
        // 0x1fb794: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb790) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB798u;
    // 0x1fb798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB798u;
    {
        const bool branch_taken_0x1fb798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB798u;
        // 0x1fb79c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb798) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB7A0u;
    // 0x1fb7a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb7a4: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x1fb7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fb7a8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1fb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fb7ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb7b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB7B0u;
    {
        const bool branch_taken_0x1fb7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B0u;
        // 0x1fb7b4: 0x806201c8  lb          $v0, 0x1C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b0) {
            ctx->pc = 0x1FB7BCu;
            goto label_1fb7bc;
        }
    }
    ctx->pc = 0x1FB7B8u;
label_1fb7b8:
    // 0x1fb7b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb7bc:
    // 0x1fb7bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb7c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb7c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fb7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7CCu;
        // 0x1fb7d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7D4u;
    // 0x1fb7d4: 0x0  nop
    ctx->pc = 0x1fb7d4u;
    // NOP
    ctx->pc = 0x1fb7d8u;
}
