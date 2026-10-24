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

// Function: PosObj_forwardSpan
// Address: 0x2b0420 - 0x2b0480
void PosObj_forwardSpan_0x2b0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PosObj_forwardSpan_0x2b0420");
#endif

    switch (ctx->pc) {
        case 0x2b044cu: goto label_2b044c;
        case 0x2b0468u: goto label_2b0468;
        default: break;
    }

    ctx->pc = 0x2b0420u;

    // 0x2b0420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0424: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b0428: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b042c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b042cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b0434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b043c: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x2b043cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b0440: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b0440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b0444: 0xc0ac4a4  jal         func_2B1290
    ctx->pc = 0x2B0444u;
    SET_GPR_U32(ctx, 31, 0x2B044Cu);
    ctx->pc = 0x2B0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0444u;
    // 0x2b0448: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1290u, 0x2B0444u, 0x2B044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B044Cu;
label_2b044c:
    // 0x2b044c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0450: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b0450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0454: 0xc48c0088  lwc1        $f12, 0x88($a0)
    ctx->pc = 0x2b0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0458: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b0458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b045c: 0xc48d008c  lwc1        $f13, 0x8C($a0)
    ctx->pc = 0x2b045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b0460: 0xc0abfb4  jal         func_2AFED0
    ctx->pc = 0x2B0460u;
    SET_GPR_U32(ctx, 31, 0x2B0468u);
    ctx->pc = 0x2B0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0460u;
    // 0x2b0464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFED0u, 0x2B0460u, 0x2B0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0468u;
label_2b0468:
    // 0x2b0468: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b046c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b046cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0470: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0478: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0478u;
        // 0x2b047c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0480u;
}
