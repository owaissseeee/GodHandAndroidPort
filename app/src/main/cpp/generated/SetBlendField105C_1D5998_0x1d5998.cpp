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

// Function: SetBlendField105C_1D5998
// Address: 0x1d5998 - 0x1d5a40
void SetBlendField105C_1D5998_0x1d5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField105C_1D5998_0x1d5998");
#endif

    switch (ctx->pc) {
        case 0x1d5a20u: goto label_1d5a20;
        case 0x1d5a30u: goto label_1d5a30;
        default: break;
    }

    ctx->pc = 0x1d5998u;

    // 0x1d5998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d599c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d599cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59a0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D59A0u;
    {
        const bool branch_taken_0x1d59a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A0u;
        // 0x1d59a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59a0) {
            ctx->pc = 0x1D5A28u;
            goto label_1d5a28;
        }
    }
    ctx->pc = 0x1D59A8u;
    // 0x1d59a8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d59ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d59b0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d59b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d59b4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d59b8: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d59b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d59bc: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d59bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d59c0: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d59c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d59c4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d59c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d59c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d59cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d59ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d59d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d59d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d59d4: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d59d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d59d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d59dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d59dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d59e0: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d59e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d59e4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d59e8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d59e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d59ec: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d59ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d59f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d59f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d59f4: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d59f8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d59fc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d59fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5a00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5a04: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5a08: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5a0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5a10: 0x24e4105c  addiu       $a0, $a3, 0x105C
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4188));
    // 0x1d5a14: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5a18: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5A18u;
    SET_GPR_U32(ctx, 31, 0x1D5A20u);
    ctx->pc = 0x1D5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A18u;
    // 0x1d5a1c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5A18u, 0x1D5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A20u;
label_1d5a20:
    // 0x1d5a20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5A20u;
    {
        const bool branch_taken_0x1d5a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A20u;
        // 0x1d5a24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a20) {
            ctx->pc = 0x1D5A34u;
            goto label_1d5a34;
        }
    }
    ctx->pc = 0x1D5A28u;
label_1d5a28:
    // 0x1d5a28: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5A28u;
    SET_GPR_U32(ctx, 31, 0x1D5A30u);
    ctx->pc = 0x1D5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A28u;
    // 0x1d5a2c: 0x24e4105c  addiu       $a0, $a3, 0x105C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5A28u, 0x1D5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A30u;
label_1d5a30:
    // 0x1d5a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5a34:
    // 0x1d5a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A34u;
        // 0x1d5a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5A3Cu;
    // 0x1d5a3c: 0x0  nop
    ctx->pc = 0x1d5a3cu;
    // NOP
    ctx->pc = 0x1d5a40u;
}
