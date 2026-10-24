#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: ReleseIdData__6cMcSys
// Address: 0x7c8468 - 0x7c84e8
void ReleseIdData__6cMcSys_0x7c8468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleseIdData__6cMcSys_0x7c8468");
#endif

    switch (ctx->pc) {
        case 0x7c848cu: goto label_7c848c;
        case 0x7c84b4u: goto label_7c84b4;
        default: break;
    }

    ctx->pc = 0x7c8468u;

    // 0x7c8468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c8468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c846c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c8470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c8474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8478: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x7c8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x7c847c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C847Cu;
    {
        const bool branch_taken_0x7c847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c847c) {
            ctx->pc = 0x7C8480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C847Cu;
            // 0x7c8480: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C84DCu;
            goto label_7c84dc;
        }
    }
    ctx->pc = 0x7C8484u;
    // 0x7c8484: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x7C8484u;
    SET_GPR_U32(ctx, 31, 0x7C848Cu);
    ctx->pc = 0x7C8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8484u;
    // 0x7c8488: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x7C8484u, 0x7C848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C848Cu;
label_7c848c:
    // 0x7c848c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7c848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7c8490: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7c8490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7c8494: 0x8c642388  lw          $a0, 0x2388($v1)
    ctx->pc = 0x7c8494u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7c8498: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x7c8498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x7c849c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x7c849cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x7c84a0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x7c84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x7c84a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C84A4u;
    {
        const bool branch_taken_0x7c84a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C84A4u;
        // 0x7c84a8: 0x24424230  addiu       $v0, $v0, 0x4230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c84a4) {
            ctx->pc = 0x7C84B4u;
            goto label_7c84b4;
        }
    }
    ctx->pc = 0x7C84ACu;
    // 0x7c84ac: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C84ACu;
    SET_GPR_U32(ctx, 31, 0x7C84B4u);
    ctx->pc = 0x7C84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C84ACu;
    // 0x7c84b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C84ACu, 0x7C84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C84B4u;
label_7c84b4:
    // 0x7c84b4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c84b8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x7c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x7c84bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7c84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7c84c0: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x7c84c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x7c84c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c84c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c84c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x7c84c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x7c84cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c84d0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x7c84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x7c84d4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x7c84d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x7c84d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c84d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c84dc:
    // 0x7c84dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c84dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c84e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C84E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C84E0u;
        // 0x7c84e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C84E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C84E8u;
}
} // namespace gh_mcport
