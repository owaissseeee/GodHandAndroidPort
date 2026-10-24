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

// Function: FreeObjResourceAndDestroy_16FFF0
// Address: 0x16fff0 - 0x170050
void FreeObjResourceAndDestroy_16FFF0_0x16fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjResourceAndDestroy_16FFF0_0x16fff0");
#endif

    switch (ctx->pc) {
        case 0x17002cu: goto label_17002c;
        case 0x17003cu: goto label_17003c;
        default: break;
    }

    ctx->pc = 0x16fff0u;

    // 0x16fff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fff4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16fff8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16fffc: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x16fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
    // 0x170000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17000c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17000cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x170010: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x170010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x170014: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170014u;
    {
        const bool branch_taken_0x170014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170014u;
        // 0x170018: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170014) {
            ctx->pc = 0x170030u;
            goto label_170030;
        }
    }
    ctx->pc = 0x17001Cu;
    // 0x17001c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17001cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170020: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x170020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170024: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x170024u;
    SET_GPR_U32(ctx, 31, 0x17002Cu);
    ctx->pc = 0x170028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170024u;
    // 0x170028: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x170024u, 0x17002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17002Cu;
label_17002c:
    // 0x17002c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x17002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_170030:
    // 0x170030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170034: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x170034u;
    SET_GPR_U32(ctx, 31, 0x17003Cu);
    ctx->pc = 0x170038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170034u;
    // 0x170038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x170034u, 0x17003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17003Cu;
label_17003c:
    // 0x17003c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17003cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170048: 0x3e00008  jr          $ra
    ctx->pc = 0x170048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170048u;
        // 0x17004c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170050u;
}
