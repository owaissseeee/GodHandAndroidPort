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

// Function: CopyChannelParams_377378
// Address: 0x377378 - 0x377428
void CopyChannelParams_377378_0x377378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyChannelParams_377378_0x377378");
#endif

    switch (ctx->pc) {
        case 0x3773b8u: goto label_3773b8;
        case 0x3773e0u: goto label_3773e0;
        default: break;
    }

    ctx->pc = 0x377378u;

    // 0x377378: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x377378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37737c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x377380: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x377380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x377384: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x377384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x377388: 0x24b10026  addiu       $s1, $a1, 0x26
    ctx->pc = 0x377388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x37738c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377390: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x377390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377394: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x377394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x377398: 0x26530038  addiu       $s3, $s2, 0x38
    ctx->pc = 0x377398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x37739c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x37739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3773a0: 0x2650003e  addiu       $s0, $s2, 0x3E
    ctx->pc = 0x3773a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x3773a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3773a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3773a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3773a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3773ac: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x3773acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3773b0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3773b4: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x3773b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_3773b8:
    // 0x3773b8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x3773b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x3773bc: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3773bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x3773c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3773C0u;
    {
        const bool branch_taken_0x3773c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3773C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773C0u;
        // 0x3773c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3773c0) {
            ctx->pc = 0x3773E0u;
            goto label_3773e0;
        }
    }
    ctx->pc = 0x3773C8u;
    // 0x3773c8: 0x9622fffc  lhu         $v0, -0x4($s1)
    ctx->pc = 0x3773c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3773cc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3773ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3773d0: 0xa602fffc  sh          $v0, -0x4($s0)
    ctx->pc = 0x3773d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294967292), (uint16_t)GPR_U32(ctx, 2));
    // 0x3773d4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3773d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3773d8: 0xc0de008  jal         func_378020
    ctx->pc = 0x3773D8u;
    SET_GPR_U32(ctx, 31, 0x3773E0u);
    ctx->pc = 0x3773DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3773D8u;
    // 0x3773dc: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378020u, 0x3773D8u, 0x3773E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3773E0u;
label_3773e0:
    // 0x3773e0: 0x15a840  sll         $s5, $s5, 1
    ctx->pc = 0x3773e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x3773e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3773e8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3773e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3773ec: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3773ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3773f0: 0x681fff1  bgez        $s4, . + 4 + (-0xF << 2)
    ctx->pc = 0x3773F0u;
    {
        const bool branch_taken_0x3773f0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x3773F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773F0u;
        // 0x3773f4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3773f0) {
            ctx->pc = 0x3773B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3773b8;
        }
    }
    ctx->pc = 0x3773F8u;
    // 0x3773f8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x3773f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3773fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3773fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377400: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x377400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x377404: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x377404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377408: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x377408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37740c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37740cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377414: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x377414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377418: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x377418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37741c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377420: 0x3e00008  jr          $ra
    ctx->pc = 0x377420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377420u;
        // 0x377424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377428u;
}
