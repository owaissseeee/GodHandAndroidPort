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

// Function: _ri0_010
// Address: 0x39f430 - 0x39f4e8
void _ri0_010_0x39f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_010_0x39f430");
#endif

    switch (ctx->pc) {
        case 0x39f458u: goto label_39f458;
        case 0x39f460u: goto label_39f460;
        default: break;
    }

    ctx->pc = 0x39f430u;

    // 0x39f430: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f434: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f438: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f43c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x39f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f440: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f440u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f444: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f444u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f448: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f448u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f44c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39f44cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f450: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x39f450u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f454: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39f458:
    // 0x39f458: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f45c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f45cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f460:
    // 0x39f460: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f460u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f464: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f464u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f468: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f468u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f46c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f46cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f470: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f470u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f474: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39f474u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f478: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f478u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f47c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x39f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39f480: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x39f480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x39f484: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f484u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f488: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x39f488u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f48c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f48cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f490: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x39f490u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f494: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x39f494u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x39f498: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39f498u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f49c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39f4a0: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x39F4A0u;
    {
        const bool branch_taken_0x39f4a0 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4A0u;
        // 0x39f4a4: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4a0) {
            ctx->pc = 0x39F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f460;
        }
    }
    ctx->pc = 0x39F4A8u;
    // 0x39f4a8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39f4ac: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f4b0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f4b4: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39f4b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f4b8: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x39F4B8u;
    {
        const bool branch_taken_0x39f4b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4B8u;
        // 0x39f4bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4b8) {
            ctx->pc = 0x39F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f460;
        }
    }
    ctx->pc = 0x39F4C0u;
    // 0x39f4c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f4c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f4c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f4c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f4cc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39f4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39f4d0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39f4d4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f4d8: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x39F4D8u;
    {
        const bool branch_taken_0x39f4d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F4D8u;
        // 0x39f4dc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f4d8) {
            ctx->pc = 0x39F458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f458;
        }
    }
    ctx->pc = 0x39F4E0u;
    // 0x39f4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x39F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F4E8u;
}
