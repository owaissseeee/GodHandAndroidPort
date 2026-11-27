#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: CheckTask__5cR506
// Address: 0x7996a8 - 0x7997a0
void CheckTask__5cR506_0x7996a8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTask__5cR506_0x7996a8");
#endif

    if (__builtin_expect(ctx->pc != 0x7996a8u, 0)) {
        switch (ctx->pc) {
            case 0x7996c8u: goto label_7996c8;
            case 0x7996f4u: goto label_7996f4;
            case 0x799718u: goto label_799718;
            case 0x799734u: goto label_799734;
            case 0x799748u: goto label_799748;
            case 0x799754u: goto label_799754;
            case 0x79977cu: goto label_79977c;
            case 0x799788u: goto label_799788;
            default: break;
        }
    }



    // 0x7996a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7996ac: 0x3c020057  lui         $v0, 0x57
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x7996b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7996b4: 0x24509b70  addiu       $s0, $v0, -0x6490
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x7996b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7996bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7996bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7996c0: 0xc07ea80  jal         func_1FAA00
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getKeyNum_0x1faa00, 0x1FAA00u, 0x7996C8u)) {
        return;
    }
label_7996c8:
    // 0x7996c8: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x79975Cu;
            goto label_79975c;
        }
    }
    // 0x7996d0: 0x3c068000  lui         $a2, 0x8000
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x7996d4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x7996d8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996dc: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e0: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7996e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7996e8: 0x461025  or          $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7996ec: 0xc07ea6e  jal         func_1FA9B8
    SET_GPR_U32(ctx, 31, 0x7996F4u);
    ctx->pc = 0x7996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ECu;
    // 0x7996f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_setKeyNum_0x1fa9b8, 0x1FA9B8u, 0x7996F4u)) {
        return;
    }
label_7996f4:
    // 0x7996f4: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7996f8: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799700: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799704: 0x24060014  addiu       $a2, $zero, 0x14
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799708: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79970c: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799710: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x799718u)) {
        return;
    }
label_799718:
    // 0x799718: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79971c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799720: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799724: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799728: 0x24090001  addiu       $t1, $zero, 0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79972c: 0xc0b1032  jal         func_2C40C8
    SET_GPR_U32(ctx, 31, 0x799734u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79972Cu;
    // 0x799730: 0x2405300b  addiu       $a1, $zero, 0x300B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_execUpCut_0x2c40c8, 0x2C40C8u, 0x799734u)) {
        return;
    }
label_799734:
    // 0x799734: 0x3c100060  lui         $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799738: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79973c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799740: 0xc0b0ab8  jal         func_2C2AE0
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getJumpPointAt_0x2c2ae0, 0x2C2AE0u, 0x799748u)) {
        return;
    }
label_799748:
    // 0x799748: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79974c: 0xc0b0a02  jal         func_2C2808
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataReset_0x2c2808, 0x2C2808u, 0x799754u)) {
        return;
    }
label_799754:
    // 0x799754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799754u;
    {
        const bool branch_taken_0x799754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799754) {
            ctx->pc = 0x79977Cu;
            goto label_79977c;
        }
    }
label_79975c:
    // 0x79975c: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799760: 0x2405300c  addiu       $a1, $zero, 0x300C
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12300));
    // 0x799764: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799768: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79976c: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799770: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799774: 0xc0b1032  jal         func_2C40C8
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_execUpCut_0x2c40c8, 0x2C40C8u, 0x79977Cu)) {
        return;
    }
label_79977c:
    // 0x79977c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799780: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799788u);
    ctx->pc = 0x799784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799780u;
    // 0x799784: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799788u)) {
        return;
    }
label_799788:
    // 0x799788: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79978c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79978cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799794: 0x3e00008  jr          $ra
    ctx->pc = 0x799794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79979c: 0x0  nop
    // NOP
    ctx->pc = 0x7997a0u;
}
} // namespace gh_r506
