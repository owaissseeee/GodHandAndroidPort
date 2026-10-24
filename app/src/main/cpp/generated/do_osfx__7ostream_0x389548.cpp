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

// Function: do_osfx__7ostream
// Address: 0x389548 - 0x3895b0
void do_osfx__7ostream_0x389548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_osfx__7ostream_0x389548");
#endif

    switch (ctx->pc) {
        case 0x389574u: goto label_389574;
        case 0x389594u: goto label_389594;
        case 0x3895a0u: goto label_3895a0;
        default: break;
    }

    ctx->pc = 0x389548u;

    // 0x389548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38954c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38955c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38955cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x389560: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x389560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x389564: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x389564u;
    {
        const bool branch_taken_0x389564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389564) {
            ctx->pc = 0x389568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389564u;
            // 0x389568: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38957Cu;
            goto label_38957c;
        }
    }
    ctx->pc = 0x38956Cu;
    // 0x38956c: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38956Cu;
    SET_GPR_U32(ctx, 31, 0x389574u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38956Cu, 0x389574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389574u;
label_389574:
    // 0x389574: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389578: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x389578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_38957c:
    // 0x38957c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x389580: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x389580u;
    {
        const bool branch_taken_0x389580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389580u;
        // 0x389584: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389580) {
            ctx->pc = 0x3895A0u;
            goto label_3895a0;
        }
    }
    ctx->pc = 0x389588u;
    // 0x389588: 0x8e02a62c  lw          $v0, -0x59D4($s0)
    ctx->pc = 0x389588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    // 0x38958c: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x38958Cu;
    SET_GPR_U32(ctx, 31, 0x389594u);
    ctx->pc = 0x389590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38958Cu;
    // 0x389590: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x38958Cu, 0x389594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389594u;
label_389594:
    // 0x389594: 0x8e03a62c  lw          $v1, -0x59D4($s0)
    ctx->pc = 0x389594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    // 0x389598: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x389598u;
    SET_GPR_U32(ctx, 31, 0x3895A0u);
    ctx->pc = 0x38959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389598u;
    // 0x38959c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x389598u, 0x3895A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3895A0u;
label_3895a0:
    // 0x3895a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3895a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3895a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3895a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3895a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3895A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3895ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895A8u;
        // 0x3895ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3895A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3895B0u;
}
