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

// Function: cSndBgmNode_Init
// Address: 0x2cc578 - 0x2cc5c0
void cSndBgmNode_Init_0x2cc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Init_0x2cc578");
#endif

    switch (ctx->pc) {
        case 0x2cc594u: goto label_2cc594;
        default: break;
    }

    ctx->pc = 0x2cc578u;

    // 0x2cc578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cc580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cc584: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2cc588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc58c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CC58Cu;
    SET_GPR_U32(ctx, 31, 0x2CC594u);
    ctx->pc = 0x2CC590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC58Cu;
    // 0x2cc590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CC58Cu, 0x2CC594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC594u;
label_2cc594:
    // 0x2cc594: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc598: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2cc598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2cc59c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x2cc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x2cc5a0: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x2cc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x2cc5a4: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2cc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2cc5a8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2cc5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2cc5ac: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2cc5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2cc5b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cc5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5B8u;
        // 0x2cc5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC5C0u;
}
