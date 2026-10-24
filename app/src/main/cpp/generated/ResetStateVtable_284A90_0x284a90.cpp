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

// Function: ResetStateVtable_284A90
// Address: 0x284a90 - 0x284af8
void ResetStateVtable_284A90_0x284a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetStateVtable_284A90_0x284a90");
#endif

    switch (ctx->pc) {
        case 0x284ab8u: goto label_284ab8;
        case 0x284accu: goto label_284acc;
        case 0x284ad8u: goto label_284ad8;
        case 0x284ae4u: goto label_284ae4;
        default: break;
    }

    ctx->pc = 0x284a90u;

    // 0x284a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284a94: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x284a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x284a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x284a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x284a9c: 0x24428ca0  addiu       $v0, $v0, -0x7360
    ctx->pc = 0x284a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937760));
    // 0x284aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x284aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ab0: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x284AB0u;
    SET_GPR_U32(ctx, 31, 0x284AB8u);
    ctx->pc = 0x284AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AB0u;
    // 0x284ab4: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x284AB0u, 0x284AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AB8u;
label_284ab8:
    // 0x284ab8: 0x8e0415c4  lw          $a0, 0x15C4($s0)
    ctx->pc = 0x284ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
    // 0x284abc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284ABCu;
    {
        const bool branch_taken_0x284abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284abc) {
            ctx->pc = 0x284AD0u;
            goto label_284ad0;
        }
    }
    ctx->pc = 0x284AC4u;
    // 0x284ac4: 0xc0708dc  jal         func_1C2370
    ctx->pc = 0x284AC4u;
    SET_GPR_U32(ctx, 31, 0x284ACCu);
    ctx->pc = 0x1C2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2370u, 0x284AC4u, 0x284ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ACCu;
label_284acc:
    // 0x284acc: 0xae0015c4  sw          $zero, 0x15C4($s0)
    ctx->pc = 0x284accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 0));
label_284ad0:
    // 0x284ad0: 0xc0a159e  jal         func_285678
    ctx->pc = 0x284AD0u;
    SET_GPR_U32(ctx, 31, 0x284AD8u);
    ctx->pc = 0x284AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284AD0u;
    // 0x284ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285678u, 0x284AD0u, 0x284AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AD8u;
label_284ad8:
    // 0x284ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284adc: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x284ADCu;
    SET_GPR_U32(ctx, 31, 0x284AE4u);
    ctx->pc = 0x284AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284ADCu;
    // 0x284ae0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x284ADCu, 0x284AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284AE4u;
label_284ae4:
    // 0x284ae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x284ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284af0: 0x3e00008  jr          $ra
    ctx->pc = 0x284AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AF0u;
        // 0x284af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AF8u;
}
