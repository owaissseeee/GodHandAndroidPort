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

// Function: _ri0_000
// Address: 0x39f160 - 0x39f1f8
void _ri0_000_0x39f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_000_0x39f160");
#endif

    switch (ctx->pc) {
        case 0x39f180u: goto label_39f180;
        case 0x39f188u: goto label_39f188;
        default: break;
    }

    ctx->pc = 0x39f160u;

    // 0x39f160: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x39f160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f164: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x39f164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f168: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x39f168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f16c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x39f16cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f170: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x39f170u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f174: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x39f174u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x39f178: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x39f178u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f17c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x39f17cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f180:
    // 0x39f180: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x39f180u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f184: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x39f184u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f188:
    // 0x39f188: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x39f188u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f18c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x39f18cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x39f190: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f190u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f194: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x39f194u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f198: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x39f198u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x39f19c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x39f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x39f1a0: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x39f1a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x39f1a4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x39f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x39f1a8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x39f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x39f1ac: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x39F1ACu;
    {
        const bool branch_taken_0x39f1ac = (GPR_S64(ctx, 15) > 0);
        ctx->pc = 0x39F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1ACu;
        // 0x39f1b0: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1ac) {
            ctx->pc = 0x39F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f188;
        }
    }
    ctx->pc = 0x39F1B4u;
    // 0x39f1b4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f1b8: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x39f1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x39f1bc: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x39f1bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f1c0: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x39f1c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x39f1c4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x39F1C4u;
    {
        const bool branch_taken_0x39f1c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1C4u;
        // 0x39f1c8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1c4) {
            ctx->pc = 0x39F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f188;
        }
    }
    ctx->pc = 0x39F1CCu;
    // 0x39f1cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x39f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f1d0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x39f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f1d4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x39f1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f1d8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f1dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f1e0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x39f1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x39f1e4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39F1E4u;
    {
        const bool branch_taken_0x39f1e4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1E4u;
        // 0x39f1e8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1e4) {
            ctx->pc = 0x39F180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f180;
        }
    }
    ctx->pc = 0x39F1ECu;
    // 0x39f1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F1F4u;
    // 0x39f1f4: 0x0  nop
    ctx->pc = 0x39f1f4u;
    // NOP
    ctx->pc = 0x39f1f8u;
}
