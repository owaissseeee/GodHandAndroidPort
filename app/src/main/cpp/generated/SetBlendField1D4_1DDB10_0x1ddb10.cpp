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

// Function: SetBlendField1D4_1DDB10
// Address: 0x1ddb10 - 0x1ddbb8
void SetBlendField1D4_1DDB10_0x1ddb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField1D4_1DDB10_0x1ddb10");
#endif

    switch (ctx->pc) {
        case 0x1ddb98u: goto label_1ddb98;
        case 0x1ddba8u: goto label_1ddba8;
        default: break;
    }

    ctx->pc = 0x1ddb10u;

    // 0x1ddb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddb14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ddb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb18: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDB18u;
    {
        const bool branch_taken_0x1ddb18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB18u;
        // 0x1ddb1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb18) {
            ctx->pc = 0x1DDBA0u;
            goto label_1ddba0;
        }
    }
    ctx->pc = 0x1DDB20u;
    // 0x1ddb20: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ddb24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ddb28: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ddb28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ddb2c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1ddb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1ddb30: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1ddb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ddb34: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1ddb34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1ddb38: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1ddb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1ddb3c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ddb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ddb40: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddb40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddb44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ddb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ddb48: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddb48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddb4c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1ddb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1ddb50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ddb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ddb54: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ddb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ddb58: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1ddb58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1ddb5c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ddb60: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ddb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ddb64: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddb68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ddb6c: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1ddb70: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1ddb74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ddb74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ddb78: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddb78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddb7c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1ddb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1ddb80: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ddb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ddb84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddb88: 0x24e401d4  addiu       $a0, $a3, 0x1D4
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 468));
    // 0x1ddb8c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ddb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ddb90: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DDB90u;
    SET_GPR_U32(ctx, 31, 0x1DDB98u);
    ctx->pc = 0x1DDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB90u;
    // 0x1ddb94: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DDB90u, 0x1DDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB98u;
label_1ddb98:
    // 0x1ddb98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDB98u;
    {
        const bool branch_taken_0x1ddb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB98u;
        // 0x1ddb9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb98) {
            ctx->pc = 0x1DDBACu;
            goto label_1ddbac;
        }
    }
    ctx->pc = 0x1DDBA0u;
label_1ddba0:
    // 0x1ddba0: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DDBA0u;
    SET_GPR_U32(ctx, 31, 0x1DDBA8u);
    ctx->pc = 0x1DDBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBA0u;
    // 0x1ddba4: 0x24e401d4  addiu       $a0, $a3, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DDBA0u, 0x1DDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBA8u;
label_1ddba8:
    // 0x1ddba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddbac:
    // 0x1ddbac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBACu;
        // 0x1ddbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDBB4u;
    // 0x1ddbb4: 0x0  nop
    ctx->pc = 0x1ddbb4u;
    // NOP
    ctx->pc = 0x1ddbb8u;
}
