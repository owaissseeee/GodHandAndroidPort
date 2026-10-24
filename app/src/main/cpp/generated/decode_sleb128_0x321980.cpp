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

// Function: decode_sleb128
// Address: 0x321980 - 0x3219d0
void decode_sleb128_0x321980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decode_sleb128_0x321980");
#endif

    switch (ctx->pc) {
        case 0x321988u: goto label_321988;
        default: break;
    }

    ctx->pc = 0x321980u;

    // 0x321980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321988:
    // 0x321988: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x321988u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32198c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x321990: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x321990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x321994: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x321994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x321998: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x321998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x32199c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x32199cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3219a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3219A0u;
    {
        const bool branch_taken_0x3219a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3219A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219A0u;
        // 0x3219a4: 0x24e70007  addiu       $a3, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219a0) {
            ctx->pc = 0x321988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321988;
        }
    }
    ctx->pc = 0x3219A8u;
    // 0x3219a8: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x3219a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3219ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3219ACu;
    {
        const bool branch_taken_0x3219ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219ACu;
        // 0x3219b0: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219ac) {
            ctx->pc = 0x3219C4u;
            goto label_3219c4;
        }
    }
    ctx->pc = 0x3219B4u;
    // 0x3219b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3219B4u;
    {
        const bool branch_taken_0x3219b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219B4u;
        // 0x3219b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219b4) {
            ctx->pc = 0x3219C4u;
            goto label_3219c4;
        }
    }
    ctx->pc = 0x3219BCu;
    // 0x3219bc: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x3219bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x3219c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3219c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3219c4:
    // 0x3219c4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x3219c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x3219c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3219C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3219CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219C8u;
        // 0x3219cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3219D0u;
}
