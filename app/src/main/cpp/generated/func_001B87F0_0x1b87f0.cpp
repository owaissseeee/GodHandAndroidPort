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

// Function: func_001B87F0
// Address: 0x1b87f0 - 0x1b8868
void func_001B87F0_0x1b87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B87F0_0x1b87f0");
#endif

    switch (ctx->pc) {
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8854u: goto label_1b8854;
        default: break;
    }

    ctx->pc = 0x1b87f0u;

    // 0x1b87f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b87f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b87f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b87f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b87fc: 0x24428c20  addiu       $v0, $v0, -0x73E0
    ctx->pc = 0x1b87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937632));
    // 0x1b8800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b880c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b8810: 0x8e030624  lw          $v1, 0x624($s0)
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1b8814: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8814u;
    {
        const bool branch_taken_0x1b8814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8814u;
        // 0x1b8818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8814) {
            ctx->pc = 0x1B8830u;
            goto label_1b8830;
        }
    }
    ctx->pc = 0x1B881Cu;
    // 0x1b881c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b8820: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8824: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1B8824u;
    SET_GPR_U32(ctx, 31, 0x1B882Cu);
    ctx->pc = 0x1B8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8824u;
    // 0x1b8828: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1B8824u, 0x1B882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B882Cu;
label_1b882c:
    // 0x1b882c: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1b882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
label_1b8830:
    // 0x1b8830: 0x8e050620  lw          $a1, 0x620($s0)
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1b8834: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8834u;
    {
        const bool branch_taken_0x1b8834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8834u;
        // 0x1b8838: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8834) {
            ctx->pc = 0x1B8848u;
            goto label_1b8848;
        }
    }
    ctx->pc = 0x1B883Cu;
    // 0x1b883c: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B883Cu;
    SET_GPR_U32(ctx, 31, 0x1B8844u);
    ctx->pc = 0x1B8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B883Cu;
    // 0x1b8840: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B883Cu, 0x1B8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8844u;
label_1b8844:
    // 0x1b8844: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1b8844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
label_1b8848:
    // 0x1b8848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b884c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B884Cu;
    SET_GPR_U32(ctx, 31, 0x1B8854u);
    ctx->pc = 0x1B8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B884Cu;
    // 0x1b8850: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B884Cu, 0x1B8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8854u;
label_1b8854:
    // 0x1b8854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b885c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b885cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8860: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8860u;
        // 0x1b8864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8868u;
}
