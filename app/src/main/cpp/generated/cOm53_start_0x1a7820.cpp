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

// Function: cOm53_start
// Address: 0x1a7820 - 0x1a7880
void cOm53_start_0x1a7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm53_start_0x1a7820");
#endif

    switch (ctx->pc) {
        case 0x1a7834u: goto label_1a7834;
        case 0x1a784cu: goto label_1a784c;
        case 0x1a7858u: goto label_1a7858;
        default: break;
    }

    ctx->pc = 0x1a7820u;

    // 0x1a7820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a7828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a782c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A782Cu;
    SET_GPR_U32(ctx, 31, 0x1A7834u);
    ctx->pc = 0x1A7830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A782Cu;
    // 0x1a7830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A782Cu, 0x1A7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7834u;
label_1a7834:
    // 0x1a7834: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x1a7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x1a7838: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x1a783c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7840: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7844: 0xc06a03c  jal         func_1A80F0
    ctx->pc = 0x1A7844u;
    SET_GPR_U32(ctx, 31, 0x1A784Cu);
    ctx->pc = 0x1A7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7844u;
    // 0x1a7848: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80F0u, 0x1A7844u, 0x1A784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A784Cu;
label_1a784c:
    // 0x1a784c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7850: 0xc06a03e  jal         func_1A80F8
    ctx->pc = 0x1A7850u;
    SET_GPR_U32(ctx, 31, 0x1A7858u);
    ctx->pc = 0x1A7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7850u;
    // 0x1a7854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80F8u, 0x1A7850u, 0x1A7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7858u;
label_1a7858:
    // 0x1a7858: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1a785c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7860: 0xa2000613  sb          $zero, 0x613($s0)
    ctx->pc = 0x1a7860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1555), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7864: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1a7864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1a7868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a786c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a786cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1a7870: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a7870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7874: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7874u;
        // 0x1a7878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A787Cu;
    // 0x1a787c: 0x0  nop
    ctx->pc = 0x1a787cu;
    // NOP
    ctx->pc = 0x1a7880u;
}
