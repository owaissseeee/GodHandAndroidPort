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

// Function: func_00178FC8
// Address: 0x178fc8 - 0x179050
void func_00178FC8_0x178fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178FC8_0x178fc8");
#endif

    switch (ctx->pc) {
        case 0x178ff0u: goto label_178ff0;
        case 0x179000u: goto label_179000;
        case 0x179020u: goto label_179020;
        default: break;
    }

    ctx->pc = 0x178fc8u;

    // 0x178fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x178fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178fcc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x178fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x178fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x178fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x178fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178fdc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x178fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x178fe0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178fe8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x178FE8u;
    SET_GPR_U32(ctx, 31, 0x178FF0u);
    ctx->pc = 0x178FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FE8u;
    // 0x178fec: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x178FE8u, 0x178FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FF0u;
label_178ff0:
    // 0x178ff0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178ff4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178ff8: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x178ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
    // 0x178ffc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x178ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_179000:
    // 0x179000: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x179000u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179004: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x179004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179008: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x179008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17900c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x17900cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179010: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x179010u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179018: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x179018u;
    SET_GPR_U32(ctx, 31, 0x179020u);
    ctx->pc = 0x17901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179018u;
    // 0x17901c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x179018u, 0x179020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179020u;
label_179020:
    // 0x179020: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x179020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x179024: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x179024u;
    {
        const bool branch_taken_0x179024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x179028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179024u;
        // 0x179028: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179024) {
            ctx->pc = 0x179000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179000;
        }
    }
    ctx->pc = 0x17902Cu;
    // 0x17902c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17902cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179030: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x179030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179034: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x179034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17903c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17903cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179044: 0x3e00008  jr          $ra
    ctx->pc = 0x179044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179044u;
        // 0x179048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17904Cu;
    // 0x17904c: 0x0  nop
    ctx->pc = 0x17904cu;
    // NOP
    ctx->pc = 0x179050u;
}
