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

// Function: func_0017FC58
// Address: 0x17fc58 - 0x17fcb8
void func_0017FC58_0x17fc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FC58_0x17fc58");
#endif

    switch (ctx->pc) {
        case 0x17fc6cu: goto label_17fc6c;
        case 0x17fca0u: goto label_17fca0;
        default: break;
    }

    ctx->pc = 0x17fc58u;

    // 0x17fc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17fc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fc5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17fc60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fc64: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17FC64u;
    SET_GPR_U32(ctx, 31, 0x17FC6Cu);
    ctx->pc = 0x17FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC64u;
    // 0x17fc68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17FC64u, 0x17FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC6Cu;
label_17fc6c:
    // 0x17fc6c: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x17fc70: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x17fc74: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x17fc78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fc7c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17fc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17fc80: 0xa2000a29  sb          $zero, 0xA29($s0)
    ctx->pc = 0x17fc80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2601), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fc84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17fc88: 0xa2000a28  sb          $zero, 0xA28($s0)
    ctx->pc = 0x17fc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2600), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fc8c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x17fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x17fc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x17fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x17fc98: 0xc0600e2  jal         func_180388
    ctx->pc = 0x17FC98u;
    SET_GPR_U32(ctx, 31, 0x17FCA0u);
    ctx->pc = 0x17FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC98u;
    // 0x17fc9c: 0xae050a24  sw          $a1, 0xA24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2596), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180388u, 0x17FC98u, 0x17FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCA0u;
label_17fca0:
    // 0x17fca0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x17FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCACu;
        // 0x17fcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FCB4u;
    // 0x17fcb4: 0x0  nop
    ctx->pc = 0x17fcb4u;
    // NOP
    ctx->pc = 0x17fcb8u;
}
