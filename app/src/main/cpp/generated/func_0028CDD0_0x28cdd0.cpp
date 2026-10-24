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

// Function: func_0028CDD0
// Address: 0x28cdd0 - 0x28ce70
void func_0028CDD0_0x28cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028CDD0_0x28cdd0");
#endif

    switch (ctx->pc) {
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce60u: goto label_28ce60;
        default: break;
    }

    ctx->pc = 0x28cdd0u;

    // 0x28cdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28cdd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28cdd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cde0: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28cde4: 0x2444fdec  addiu       $a0, $v0, -0x214
    ctx->pc = 0x28cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966764));
    // 0x28cde8: 0x2c830061  sltiu       $v1, $a0, 0x61
    ctx->pc = 0x28cde8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x28cdec: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x28CDECu;
    {
        const bool branch_taken_0x28cdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDECu;
        // 0x28cdf0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdec) {
            ctx->pc = 0x28CE60u;
            goto label_28ce60;
        }
    }
    ctx->pc = 0x28CDF4u;
    // 0x28cdf4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28cdf8: 0x24429c60  addiu       $v0, $v0, -0x63A0
    ctx->pc = 0x28cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
    // 0x28cdfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ce00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ce04: 0x800008  jr          $a0
    ctx->pc = 0x28CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28CE0Cu: goto label_28ce0c;
            case 0x28CE60u: goto label_28ce60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CE04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28CE0Cu;
label_28ce0c:
    // 0x28ce0c: 0xc0c3d5e  jal         func_30F578
    ctx->pc = 0x28CE0Cu;
    SET_GPR_U32(ctx, 31, 0x28CE14u);
    ctx->pc = 0x28CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE0Cu;
    // 0x28ce10: 0x24041b80  addiu       $a0, $zero, 0x1B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F578u, 0x28CE0Cu, 0x28CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE14u;
label_28ce14:
    // 0x28ce14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ce18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ce18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce1c: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x28ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_28ce20:
    // 0x28ce20: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x28ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce24: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x28ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce28: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x28ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce2c: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x28ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce30: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x28ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce34: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x28ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ce38: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28ce3c: 0x1485fff8  bne         $a0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28CE3Cu;
    {
        const bool branch_taken_0x28ce3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x28CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE3Cu;
        // 0x28ce40: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce3c) {
            ctx->pc = 0x28CE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ce20;
        }
    }
    ctx->pc = 0x28CE44u;
    // 0x28ce44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CE44u;
    {
        const bool branch_taken_0x28ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE44u;
        // 0x28ce48: 0xae021630  sw          $v0, 0x1630($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce44) {
            ctx->pc = 0x28CE60u;
            goto label_28ce60;
        }
    }
    ctx->pc = 0x28CE4Cu;
    // 0x28ce4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ce4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce50: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28ce54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ce54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce58: 0xc0b7a60  jal         func_2DE980
    ctx->pc = 0x28CE58u;
    SET_GPR_U32(ctx, 31, 0x28CE60u);
    ctx->pc = 0x28CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE58u;
    // 0x28ce5c: 0x24a715b0  addiu       $a3, $a1, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE980u, 0x28CE58u, 0x28CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE60u;
label_28ce60:
    // 0x28ce60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ce60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ce64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x28CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE68u;
        // 0x28ce6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CE70u;
}
