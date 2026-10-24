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

// Function: JukeBox_Release
// Address: 0x1f5c48 - 0x1f5cc0
void JukeBox_Release_0x1f5c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JukeBox_Release_0x1f5c48");
#endif

    switch (ctx->pc) {
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5cb0u: goto label_1f5cb0;
        default: break;
    }

    ctx->pc = 0x1f5c48u;

    // 0x1f5c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5c4c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1f5c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f5c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c5c: 0xac4074b0  sw          $zero, 0x74B0($v0)
    ctx->pc = 0x1f5c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7474B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7474B0u, _value); } while (0);
    // 0x1f5c60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f5c64: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1f5c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1f5c68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f5c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5c6c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f5c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f5c70: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f5c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f5c74: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f5c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f5c78: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f5c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f5c7c: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1F5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5C84u);
    ctx->pc = 0x1F5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C7Cu;
    // 0x1f5c80: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1F5C7Cu, 0x1F5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C84u;
label_1f5c84:
    // 0x1f5c84: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1F5C84u;
    SET_GPR_U32(ctx, 31, 0x1F5C8Cu);
    ctx->pc = 0x1F5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C84u;
    // 0x1f5c88: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1F5C84u, 0x1F5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C8Cu;
label_1f5c8c:
    // 0x1f5c8c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f5c90: 0x8c622388  lw          $v0, 0x2388($v1)
    ctx->pc = 0x1f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1f5c94: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1f5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1f5c98: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1f5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1f5c9c: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1f5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f5ca0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5CA0u;
    {
        const bool branch_taken_0x1f5ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA0u;
        // 0x1f5ca4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ca0) {
            ctx->pc = 0x1F5CB4u;
            goto label_1f5cb4;
        }
    }
    ctx->pc = 0x1F5CA8u;
    // 0x1f5ca8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1F5CA8u;
    SET_GPR_U32(ctx, 31, 0x1F5CB0u);
    ctx->pc = 0x1F5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CA8u;
    // 0x1f5cac: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1F5CA8u, 0x1F5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CB0u;
label_1f5cb0:
    // 0x1f5cb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5cb4:
    // 0x1f5cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CB8u;
        // 0x1f5cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CC0u;
}
