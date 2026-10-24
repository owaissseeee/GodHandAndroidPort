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

// Function: func_00201FA0
// Address: 0x201fa0 - 0x202058
void func_00201FA0_0x201fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201FA0_0x201fa0");
#endif

    switch (ctx->pc) {
        case 0x201fb4u: goto label_201fb4;
        case 0x202000u: goto label_202000;
        case 0x202010u: goto label_202010;
        default: break;
    }

    ctx->pc = 0x201fa0u;

    // 0x201fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201fa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201fac: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x201FACu;
    SET_GPR_U32(ctx, 31, 0x201FB4u);
    ctx->pc = 0x201FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FACu;
    // 0x201fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x201FACu, 0x201FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FB4u;
label_201fb4:
    // 0x201fb4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x201fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x201fb8: 0x246379c8  addiu       $v1, $v1, 0x79C8
    ctx->pc = 0x201fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31176));
    // 0x201fbc: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x201fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x201fc0: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x201fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fc4: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x201fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fc8: 0x26031620  addiu       $v1, $s0, 0x1620
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5664));
    // 0x201fcc: 0xfa001630  sqc2        $vf0, 0x1630($s0)
    ctx->pc = 0x201fccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fd0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x201fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x201fd4: 0xa0620031  sb          $v0, 0x31($v1)
    ctx->pc = 0x201fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x201fd8: 0xfa001660  sqc2        $vf0, 0x1660($s0)
    ctx->pc = 0x201fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fdc: 0xfa001680  sqc2        $vf0, 0x1680($s0)
    ctx->pc = 0x201fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fe0: 0xfa001690  sqc2        $vf0, 0x1690($s0)
    ctx->pc = 0x201fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fe4: 0xfa0016a0  sqc2        $vf0, 0x16A0($s0)
    ctx->pc = 0x201fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fe8: 0xfa0016b0  sqc2        $vf0, 0x16B0($s0)
    ctx->pc = 0x201fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201fec: 0xfa001840  sqc2        $vf0, 0x1840($s0)
    ctx->pc = 0x201fecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 6208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x201ff0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201ff4: 0x260218a0  addiu       $v0, $s0, 0x18A0
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6304));
    // 0x201ff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x201ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201ffc: 0x0  nop
    ctx->pc = 0x201ffcu;
    // NOP
label_202000:
    // 0x202000: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x202000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x202004: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x202004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x202008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20200c: 0x0  nop
    ctx->pc = 0x20200cu;
    // NOP
label_202010:
    // 0x202010: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x202010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x202014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x202014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x202018: 0x0  nop
    ctx->pc = 0x202018u;
    // NOP
    // 0x20201c: 0x0  nop
    ctx->pc = 0x20201cu;
    // NOP
    // 0x202020: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202020u;
    {
        const bool branch_taken_0x202020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x202024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202020u;
        // 0x202024: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202020) {
            ctx->pc = 0x202010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202010;
        }
    }
    ctx->pc = 0x202028u;
    // 0x202028: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x202028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20202c: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x20202Cu;
    {
        const bool branch_taken_0x20202c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x202030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20202Cu;
        // 0x202030: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20202c) {
            ctx->pc = 0x202000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202000;
        }
    }
    ctx->pc = 0x202034u;
    // 0x202034: 0xfa001950  sqc2        $vf0, 0x1950($s0)
    ctx->pc = 0x202034u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 6480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x202038: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x202038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20203c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20203cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202040: 0x2463c7f0  addiu       $v1, $v1, -0x3810
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
    // 0x202044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202048: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x202048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x20204c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20204cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202050: 0x3e00008  jr          $ra
    ctx->pc = 0x202050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202050u;
        // 0x202054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202058u;
}
