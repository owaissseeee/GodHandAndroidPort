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

// Function: sceDmaReset
// Address: 0x397128 - 0x397208
void sceDmaReset_0x397128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaReset_0x397128");
#endif

    switch (ctx->pc) {
        case 0x397160u: goto label_397160;
        case 0x3971c4u: goto label_3971c4;
        case 0x3971ccu: goto label_3971cc;
        default: break;
    }

    ctx->pc = 0x397128u;

    // 0x397128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39712c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x397130: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x397130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x397134: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x397134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x397138: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x397138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x39713c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x39713cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x397140: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x397140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x397144: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x397148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39714c: 0x24638590  addiu       $v1, $v1, -0x7A70
    ctx->pc = 0x39714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935952));
    // 0x397150: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x397150u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x397154: 0x24c6dfe0  addiu       $a2, $a2, -0x2020
    ctx->pc = 0x397154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959072));
    // 0x397158: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x397158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x39715c: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x39715cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_397160:
    // 0x397160: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x397160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x397164: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x397164u;
    {
        const bool branch_taken_0x397164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397164) {
            ctx->pc = 0x397168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397164u;
            // 0x397168: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39718Cu;
            goto label_39718c;
        }
    }
    ctx->pc = 0x39716Cu;
    // 0x39716c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397170: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x397170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x397174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x397174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x397178: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x397178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x39717c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x39717cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x397180: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x397180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x397184: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x397184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x397188: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x397188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39718c:
    // 0x39718c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x39718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x397190: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x397190u;
    {
        const bool branch_taken_0x397190 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x397194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397190u;
        // 0x397194: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397190) {
            ctx->pc = 0x397160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397160;
        }
    }
    ctx->pc = 0x397198u;
    // 0x397198: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x397198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39719c: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x39719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x3971a0: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x3971a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x3971a4: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x3971a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x3971a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3971a8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2));
    // 0x3971ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3971acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3971b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3971b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3971b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3971b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x3971b8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3971b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3971bc: 0xc0e5c32  jal         func_3970C8
    ctx->pc = 0x3971BCu;
    SET_GPR_U32(ctx, 31, 0x3971C4u);
    ctx->pc = 0x3971C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971BCu;
    // 0x3971c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3970C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3970C8u, 0x3971BCu, 0x3971C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971C4u;
label_3971c4:
    // 0x3971c4: 0xc0e5c82  jal         func_397208
    ctx->pc = 0x3971C4u;
    SET_GPR_U32(ctx, 31, 0x3971CCu);
    ctx->pc = 0x3971C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3971C4u;
    // 0x3971c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397208u, 0x3971C4u, 0x3971CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3971CCu;
label_3971cc:
    // 0x3971cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3971ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3971d0: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3971D0u;
    {
        const bool branch_taken_0x3971d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3971D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971D0u;
        // 0x3971d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3971d0) {
            ctx->pc = 0x3971F0u;
            goto label_3971f0;
        }
    }
    ctx->pc = 0x3971D8u;
    // 0x3971d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3971d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3971dc: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x3971dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x3971e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3971e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x3971e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3971e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3971e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3971e8u;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 2));
    // 0x3971ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3971ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3971f0:
    // 0x3971f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3971f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3971f4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3971f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3971f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3971f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3971fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3971FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971FCu;
        // 0x397200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3971FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397204u;
    // 0x397204: 0x0  nop
    ctx->pc = 0x397204u;
    // NOP
    ctx->pc = 0x397208u;
}
