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

// Function: SetBlendField4BCColor_1DDC60
// Address: 0x1ddc60 - 0x1ddd08
void SetBlendField4BCColor_1DDC60_0x1ddc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField4BCColor_1DDC60_0x1ddc60");
#endif

    switch (ctx->pc) {
        case 0x1ddce8u: goto label_1ddce8;
        case 0x1ddcf8u: goto label_1ddcf8;
        default: break;
    }

    ctx->pc = 0x1ddc60u;

    // 0x1ddc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddc64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ddc64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc68: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDC68u;
    {
        const bool branch_taken_0x1ddc68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC68u;
        // 0x1ddc6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc68) {
            ctx->pc = 0x1DDCF0u;
            goto label_1ddcf0;
        }
    }
    ctx->pc = 0x1DDC70u;
    // 0x1ddc70: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ddc74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ddc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ddc78: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ddc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ddc7c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ddc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ddc80: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ddc84: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1ddc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1ddc88: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1ddc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1ddc8c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ddc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ddc90: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddc94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ddc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ddc98: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddc98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddc9c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1ddc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1ddca0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ddca4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ddca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ddca8: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1ddcac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ddcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ddcb0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ddcb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ddcb4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddcb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ddcbc: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1ddcc0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1ddcc4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddcc8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddcc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddccc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddcd0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddcd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddcd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddcd8: 0x24e404bc  addiu       $a0, $a3, 0x4BC
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1212));
    // 0x1ddcdc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddcdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddce0: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DDCE0u;
    SET_GPR_U32(ctx, 31, 0x1DDCE8u);
    ctx->pc = 0x1DDCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCE0u;
    // 0x1ddce4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DDCE0u, 0x1DDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCE8u;
label_1ddce8:
    // 0x1ddce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDCE8u;
    {
        const bool branch_taken_0x1ddce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCE8u;
        // 0x1ddcec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddce8) {
            ctx->pc = 0x1DDCFCu;
            goto label_1ddcfc;
        }
    }
    ctx->pc = 0x1DDCF0u;
label_1ddcf0:
    // 0x1ddcf0: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DDCF0u;
    SET_GPR_U32(ctx, 31, 0x1DDCF8u);
    ctx->pc = 0x1DDCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCF0u;
    // 0x1ddcf4: 0x24e404bc  addiu       $a0, $a3, 0x4BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DDCF0u, 0x1DDCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCF8u;
label_1ddcf8:
    // 0x1ddcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddcfc:
    // 0x1ddcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCFCu;
        // 0x1ddd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD04u;
    // 0x1ddd04: 0x0  nop
    ctx->pc = 0x1ddd04u;
    // NOP
    ctx->pc = 0x1ddd08u;
}
