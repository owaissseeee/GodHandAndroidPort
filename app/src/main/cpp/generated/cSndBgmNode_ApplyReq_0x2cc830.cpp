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

// Function: cSndBgmNode_ApplyReq
// Address: 0x2cc830 - 0x2cc900
void cSndBgmNode_ApplyReq_0x2cc830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_ApplyReq_0x2cc830");
#endif

    switch (ctx->pc) {
        case 0x2cc8a8u: goto label_2cc8a8;
        case 0x2cc8b8u: goto label_2cc8b8;
        default: break;
    }

    ctx->pc = 0x2cc830u;

    // 0x2cc830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc834: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cc838: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cc838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cc83c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc840: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cc844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cc844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc84c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2cc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cc850: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2cc854: 0xae260098  sw          $a2, 0x98($s1)
    ctx->pc = 0x2cc854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 6));
    // 0x2cc858: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2cc858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cc85c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CC85Cu;
    {
        const bool branch_taken_0x2cc85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC85Cu;
        // 0x2cc860: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc85c) {
            ctx->pc = 0x2CC8E0u;
            goto label_2cc8e0;
        }
    }
    ctx->pc = 0x2CC864u;
    // 0x2cc864: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cc868: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cc868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc86c: 0x2442ced0  addiu       $v0, $v0, -0x3130
    ctx->pc = 0x2cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954704));
    // 0x2cc870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc878: 0x800008  jr          $a0
    ctx->pc = 0x2CC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC880u: goto label_2cc880;
            case 0x2CC894u: goto label_2cc894;
            case 0x2CC8C0u: goto label_2cc8c0;
            case 0x2CC8D4u: goto label_2cc8d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CC880u;
label_2cc880:
    // 0x2cc880: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2cc880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cc884: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cc884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cc888: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cc88c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC88Cu;
    {
        const bool branch_taken_0x2cc88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC88Cu;
        // 0x2cc890: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc88c) {
            ctx->pc = 0x2CC8B0u;
            goto label_2cc8b0;
        }
    }
    ctx->pc = 0x2CC894u;
label_2cc894:
    // 0x2cc894: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2cc894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2cc898: 0x9645000c  lhu         $a1, 0xC($s2)
    ctx->pc = 0x2cc898u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cc89c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2cc89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2cc8a0: 0xc0b4166  jal         func_2D0598
    ctx->pc = 0x2CC8A0u;
    SET_GPR_U32(ctx, 31, 0x2CC8A8u);
    ctx->pc = 0x2CC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8A0u;
    // 0x2cc8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0598u, 0x2CC8A0u, 0x2CC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8A8u;
label_2cc8a8:
    // 0x2cc8a8: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x2cc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x2cc8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc8b0:
    // 0x2cc8b0: 0xc0b415e  jal         func_2D0578
    ctx->pc = 0x2CC8B0u;
    SET_GPR_U32(ctx, 31, 0x2CC8B8u);
    ctx->pc = 0x2CC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8B0u;
    // 0x2cc8b4: 0x9645000e  lhu         $a1, 0xE($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0578u, 0x2CC8B0u, 0x2CC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8B8u;
label_2cc8b8:
    // 0x2cc8b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC8B8u;
    {
        const bool branch_taken_0x2cc8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8B8u;
        // 0x2cc8bc: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8b8) {
            ctx->pc = 0x2CC8E0u;
            goto label_2cc8e0;
        }
    }
    ctx->pc = 0x2CC8C0u;
label_2cc8c0:
    // 0x2cc8c0: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2cc8c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cc8c4: 0xa62200a0  sh          $v0, 0xA0($s1)
    ctx->pc = 0x2cc8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc8c8: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x2cc8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2cc8cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC8CCu;
    {
        const bool branch_taken_0x2cc8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8CCu;
        // 0x2cc8d0: 0xa62300a2  sh          $v1, 0xA2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8cc) {
            ctx->pc = 0x2CC8E0u;
            goto label_2cc8e0;
        }
    }
    ctx->pc = 0x2CC8D4u;
label_2cc8d4:
    // 0x2cc8d4: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x2cc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x2cc8d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC8D8u;
    {
        const bool branch_taken_0x2cc8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8D8u;
        // 0x2cc8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8d8) {
            ctx->pc = 0x2CC8E4u;
            goto label_2cc8e4;
        }
    }
    ctx->pc = 0x2CC8E0u;
label_2cc8e0:
    // 0x2cc8e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc8e4:
    // 0x2cc8e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cc8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc8e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc8ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cc8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8F4u;
        // 0x2cc8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC8FCu;
    // 0x2cc8fc: 0x0  nop
    ctx->pc = 0x2cc8fcu;
    // NOP
    ctx->pc = 0x2cc900u;
}
