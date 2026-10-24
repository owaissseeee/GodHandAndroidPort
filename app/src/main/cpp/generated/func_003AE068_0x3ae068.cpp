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

// Function: func_003AE068
// Address: 0x3ae068 - 0x3ae0c8
void func_003AE068_0x3ae068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE068_0x3ae068");
#endif

    switch (ctx->pc) {
        case 0x3ae094u: goto label_3ae094;
        default: break;
    }

    ctx->pc = 0x3ae068u;

    // 0x3ae068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae06c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ae078: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ae078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae07c: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3ae07cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3ae080: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3ae080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae088: 0xae20db88  sw          $zero, -0x2478($s1)
    ctx->pc = 0x3ae088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77DB88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77DB88u, _value); } while (0);
    // 0x3ae08c: 0xc0ec0ba  jal         func_3B02E8
    ctx->pc = 0x3AE08Cu;
    SET_GPR_U32(ctx, 31, 0x3AE094u);
    ctx->pc = 0x3AE090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE08Cu;
    // 0x3ae090: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B02E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B02E8u, 0x3AE08Cu, 0x3AE094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE094u;
label_3ae094:
    // 0x3ae094: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae09c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE09Cu;
    {
        const bool branch_taken_0x3ae09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae09c) {
            ctx->pc = 0x3AE0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE09Cu;
            // 0x3ae0a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE0B4u;
            goto label_3ae0b4;
        }
    }
    ctx->pc = 0x3AE0A4u;
    // 0x3ae0a4: 0x8e22db88  lw          $v0, -0x2478($s1)
    ctx->pc = 0x3ae0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957960)));
    // 0x3ae0a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE0A8u;
    {
        const bool branch_taken_0x3ae0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae0a8) {
            ctx->pc = 0x3AE0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE0A8u;
            // 0x3ae0ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE0B0u;
            goto label_3ae0b0;
        }
    }
    ctx->pc = 0x3AE0B0u;
label_3ae0b0:
    // 0x3ae0b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae0b4:
    // 0x3ae0b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ae0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0C0u;
        // 0x3ae0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE0C8u;
}
