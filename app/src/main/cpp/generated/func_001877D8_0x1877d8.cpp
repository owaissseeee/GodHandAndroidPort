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

// Function: func_001877D8
// Address: 0x1877d8 - 0x187838
void func_001877D8_0x1877d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001877D8_0x1877d8");
#endif

    switch (ctx->pc) {
        case 0x187814u: goto label_187814;
        case 0x187824u: goto label_187824;
        default: break;
    }

    ctx->pc = 0x1877d8u;

    // 0x1877d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1877d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1877dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1877e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1877e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1877e4: 0x24423148  addiu       $v0, $v0, 0x3148
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12616));
    // 0x1877e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1877e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1877ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1877ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1877f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1877f4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1877f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1877f8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1877fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1877FCu;
    {
        const bool branch_taken_0x1877fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877FCu;
        // 0x187800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877fc) {
            ctx->pc = 0x187818u;
            goto label_187818;
        }
    }
    ctx->pc = 0x187804u;
    // 0x187804: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x187808: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x187808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18780c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18780Cu;
    SET_GPR_U32(ctx, 31, 0x187814u);
    ctx->pc = 0x187810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18780Cu;
    // 0x187810: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18780Cu, 0x187814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187814u;
label_187814:
    // 0x187814: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x187814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_187818:
    // 0x187818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18781c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x18781Cu;
    SET_GPR_U32(ctx, 31, 0x187824u);
    ctx->pc = 0x187820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18781Cu;
    // 0x187820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x18781Cu, 0x187824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187824u;
label_187824:
    // 0x187824: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18782c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187830: 0x3e00008  jr          $ra
    ctx->pc = 0x187830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187830u;
        // 0x187834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187838u;
}
