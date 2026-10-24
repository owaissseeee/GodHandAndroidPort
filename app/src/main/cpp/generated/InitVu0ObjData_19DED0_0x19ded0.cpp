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

// Function: InitVu0ObjData_19DED0
// Address: 0x19ded0 - 0x19df58
void InitVu0ObjData_19DED0_0x19ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVu0ObjData_19DED0_0x19ded0");
#endif

    switch (ctx->pc) {
        case 0x19def8u: goto label_19def8;
        case 0x19df08u: goto label_19df08;
        case 0x19df28u: goto label_19df28;
        default: break;
    }

    ctx->pc = 0x19ded0u;

    // 0x19ded0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ded4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ded4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19ded8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ded8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dedc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19dedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19dee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dee4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19dee8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19deec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19deecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19def0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19DEF0u;
    SET_GPR_U32(ctx, 31, 0x19DEF8u);
    ctx->pc = 0x19DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DEF0u;
    // 0x19def4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19DEF0u, 0x19DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEF8u;
label_19def8:
    // 0x19def8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19def8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19defc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19df00: 0x24426180  addiu       $v0, $v0, 0x6180
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24960));
    // 0x19df04: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19df04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19df08:
    // 0x19df08: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19df08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19df0c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19df10: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19df10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19df14: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19df14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19df18: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19df18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df20: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19DF20u;
    SET_GPR_U32(ctx, 31, 0x19DF28u);
    ctx->pc = 0x19DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF20u;
    // 0x19df24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19DF20u, 0x19DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF28u;
label_19df28:
    // 0x19df28: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19df2c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DF2Cu;
    {
        const bool branch_taken_0x19df2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF2Cu;
        // 0x19df30: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df2c) {
            ctx->pc = 0x19DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df08;
        }
    }
    ctx->pc = 0x19DF34u;
    // 0x19df34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19df34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19df38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19df3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19df3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19df40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19df40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19df44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19df48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF4Cu;
        // 0x19df50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DF54u;
    // 0x19df54: 0x0  nop
    ctx->pc = 0x19df54u;
    // NOP
    ctx->pc = 0x19df58u;
}
