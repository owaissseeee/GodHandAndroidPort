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

// Function: Slot1
// Address: 0x1dfb98 - 0x1dfc48
void Slot1_0x1dfb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_0x1dfb98");
#endif

    switch (ctx->pc) {
        case 0x1dfbc8u: goto label_1dfbc8;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf8u: goto label_1dfbf8;
        default: break;
    }

    ctx->pc = 0x1dfb98u;

    // 0x1dfb98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dfb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dfb9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfba0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dfba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dfba4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1dfba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1dfba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dfbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dfbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfbb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dfbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dfbb8: 0x26110058  addiu       $s1, $s0, 0x58
    ctx->pc = 0x1dfbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1dfbbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfbc0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1DFBC0u;
    SET_GPR_U32(ctx, 31, 0x1DFBC8u);
    ctx->pc = 0x1DFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBC0u;
    // 0x1dfbc4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1DFBC0u, 0x1DFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBC8u;
label_1dfbc8:
    // 0x1dfbc8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1dfbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfbcc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1dfbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_1dfbd0:
    // 0x1dfbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbd4: 0xc079f86  jal         func_1E7E18
    ctx->pc = 0x1DFBD4u;
    SET_GPR_U32(ctx, 31, 0x1DFBDCu);
    ctx->pc = 0x1DFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBD4u;
    // 0x1dfbd8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E18u, 0x1DFBD4u, 0x1DFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBDCu;
label_1dfbdc:
    // 0x1dfbdc: 0x0  nop
    ctx->pc = 0x1dfbdcu;
    // NOP
    // 0x1dfbe0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DFBE0u;
    {
        const bool branch_taken_0x1dfbe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1DFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBE0u;
        // 0x1dfbe4: 0x26310108  addiu       $s1, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbe0) {
            ctx->pc = 0x1DFBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfbd0;
        }
    }
    ctx->pc = 0x1DFBE8u;
    // 0x1dfbe8: 0xc079e58  jal         func_1E7960
    ctx->pc = 0x1DFBE8u;
    SET_GPR_U32(ctx, 31, 0x1DFBF0u);
    ctx->pc = 0x1DFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBE8u;
    // 0x1dfbec: 0x26040370  addiu       $a0, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7960u, 0x1DFBE8u, 0x1DFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBF0u;
label_1dfbf0:
    // 0x1dfbf0: 0xc079c46  jal         func_1E7118
    ctx->pc = 0x1DFBF0u;
    SET_GPR_U32(ctx, 31, 0x1DFBF8u);
    ctx->pc = 0x1DFBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBF0u;
    // 0x1dfbf4: 0x260404d0  addiu       $a0, $s0, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7118u, 0x1DFBF0u, 0x1DFBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBF8u;
label_1dfbf8:
    // 0x1dfbf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfbfc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1dfbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dfc00: 0xa603048c  sh          $v1, 0x48C($s0)
    ctx->pc = 0x1dfc00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1164), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfc04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dfc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc08: 0xae040490  sw          $a0, 0x490($s0)
    ctx->pc = 0x1dfc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 4));
    // 0x1dfc0c: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x1dfc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x1dfc10: 0xae0004b4  sw          $zero, 0x4B4($s0)
    ctx->pc = 0x1dfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 0));
    // 0x1dfc14: 0xae0004b8  sw          $zero, 0x4B8($s0)
    ctx->pc = 0x1dfc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 0));
    // 0x1dfc18: 0xae0004bc  sw          $zero, 0x4BC($s0)
    ctx->pc = 0x1dfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 0));
    // 0x1dfc1c: 0xae000498  sw          $zero, 0x498($s0)
    ctx->pc = 0x1dfc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 0));
    // 0x1dfc20: 0xa60004c2  sh          $zero, 0x4C2($s0)
    ctx->pc = 0x1dfc20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1218), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfc24: 0xa6000b50  sh          $zero, 0xB50($s0)
    ctx->pc = 0x1dfc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2896), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfc28: 0xa6000b52  sh          $zero, 0xB52($s0)
    ctx->pc = 0x1dfc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2898), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfc2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dfc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfc30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dfc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfc34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfc34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dfc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC40u;
        // 0x1dfc44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC48u;
}
