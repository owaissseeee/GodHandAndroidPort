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

// Function: func_00171070
// Address: 0x171070 - 0x1710f0
void func_00171070_0x171070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171070_0x171070");
#endif

    switch (ctx->pc) {
        case 0x171084u: goto label_171084;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710d8u: goto label_1710d8;
        default: break;
    }

    ctx->pc = 0x171070u;

    // 0x171070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17107c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17107Cu;
    SET_GPR_U32(ctx, 31, 0x171084u);
    ctx->pc = 0x171080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17107Cu;
    // 0x171080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17107Cu, 0x171084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171084u;
label_171084:
    // 0x171084: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171088: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x171088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17108c: 0x24420ca0  addiu       $v0, $v0, 0xCA0
    ctx->pc = 0x17108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
    // 0x171090: 0x26030600  addiu       $v1, $s0, 0x600
    ctx->pc = 0x171090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x171094: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x171094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x171098: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x171098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x17109c: 0x0  nop
    ctx->pc = 0x17109cu;
    // NOP
label_1710a0:
    // 0x1710a0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1710a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1710a4: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x1710a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1710a8: 0xf8600020  sqc2        $vf0, 0x20($v1)
    ctx->pc = 0x1710a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1710ac: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x1710acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1710b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1710b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1710b4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1710B4u;
    {
        const bool branch_taken_0x1710b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710B4u;
        // 0x1710b8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710b4) {
            ctx->pc = 0x1710A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1710a0;
        }
    }
    ctx->pc = 0x1710BCu;
    // 0x1710bc: 0x26041ae0  addiu       $a0, $s0, 0x1AE0
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6880));
    // 0x1710c0: 0x26070600  addiu       $a3, $s0, 0x600
    ctx->pc = 0x1710c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1710c4: 0x260810f0  addiu       $t0, $s0, 0x10F0
    ctx->pc = 0x1710c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4336));
    // 0x1710c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1710c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1710cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1710ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1710d0: 0xc0ab48e  jal         func_2AD238
    ctx->pc = 0x1710D0u;
    SET_GPR_U32(ctx, 31, 0x1710D8u);
    ctx->pc = 0x1710D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710D0u;
    // 0x1710d4: 0x2409006a  addiu       $t1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD238u, 0x1710D0u, 0x1710D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710D8u;
label_1710d8:
    // 0x1710d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1710d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1710dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1710e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1710e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1710e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1710E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E4u;
        // 0x1710e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710ECu;
    // 0x1710ec: 0x0  nop
    ctx->pc = 0x1710ecu;
    // NOP
    ctx->pc = 0x1710f0u;
}
