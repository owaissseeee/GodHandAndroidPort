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

// Function: InitRec_start
// Address: 0x1ff470 - 0x1ff4d0
void InitRec_start_0x1ff470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRec_start_0x1ff470");
#endif

    switch (ctx->pc) {
        case 0x1ff4a0u: goto label_1ff4a0;
        default: break;
    }

    ctx->pc = 0x1ff470u;

    // 0x1ff470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff478: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ff478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ff47c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ff480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff484: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff488: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ff488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ff48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff490: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ff490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff498: 0xc0c1e38  jal         func_3078E0
    ctx->pc = 0x1FF498u;
    SET_GPR_U32(ctx, 31, 0x1FF4A0u);
    ctx->pc = 0x1FF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF498u;
    // 0x1ff49c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3078E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3078E0u, 0x1FF498u, 0x1FF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4A0u;
label_1ff4a0:
    // 0x1ff4a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff4a4: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x1ff4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x1ff4a8: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1ff4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1ff4ac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ff4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ff4b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ff4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ff4b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ff4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff4b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff4bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ff4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C4u;
        // 0x1ff4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF4CCu;
    // 0x1ff4cc: 0x0  nop
    ctx->pc = 0x1ff4ccu;
    // NOP
    ctx->pc = 0x1ff4d0u;
}
