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

// Function: InitObjVU0Fields8Slots_170250
// Address: 0x170250 - 0x1702d8
void InitObjVU0Fields8Slots_170250_0x170250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVU0Fields8Slots_170250_0x170250");
#endif

    switch (ctx->pc) {
        case 0x170278u: goto label_170278;
        case 0x170288u: goto label_170288;
        case 0x1702a8u: goto label_1702a8;
        default: break;
    }

    ctx->pc = 0x170250u;

    // 0x170250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170254: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x170254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x170258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17025c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x170260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170264: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x170264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x170268: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17026c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170270: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x170270u;
    SET_GPR_U32(ctx, 31, 0x170278u);
    ctx->pc = 0x170274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170270u;
    // 0x170274: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x170270u, 0x170278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170278u;
label_170278:
    // 0x170278: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x170278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17027c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x170280: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x170280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
    // 0x170284: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x170284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_170288:
    // 0x170288: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x170288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17028c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x17028cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x170290: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x170290u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x170294: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x170294u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x170298: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x170298u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17029c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1702A0u;
    SET_GPR_U32(ctx, 31, 0x1702A8u);
    ctx->pc = 0x1702A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702A0u;
    // 0x1702a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1702A0u, 0x1702A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702A8u;
label_1702a8:
    // 0x1702a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1702a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1702ac: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1702ACu;
    {
        const bool branch_taken_0x1702ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1702B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702ACu;
        // 0x1702b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702ac) {
            ctx->pc = 0x170288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170288;
        }
    }
    ctx->pc = 0x1702B4u;
    // 0x1702b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1702b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1702b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1702bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1702bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1702c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1702c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1702c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1702c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1702c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1702c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1702cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1702CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702CCu;
        // 0x1702d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1702CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1702D4u;
    // 0x1702d4: 0x0  nop
    ctx->pc = 0x1702d4u;
    // NOP
    ctx->pc = 0x1702d8u;
}
