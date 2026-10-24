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

// Function: SetBlendField630_1DDD08
// Address: 0x1ddd08 - 0x1dddb0
void SetBlendField630_1DDD08_0x1ddd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField630_1DDD08_0x1ddd08");
#endif

    switch (ctx->pc) {
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddda0u: goto label_1ddda0;
        default: break;
    }

    ctx->pc = 0x1ddd08u;

    // 0x1ddd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddd0c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ddd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd10: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDD10u;
    {
        const bool branch_taken_0x1ddd10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD10u;
        // 0x1ddd14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd10) {
            ctx->pc = 0x1DDD98u;
            goto label_1ddd98;
        }
    }
    ctx->pc = 0x1DDD18u;
    // 0x1ddd18: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ddd1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ddd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ddd20: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ddd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ddd24: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ddd28: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1ddd28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ddd2c: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1ddd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1ddd30: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1ddd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1ddd34: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ddd38: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddd3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ddd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ddd40: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddd44: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1ddd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1ddd48: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ddd4c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ddd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ddd50: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1ddd54: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ddd58: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ddd58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ddd5c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ddd64: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1ddd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1ddd68: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ddd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1ddd6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddd70: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddd70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddd74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddd74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddd78: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddd7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddd80: 0x24e40630  addiu       $a0, $a3, 0x630
    ctx->pc = 0x1ddd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1584));
    // 0x1ddd84: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddd84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddd88: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DDD88u;
    SET_GPR_U32(ctx, 31, 0x1DDD90u);
    ctx->pc = 0x1DDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD88u;
    // 0x1ddd8c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DDD88u, 0x1DDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD90u;
label_1ddd90:
    // 0x1ddd90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDD90u;
    {
        const bool branch_taken_0x1ddd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD90u;
        // 0x1ddd94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd90) {
            ctx->pc = 0x1DDDA4u;
            goto label_1ddda4;
        }
    }
    ctx->pc = 0x1DDD98u;
label_1ddd98:
    // 0x1ddd98: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DDD98u;
    SET_GPR_U32(ctx, 31, 0x1DDDA0u);
    ctx->pc = 0x1DDD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD98u;
    // 0x1ddd9c: 0x24e40630  addiu       $a0, $a3, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DDD98u, 0x1DDDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDA0u;
label_1ddda0:
    // 0x1ddda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddda4:
    // 0x1ddda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDA4u;
        // 0x1ddda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDDACu;
    // 0x1dddac: 0x0  nop
    ctx->pc = 0x1dddacu;
    // NOP
    ctx->pc = 0x1dddb0u;
}
