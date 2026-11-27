#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: R603Init__Fv
// Address: 0x799220 - 0x7992f8
void R603Init__Fv_0x799220(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R603Init__Fv_0x799220");
#endif

    if (__builtin_expect(ctx->pc != 0x799220u, 0)) {
        switch (ctx->pc) {
            case 0x799240u: goto label_799240;
            case 0x799254u: goto label_799254;
            case 0x799264u: goto label_799264;
            case 0x79928cu: goto label_79928c;
            case 0x7992a0u: goto label_7992a0;
            case 0x7992b4u: goto label_7992b4;
            case 0x7992c0u: goto label_7992c0;
            case 0x7992ccu: goto label_7992cc;
            case 0x7992e0u: goto label_7992e0;
            default: break;
        }
    }



    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x2404030c  addiu       $a0, $zero, 0x30C
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799240:
    // 0x799240: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799244: 0xae02a300  sw          $v0, -0x5D00($s0)
    ctx->pc = 0x799244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943488), GPR_U32(ctx, 2));
    // 0x799248: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79924c: 0xc0b42ae  jal         func_2D0AB8
    SET_GPR_U32(ctx, 31, 0x799254u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79924Cu;
    // 0x799250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SetBgmState_0x2d0ab8, 0x2D0AB8u, 0x799254u)) {
        return;
    }
label_799254:
    // 0x799254: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799258: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79925c: 0xc04fccc  jal         func_13F330
    SET_GPR_U32(ctx, 31, 0x799264u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79925Cu;
    // 0x799260: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCockMiddleBoss_roomInit_0x13f330, 0x13F330u, 0x799264u)) {
        return;
    }
label_799264:
    // 0x799264: 0x3c100060  lui         $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799268: 0x3c07007a  lui         $a3, 0x7A
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79926c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799270: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799274: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799278: 0x24e79520  addiu       $a3, $a3, -0x6AE0
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939936));
    // 0x79927c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799280: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799284: 0xc0b09e4  jal         func_2C2790
    SET_GPR_U32(ctx, 31, 0x79928Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799284u;
    // 0x799288: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataSet_exec_0x2c2790, 0x2C2790u, 0x79928Cu)) {
        return;
    }
label_79928c:
    // 0x79928c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799290: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799294: 0x24a596a8  addiu       $a1, $a1, -0x6958
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940328));
    // 0x799298: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x7992A0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799298u;
    // 0x79929c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x7992A0u)) {
        return;
    }
label_7992a0:
    // 0x7992a0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7992a4: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992ac: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x24a59308  addiu       $a1, $a1, -0x6CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x7992B4u)) {
        return;
    }
label_7992b4:
    // 0x7992b4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0xc0b0ab8  jal         func_2C2AE0
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getJumpPointAt_0x2c2ae0, 0x2C2AE0u, 0x7992C0u)) {
        return;
    }
label_7992c0:
    // 0x7992c0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c4: 0xc0b0a68  jal         func_2C29A0
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_SetDisable_0x2c29a0, 0x2C29A0u, 0x7992CCu)) {
        return;
    }
label_7992cc:
    // 0x7992cc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7992d0: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992d4: 0x24a59300  addiu       $a1, $a1, -0x6D00
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
    // 0x7992d8: 0xc0b1370  jal         func_2C4DC0
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_SetRoomExitFunc_0x2c4dc0, 0x2C4DC0u, 0x7992E0u)) {
        return;
    }
label_7992e0:
    // 0x7992e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7992e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7992e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7992ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7992f4: 0x0  nop
    // NOP
    ctx->pc = 0x7992f8u;
}
} // namespace gh_r603
