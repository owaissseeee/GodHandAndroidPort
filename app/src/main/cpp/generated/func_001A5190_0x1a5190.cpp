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

// Function: func_001A5190
// Address: 0x1a5190 - 0x1a5208
void func_001A5190_0x1a5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5190_0x1a5190");
#endif

    switch (ctx->pc) {
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51f4u: goto label_1a51f4;
        default: break;
    }

    ctx->pc = 0x1a5190u;

    // 0x1a5190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5194: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a5194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a5198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a519c: 0x244272f8  addiu       $v0, $v0, 0x72F8
    ctx->pc = 0x1a519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29432));
    // 0x1a51a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a51a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a51a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a51a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a51ac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a51acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a51b0: 0x8e030624  lw          $v1, 0x624($s0)
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1a51b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A51B4u;
    {
        const bool branch_taken_0x1a51b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51B4u;
        // 0x1a51b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51b4) {
            ctx->pc = 0x1A51D0u;
            goto label_1a51d0;
        }
    }
    ctx->pc = 0x1A51BCu;
    // 0x1a51bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a51c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a51c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51c4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A51C4u;
    SET_GPR_U32(ctx, 31, 0x1A51CCu);
    ctx->pc = 0x1A51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51C4u;
    // 0x1a51c8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A51C4u, 0x1A51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51CCu;
label_1a51cc:
    // 0x1a51cc: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1a51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
label_1a51d0:
    // 0x1a51d0: 0x8e050620  lw          $a1, 0x620($s0)
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1a51d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A51D4u;
    {
        const bool branch_taken_0x1a51d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51d4) {
            ctx->pc = 0x1A51E8u;
            goto label_1a51e8;
        }
    }
    ctx->pc = 0x1A51DCu;
    // 0x1a51dc: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1A51DCu;
    SET_GPR_U32(ctx, 31, 0x1A51E4u);
    ctx->pc = 0x1A51E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51DCu;
    // 0x1a51e0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1A51DCu, 0x1A51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51E4u;
label_1a51e4:
    // 0x1a51e4: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1a51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
label_1a51e8:
    // 0x1a51e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a51e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51ec: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A51ECu;
    SET_GPR_U32(ctx, 31, 0x1A51F4u);
    ctx->pc = 0x1A51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51ECu;
    // 0x1a51f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A51ECu, 0x1A51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F4u;
label_1a51f4:
    // 0x1a51f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a51f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a51f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a51f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a51fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a51fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5200: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5200u;
        // 0x1a5204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5208u;
}
