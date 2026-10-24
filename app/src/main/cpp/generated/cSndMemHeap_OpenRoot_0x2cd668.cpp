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

// Function: cSndMemHeap_OpenRoot
// Address: 0x2cd668 - 0x2cd6d0
void cSndMemHeap_OpenRoot_0x2cd668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_OpenRoot_0x2cd668");
#endif

    switch (ctx->pc) {
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd6a4u: goto label_2cd6a4;
        default: break;
    }

    ctx->pc = 0x2cd668u;

    // 0x2cd668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd66c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cd66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cd670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd674: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cd674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cd678: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cd678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cd67c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cd67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd684: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cd684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd688: 0xae100380  sw          $s0, 0x380($s0)
    ctx->pc = 0x2cd688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 16));
    // 0x2cd68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd690: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CD690u;
    SET_GPR_U32(ctx, 31, 0x2CD698u);
    ctx->pc = 0x2CD694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD690u;
    // 0x2cd694: 0x24060380  addiu       $a2, $zero, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CD690u, 0x2CD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD698u;
label_2cd698:
    // 0x2cd698: 0xae110384  sw          $s1, 0x384($s0)
    ctx->pc = 0x2cd698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 17));
    // 0x2cd69c: 0xc0b35d0  jal         func_2CD740
    ctx->pc = 0x2CD69Cu;
    SET_GPR_U32(ctx, 31, 0x2CD6A4u);
    ctx->pc = 0x2CD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD69Cu;
    // 0x2cd6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD740u, 0x2CD69Cu, 0x2CD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6A4u;
label_2cd6a4:
    // 0x2cd6a4: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2cd6a8: 0xae10038c  sw          $s0, 0x38C($s0)
    ctx->pc = 0x2cd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 16));
    // 0x2cd6ac: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x2cd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x2cd6b0: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x2cd6b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cd6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd6b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cd6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd6bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cd6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6C4u;
        // 0x2cd6c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD6CCu;
    // 0x2cd6cc: 0x0  nop
    ctx->pc = 0x2cd6ccu;
    // NOP
    ctx->pc = 0x2cd6d0u;
}
