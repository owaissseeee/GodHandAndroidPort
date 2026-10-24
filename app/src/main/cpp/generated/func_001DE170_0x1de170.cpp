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

// Function: func_001DE170
// Address: 0x1de170 - 0x1de258
void func_001DE170_0x1de170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE170_0x1de170");
#endif

    switch (ctx->pc) {
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de20cu: goto label_1de20c;
        case 0x1de220u: goto label_1de220;
        case 0x1de230u: goto label_1de230;
        case 0x1de248u: goto label_1de248;
        default: break;
    }

    ctx->pc = 0x1de170u;

    // 0x1de170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de174: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1de17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de184: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE184u;
    {
        const bool branch_taken_0x1de184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE184u;
        // 0x1de188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de184) {
            ctx->pc = 0x1DE1D4u;
            goto label_1de1d4;
        }
    }
    ctx->pc = 0x1DE18Cu;
    // 0x1de18c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de190: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE190u;
    {
        const bool branch_taken_0x1de190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de190) {
            ctx->pc = 0x1DE194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE190u;
            // 0x1de194: 0x26040348  addiu       $a0, $s0, 0x348 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1ACu;
            goto label_1de1ac;
        }
    }
    ctx->pc = 0x1DE198u;
    // 0x1de198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de19c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE19Cu;
    {
        const bool branch_taken_0x1de19c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE19Cu;
        // 0x1de1a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de19c) {
            ctx->pc = 0x1DE1E8u;
            goto label_1de1e8;
        }
    }
    ctx->pc = 0x1DE1A4u;
    // 0x1de1a4: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DE1A4u;
    {
        const bool branch_taken_0x1de1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1A4u;
        // 0x1de1a8: 0x26040348  addiu       $a0, $s0, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1a4) {
            ctx->pc = 0x1DE238u;
            goto label_1de238;
        }
    }
    ctx->pc = 0x1DE1ACu;
label_1de1ac:
    // 0x1de1ac: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE1ACu;
    SET_GPR_U32(ctx, 31, 0x1DE1B4u);
    ctx->pc = 0x1DE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1ACu;
    // 0x1de1b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE1ACu, 0x1DE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B4u;
label_1de1b4:
    // 0x1de1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1de1bc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE1BCu;
    SET_GPR_U32(ctx, 31, 0x1DE1C4u);
    ctx->pc = 0x1DE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1BCu;
    // 0x1de1c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE1BCu, 0x1DE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C4u;
label_1de1c4:
    // 0x1de1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1de1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1de1cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE1CCu;
    {
        const bool branch_taken_0x1de1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1CCu;
        // 0x1de1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1cc) {
            ctx->pc = 0x1DE218u;
            goto label_1de218;
        }
    }
    ctx->pc = 0x1DE1D4u;
label_1de1d4:
    // 0x1de1d4: 0x26040348  addiu       $a0, $s0, 0x348
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    // 0x1de1d8: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE1D8u;
    SET_GPR_U32(ctx, 31, 0x1DE1E0u);
    ctx->pc = 0x1DE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D8u;
    // 0x1de1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE1D8u, 0x1DE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1E0u;
label_1de1e0:
    // 0x1de1e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE1E0u;
    {
        const bool branch_taken_0x1de1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E0u;
        // 0x1de1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1e0) {
            ctx->pc = 0x1DE200u;
            goto label_1de200;
        }
    }
    ctx->pc = 0x1DE1E8u;
label_1de1e8:
    // 0x1de1e8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1de1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de1ec: 0x26040348  addiu       $a0, $s0, 0x348
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    // 0x1de1f0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1de1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de1f4: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE1F4u;
    SET_GPR_U32(ctx, 31, 0x1DE1FCu);
    ctx->pc = 0x1DE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1F4u;
    // 0x1de1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE1F4u, 0x1DE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1FCu;
label_1de1fc:
    // 0x1de1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de200:
    // 0x1de200: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1de204: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE204u;
    SET_GPR_U32(ctx, 31, 0x1DE20Cu);
    ctx->pc = 0x1DE208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE204u;
    // 0x1de208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE204u, 0x1DE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE20Cu;
label_1de20c:
    // 0x1de20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de210: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1de210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1de214: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de218:
    // 0x1de218: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE218u;
    SET_GPR_U32(ctx, 31, 0x1DE220u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE218u, 0x1DE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE220u;
label_1de220:
    // 0x1de220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de224: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1de224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1de228: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE228u;
    SET_GPR_U32(ctx, 31, 0x1DE230u);
    ctx->pc = 0x1DE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE228u;
    // 0x1de22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE228u, 0x1DE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE230u;
label_1de230:
    // 0x1de230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE230u;
    {
        const bool branch_taken_0x1de230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE230u;
        // 0x1de234: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de230) {
            ctx->pc = 0x1DE24Cu;
            goto label_1de24c;
        }
    }
    ctx->pc = 0x1DE238u;
label_1de238:
    // 0x1de238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de23c: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1de23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1de240: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE240u;
    SET_GPR_U32(ctx, 31, 0x1DE248u);
    ctx->pc = 0x1DE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE240u;
    // 0x1de244: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE240u, 0x1DE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE248u;
label_1de248:
    // 0x1de248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1de248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de24c:
    // 0x1de24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de250: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE250u;
        // 0x1de254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE258u;
}
