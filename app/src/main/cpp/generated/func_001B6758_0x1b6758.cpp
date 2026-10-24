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

// Function: func_001B6758
// Address: 0x1b6758 - 0x1b67d0
void func_001B6758_0x1b6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6758_0x1b6758");
#endif

    switch (ctx->pc) {
        case 0x1b6794u: goto label_1b6794;
        case 0x1b67acu: goto label_1b67ac;
        case 0x1b67bcu: goto label_1b67bc;
        default: break;
    }

    ctx->pc = 0x1b6758u;

    // 0x1b6758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b675c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b6760: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6764: 0x24428928  addiu       $v0, $v0, -0x76D8
    ctx->pc = 0x1b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936872));
    // 0x1b6768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b676c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b676cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6774: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b6774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b6778: 0x8e030624  lw          $v1, 0x624($s0)
    ctx->pc = 0x1b6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1b677c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B677Cu;
    {
        const bool branch_taken_0x1b677c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B677Cu;
        // 0x1b6780: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b677c) {
            ctx->pc = 0x1B6798u;
            goto label_1b6798;
        }
    }
    ctx->pc = 0x1B6784u;
    // 0x1b6784: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b6788: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b6788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b678c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1B678Cu;
    SET_GPR_U32(ctx, 31, 0x1B6794u);
    ctx->pc = 0x1B6790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B678Cu;
    // 0x1b6790: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1B678Cu, 0x1B6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6794u;
label_1b6794:
    // 0x1b6794: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1b6794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
label_1b6798:
    // 0x1b6798: 0x8e050620  lw          $a1, 0x620($s0)
    ctx->pc = 0x1b6798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1b679c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B679Cu;
    {
        const bool branch_taken_0x1b679c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B679Cu;
        // 0x1b67a0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b679c) {
            ctx->pc = 0x1B67B0u;
            goto label_1b67b0;
        }
    }
    ctx->pc = 0x1B67A4u;
    // 0x1b67a4: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B67A4u;
    SET_GPR_U32(ctx, 31, 0x1B67ACu);
    ctx->pc = 0x1B67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67A4u;
    // 0x1b67a8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B67A4u, 0x1B67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67ACu;
label_1b67ac:
    // 0x1b67ac: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1b67acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
label_1b67b0:
    // 0x1b67b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67b4: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B67B4u;
    SET_GPR_U32(ctx, 31, 0x1B67BCu);
    ctx->pc = 0x1B67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67B4u;
    // 0x1b67b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B67B4u, 0x1B67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67BCu;
label_1b67bc:
    // 0x1b67bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b67bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b67c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b67c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b67c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b67c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b67c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67C8u;
        // 0x1b67cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B67C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B67D0u;
}
