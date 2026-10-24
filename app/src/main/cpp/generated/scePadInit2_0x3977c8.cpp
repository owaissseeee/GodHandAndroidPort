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

// Function: scePadInit2
// Address: 0x3977c8 - 0x3978c8
void scePadInit2_0x3977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadInit2_0x3977c8");
#endif

    switch (ctx->pc) {
        case 0x3977f0u: goto label_3977f0;
        case 0x39785cu: goto label_39785c;
        case 0x397874u: goto label_397874;
        case 0x397890u: goto label_397890;
        case 0x3978a4u: goto label_3978a4;
        default: break;
    }

    ctx->pc = 0x3977c8u;

    // 0x3977c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3977c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3977cc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3977d0: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x3977d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x3977d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3977d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3977d8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3977d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3977dc: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3977dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3977e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3977e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3977e4: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x3977e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x3977e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3977e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3977ec: 0x0  nop
    ctx->pc = 0x3977ecu;
    // NOP
label_3977f0:
    // 0x3977f0: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x3977f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x3977f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3977f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3977f8: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x3977f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x3977fc: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x3977fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x397800: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x397800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x397804: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x397804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x397808: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x397808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39780c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x39780Cu;
    {
        const bool branch_taken_0x39780c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x397810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39780Cu;
        // 0x397810: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39780c) {
            ctx->pc = 0x3977F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3977f0;
        }
    }
    ctx->pc = 0x397814u;
    // 0x397814: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397818: 0x24b1c300  addiu       $s1, $a1, -0x3D00
    ctx->pc = 0x397818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951680));
    // 0x39781c: 0x8c4385d4  lw          $v1, -0x7A2C($v0)
    ctx->pc = 0x39781cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F85D4u));
    // 0x397820: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x397820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x397824: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x397824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x397828: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x397828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x39782c: 0xaca2c300  sw          $v0, -0x3D00($a1)
    ctx->pc = 0x39782cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294951680), GPR_U32(ctx, 2));
    // 0x397830: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x397830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x397834: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x397834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x397838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39783c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39783cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397840: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x397840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397844: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x397844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x397848: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x397848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x39784c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x39784cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397850: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x397850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x397854: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x397854u;
    SET_GPR_U32(ctx, 31, 0x39785Cu);
    ctx->pc = 0x397858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397854u;
    // 0x397858: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x397854u, 0x39785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39785Cu;
label_39785c:
    // 0x39785c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39785Cu;
    {
        const bool branch_taken_0x39785c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x397860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39785Cu;
        // 0x397860: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39785c) {
            ctx->pc = 0x39786Cu;
            goto label_39786c;
        }
    }
    ctx->pc = 0x397864u;
    // 0x397864: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x397864u;
    {
        const bool branch_taken_0x397864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397864u;
        // 0x397868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397864) {
            ctx->pc = 0x3978A8u;
            goto label_3978a8;
        }
    }
    ctx->pc = 0x39786Cu;
label_39786c:
    // 0x39786c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39786Cu;
    SET_GPR_U32(ctx, 31, 0x397874u);
    ctx->pc = 0x397870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39786Cu;
    // 0x397870: 0xac4085d0  sw          $zero, -0x7A30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39786Cu, 0x397874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397874u;
label_397874:
    // 0x397874: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x397874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x397878: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x397878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x39787c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39787cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397880: 0x24a57780  addiu       $a1, $a1, 0x7780
    ctx->pc = 0x397880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30592));
    // 0x397884: 0x34840019  ori         $a0, $a0, 0x19
    ctx->pc = 0x397884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25);
    // 0x397888: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x397888u;
    SET_GPR_U32(ctx, 31, 0x397890u);
    ctx->pc = 0x39788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397888u;
    // 0x39788c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x397888u, 0x397890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397890u;
label_397890:
    // 0x397890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397894: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397894u;
    {
        const bool branch_taken_0x397894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x397894) {
            ctx->pc = 0x397898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397894u;
            // 0x397898: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978A8u;
            goto label_3978a8;
        }
    }
    ctx->pc = 0x39789Cu;
    // 0x39789c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39789Cu;
    SET_GPR_U32(ctx, 31, 0x3978A4u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39789Cu, 0x3978A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3978A4u;
label_3978a4:
    // 0x3978a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3978a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3978a8:
    // 0x3978a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3978a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3978ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3978acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3978b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3978b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3978b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3978B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3978B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978B4u;
        // 0x3978b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3978B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3978BCu;
    // 0x3978bc: 0x0  nop
    ctx->pc = 0x3978bcu;
    // NOP
    // 0x3978c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3978c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3978c4: 0x0  nop
    ctx->pc = 0x3978c4u;
    // NOP
    ctx->pc = 0x3978c8u;
}
