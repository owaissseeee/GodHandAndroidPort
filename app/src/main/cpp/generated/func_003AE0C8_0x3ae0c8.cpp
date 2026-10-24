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

// Function: func_003AE0C8
// Address: 0x3ae0c8 - 0x3ae128
void func_003AE0C8_0x3ae0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE0C8_0x3ae0c8");
#endif

    switch (ctx->pc) {
        case 0x3ae0ecu: goto label_3ae0ec;
        default: break;
    }

    ctx->pc = 0x3ae0c8u;

    // 0x3ae0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae0cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ae0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0d8: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3ae0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3ae0dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae0e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ae0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0e4: 0xc0ec0e6  jal         func_3B0398
    ctx->pc = 0x3AE0E4u;
    SET_GPR_U32(ctx, 31, 0x3AE0ECu);
    ctx->pc = 0x3AE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0E4u;
    // 0x3ae0e8: 0xae20db88  sw          $zero, -0x2478($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0398u, 0x3AE0E4u, 0x3AE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE0ECu;
label_3ae0ec:
    // 0x3ae0ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae0ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ae0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ae0f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ae0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ae0f8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE0F8u;
    {
        const bool branch_taken_0x3ae0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae0f8) {
            ctx->pc = 0x3AE0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE0F8u;
            // 0x3ae0fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE110u;
            goto label_3ae110;
        }
    }
    ctx->pc = 0x3AE100u;
    // 0x3ae100: 0x8e22db88  lw          $v0, -0x2478($s1)
    ctx->pc = 0x3ae100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957960)));
    // 0x3ae104: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE104u;
    {
        const bool branch_taken_0x3ae104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae104) {
            ctx->pc = 0x3AE108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE104u;
            // 0x3ae108: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE10Cu;
            goto label_3ae10c;
        }
    }
    ctx->pc = 0x3AE10Cu;
label_3ae10c:
    // 0x3ae10c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae110:
    // 0x3ae110: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ae110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae11c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE11Cu;
        // 0x3ae120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE124u;
    // 0x3ae124: 0x0  nop
    ctx->pc = 0x3ae124u;
    // NOP
    ctx->pc = 0x3ae128u;
}
