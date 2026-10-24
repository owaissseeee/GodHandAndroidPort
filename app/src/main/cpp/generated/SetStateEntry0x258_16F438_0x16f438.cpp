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

// Function: SetStateEntry0x258_16F438
// Address: 0x16f438 - 0x16f4a8
void SetStateEntry0x258_16F438_0x16f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStateEntry0x258_16F438_0x16f438");
#endif

    switch (ctx->pc) {
        case 0x16f474u: goto label_16f474;
        case 0x16f488u: goto label_16f488;
        case 0x16f494u: goto label_16f494;
        default: break;
    }

    ctx->pc = 0x16f438u;

    // 0x16f438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f43c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16f440: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16f444: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x16f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x16f448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f454: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x16f454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x16f458: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x16f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x16f45c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F45Cu;
    {
        const bool branch_taken_0x16f45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F45Cu;
        // 0x16f460: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f45c) {
            ctx->pc = 0x16F478u;
            goto label_16f478;
        }
    }
    ctx->pc = 0x16F464u;
    // 0x16f464: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16f468: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16f468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f46c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x16F46Cu;
    SET_GPR_U32(ctx, 31, 0x16F474u);
    ctx->pc = 0x16F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F46Cu;
    // 0x16f470: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x16F46Cu, 0x16F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F474u;
label_16f474:
    // 0x16f474: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x16f474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_16f478:
    // 0x16f478: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x16f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x16f47c: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x16f480: 0xc0c15de  jal         func_305778
    ctx->pc = 0x16F480u;
    SET_GPR_U32(ctx, 31, 0x16F488u);
    ctx->pc = 0x16F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F480u;
    // 0x16f484: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x16F480u, 0x16F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F488u;
label_16f488:
    // 0x16f488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f48c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x16F48Cu;
    SET_GPR_U32(ctx, 31, 0x16F494u);
    ctx->pc = 0x16F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F48Cu;
    // 0x16f490: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x16F48Cu, 0x16F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F494u;
label_16f494:
    // 0x16f494: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16f494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x16F4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4A0u;
        // 0x16f4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F4A8u;
}
