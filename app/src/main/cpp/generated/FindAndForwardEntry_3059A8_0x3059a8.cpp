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

// Function: FindAndForwardEntry_3059A8
// Address: 0x3059a8 - 0x305a18
void FindAndForwardEntry_3059A8_0x3059a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindAndForwardEntry_3059A8_0x3059a8");
#endif

    switch (ctx->pc) {
        case 0x3059d8u: goto label_3059d8;
        case 0x3059ecu: goto label_3059ec;
        case 0x3059fcu: goto label_3059fc;
        default: break;
    }

    ctx->pc = 0x3059a8u;

    // 0x3059a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3059ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3059acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3059b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3059b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3059b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3059b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3059b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3059b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3059bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3059c0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3059C0u;
    {
        const bool branch_taken_0x3059c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3059C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059C0u;
        // 0x3059c4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059c0) {
            ctx->pc = 0x3059D0u;
            goto label_3059d0;
        }
    }
    ctx->pc = 0x3059C8u;
    // 0x3059c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3059C8u;
    {
        const bool branch_taken_0x3059c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059C8u;
        // 0x3059cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059c8) {
            ctx->pc = 0x3059FCu;
            goto label_3059fc;
        }
    }
    ctx->pc = 0x3059D0u;
label_3059d0:
    // 0x3059d0: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x3059D0u;
    SET_GPR_U32(ctx, 31, 0x3059D8u);
    ctx->pc = 0x3059D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059D0u;
    // 0x3059d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x3059D0u, 0x3059D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059D8u;
label_3059d8:
    // 0x3059d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3059D8u;
    {
        const bool branch_taken_0x3059d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3059DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059D8u;
        // 0x3059dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059d8) {
            ctx->pc = 0x3059F4u;
            goto label_3059f4;
        }
    }
    ctx->pc = 0x3059E0u;
    // 0x3059e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3059e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059e4: 0xc0c14f0  jal         func_3053C0
    ctx->pc = 0x3059E4u;
    SET_GPR_U32(ctx, 31, 0x3059ECu);
    ctx->pc = 0x3059E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059E4u;
    // 0x3059e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053C0u, 0x3059E4u, 0x3059ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059ECu;
label_3059ec:
    // 0x3059ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3059ECu;
    {
        const bool branch_taken_0x3059ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3059F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059ECu;
        // 0x3059f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059ec) {
            ctx->pc = 0x3059FCu;
            goto label_3059fc;
        }
    }
    ctx->pc = 0x3059F4u;
label_3059f4:
    // 0x3059f4: 0xc0c1616  jal         func_305858
    ctx->pc = 0x3059F4u;
    SET_GPR_U32(ctx, 31, 0x3059FCu);
    ctx->pc = 0x3059F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3059F4u;
    // 0x3059f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305858u, 0x3059F4u, 0x3059FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059FCu;
label_3059fc:
    // 0x3059fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3059fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305a00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305a08: 0x3e00008  jr          $ra
    ctx->pc = 0x305A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A08u;
        // 0x305a0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305A10u;
    // 0x305a10: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x305a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x305a14: 0x0  nop
    ctx->pc = 0x305a14u;
    // NOP
    ctx->pc = 0x305a18u;
}
