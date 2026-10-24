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

// Function: func_001DF048
// Address: 0x1df048 - 0x1df0f0
void func_001DF048_0x1df048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF048_0x1df048");
#endif

    switch (ctx->pc) {
        case 0x1df0d0u: goto label_1df0d0;
        case 0x1df0e0u: goto label_1df0e0;
        default: break;
    }

    ctx->pc = 0x1df048u;

    // 0x1df048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df04c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1df04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df050: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DF050u;
    {
        const bool branch_taken_0x1df050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF050u;
        // 0x1df054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df050) {
            ctx->pc = 0x1DF0D8u;
            goto label_1df0d8;
        }
    }
    ctx->pc = 0x1DF058u;
    // 0x1df058: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1df05c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1df05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1df060: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1df060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1df064: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1df064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1df068: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1df068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1df06c: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1df06cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1df070: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1df070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1df074: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1df078: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df07c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1df080: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df084: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1df084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1df088: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1df088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1df08c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1df08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1df090: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1df090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1df094: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1df098: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1df098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1df09c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1df09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1df0a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df0a4: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1df0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1df0a8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1df0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1df0ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df0b0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df0b4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1df0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1df0b8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df0bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df0c0: 0x24e40158  addiu       $a0, $a3, 0x158
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 344));
    // 0x1df0c4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df0c8: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DF0C8u;
    SET_GPR_U32(ctx, 31, 0x1DF0D0u);
    ctx->pc = 0x1DF0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0C8u;
    // 0x1df0cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DF0C8u, 0x1DF0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0D0u;
label_1df0d0:
    // 0x1df0d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF0D0u;
    {
        const bool branch_taken_0x1df0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0D0u;
        // 0x1df0d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0d0) {
            ctx->pc = 0x1DF0E4u;
            goto label_1df0e4;
        }
    }
    ctx->pc = 0x1DF0D8u;
label_1df0d8:
    // 0x1df0d8: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DF0D8u;
    SET_GPR_U32(ctx, 31, 0x1DF0E0u);
    ctx->pc = 0x1DF0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0D8u;
    // 0x1df0dc: 0x24e40158  addiu       $a0, $a3, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DF0D8u, 0x1DF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0E0u;
label_1df0e0:
    // 0x1df0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df0e4:
    // 0x1df0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0E4u;
        // 0x1df0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF0ECu;
    // 0x1df0ec: 0x0  nop
    ctx->pc = 0x1df0ecu;
    // NOP
    ctx->pc = 0x1df0f0u;
}
