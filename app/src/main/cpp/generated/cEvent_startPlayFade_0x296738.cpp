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

// Function: cEvent_startPlayFade
// Address: 0x296738 - 0x2967b0
void cEvent_startPlayFade_0x296738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_startPlayFade_0x296738");
#endif

    switch (ctx->pc) {
        case 0x2967a0u: goto label_2967a0;
        default: break;
    }

    ctx->pc = 0x296738u;

    // 0x296738: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x29673c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29673cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296740: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x296740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x296744: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x296744u;
    {
        const bool branch_taken_0x296744 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x296748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296744u;
        // 0x296748: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296744) {
            ctx->pc = 0x2967A0u;
            goto label_2967a0;
        }
    }
    ctx->pc = 0x29674Cu;
    // 0x29674c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x29674cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x296750: 0x8c636b34  lw          $v1, 0x6B34($v1)
    ctx->pc = 0x296750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B34u));
    // 0x296754: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x296754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x296758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29675c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29675Cu;
    {
        const bool branch_taken_0x29675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29675Cu;
        // 0x296760: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29675c) {
            ctx->pc = 0x2967A4u;
            goto label_2967a4;
        }
    }
    ctx->pc = 0x296764u;
    // 0x296764: 0x310ba  dsrl        $v0, $v1, 2
    ctx->pc = 0x296764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
    // 0x296768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29676c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29676Cu;
    {
        const bool branch_taken_0x29676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29676Cu;
        // 0x296770: 0x310fa  dsrl        $v0, $v1, 3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29676c) {
            ctx->pc = 0x2967A4u;
            goto label_2967a4;
        }
    }
    ctx->pc = 0x296774u;
    // 0x296774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296778: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296778u;
    {
        const bool branch_taken_0x296778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296778u;
        // 0x29677c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296778) {
            ctx->pc = 0x2967A4u;
            goto label_2967a4;
        }
    }
    ctx->pc = 0x296780u;
    // 0x296780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296784: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x296788: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x296788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29678c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29678cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x296790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296794: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x296794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x296798: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x296798u;
    SET_GPR_U32(ctx, 31, 0x2967A0u);
    ctx->pc = 0x29679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296798u;
    // 0x29679c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x296798u, 0x2967A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967A0u;
label_2967a0:
    // 0x2967a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2967a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2967a4:
    // 0x2967a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2967A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967A4u;
        // 0x2967a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967ACu;
    // 0x2967ac: 0x0  nop
    ctx->pc = 0x2967acu;
    // NOP
    ctx->pc = 0x2967b0u;
}
