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

// Function: SetBlendField2CC_1D5AE8
// Address: 0x1d5ae8 - 0x1d5b90
void SetBlendField2CC_1D5AE8_0x1d5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField2CC_1D5AE8_0x1d5ae8");
#endif

    switch (ctx->pc) {
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b80u: goto label_1d5b80;
        default: break;
    }

    ctx->pc = 0x1d5ae8u;

    // 0x1d5ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5aec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d5aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5af0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF0u;
        // 0x1d5af4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B78u;
            goto label_1d5b78;
        }
    }
    ctx->pc = 0x1D5AF8u;
    // 0x1d5af8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d5afc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5b00: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d5b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d5b04: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d5b08: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d5b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d5b0c: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d5b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d5b10: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d5b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d5b14: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5b18: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5b1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d5b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d5b20: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5b24: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d5b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d5b28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d5b2c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5b30: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d5b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d5b34: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5b38: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d5b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d5b3c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d5b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d5b44: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d5b48: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5b4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5b50: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5b54: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5b58: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5b5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5b60: 0x24e402cc  addiu       $a0, $a3, 0x2CC
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 716));
    // 0x1d5b64: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5b68: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5B68u;
    SET_GPR_U32(ctx, 31, 0x1D5B70u);
    ctx->pc = 0x1D5B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B68u;
    // 0x1d5b6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5B68u, 0x1D5B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B70u;
label_1d5b70:
    // 0x1d5b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5B70u;
    {
        const bool branch_taken_0x1d5b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B70u;
        // 0x1d5b74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b70) {
            ctx->pc = 0x1D5B84u;
            goto label_1d5b84;
        }
    }
    ctx->pc = 0x1D5B78u;
label_1d5b78:
    // 0x1d5b78: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5B78u;
    SET_GPR_U32(ctx, 31, 0x1D5B80u);
    ctx->pc = 0x1D5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B78u;
    // 0x1d5b7c: 0x24e402cc  addiu       $a0, $a3, 0x2CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 716));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5B78u, 0x1D5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B80u;
label_1d5b80:
    // 0x1d5b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5b84:
    // 0x1d5b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B84u;
        // 0x1d5b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B8Cu;
    // 0x1d5b8c: 0x0  nop
    ctx->pc = 0x1d5b8cu;
    // NOP
    ctx->pc = 0x1d5b90u;
}
