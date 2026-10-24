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

// Function: SetBlendField3C4_1D5A40
// Address: 0x1d5a40 - 0x1d5ae8
void SetBlendField3C4_1D5A40_0x1d5a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField3C4_1D5A40_0x1d5a40");
#endif

    switch (ctx->pc) {
        case 0x1d5ac8u: goto label_1d5ac8;
        case 0x1d5ad8u: goto label_1d5ad8;
        default: break;
    }

    ctx->pc = 0x1d5a40u;

    // 0x1d5a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5a44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a48: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5A48u;
    {
        const bool branch_taken_0x1d5a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A48u;
        // 0x1d5a4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a48) {
            ctx->pc = 0x1D5AD0u;
            goto label_1d5ad0;
        }
    }
    ctx->pc = 0x1D5A50u;
    // 0x1d5a50: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d5a54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5a58: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d5a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d5a5c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d5a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d5a60: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d5a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d5a64: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d5a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d5a68: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d5a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d5a6c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5a70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5a74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d5a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d5a78: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5a7c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d5a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d5a80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d5a84: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5a88: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d5a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d5a8c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5a90: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d5a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d5a94: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5a98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d5a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d5a9c: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d5aa0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5aa4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5aa8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5aac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5ab0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5ab4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5ab8: 0x24e403c4  addiu       $a0, $a3, 0x3C4
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 964));
    // 0x1d5abc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5ac0: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5AC0u;
    SET_GPR_U32(ctx, 31, 0x1D5AC8u);
    ctx->pc = 0x1D5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AC0u;
    // 0x1d5ac4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5AC0u, 0x1D5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AC8u;
label_1d5ac8:
    // 0x1d5ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5AC8u;
    {
        const bool branch_taken_0x1d5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AC8u;
        // 0x1d5acc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ac8) {
            ctx->pc = 0x1D5ADCu;
            goto label_1d5adc;
        }
    }
    ctx->pc = 0x1D5AD0u;
label_1d5ad0:
    // 0x1d5ad0: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AD0u;
    // 0x1d5ad4: 0x24e403c4  addiu       $a0, $a3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5AD0u, 0x1D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5adc:
    // 0x1d5adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ADCu;
        // 0x1d5ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5AE4u;
    // 0x1d5ae4: 0x0  nop
    ctx->pc = 0x1d5ae4u;
    // NOP
    ctx->pc = 0x1d5ae8u;
}
