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

// Function: PokerUi_slidePanel
// Address: 0x1df198 - 0x1df278
void PokerUi_slidePanel_0x1df198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PokerUi_slidePanel_0x1df198");
#endif

    switch (ctx->pc) {
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1ecu: goto label_1df1ec;
        case 0x1df1fcu: goto label_1df1fc;
        case 0x1df210u: goto label_1df210;
        case 0x1df22cu: goto label_1df22c;
        case 0x1df23cu: goto label_1df23c;
        case 0x1df24cu: goto label_1df24c;
        case 0x1df264u: goto label_1df264;
        default: break;
    }

    ctx->pc = 0x1df198u;

    // 0x1df198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df19c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1df19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1df1a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df1ac: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF1ACu;
    {
        const bool branch_taken_0x1df1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1ACu;
        // 0x1df1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1ac) {
            ctx->pc = 0x1DF204u;
            goto label_1df204;
        }
    }
    ctx->pc = 0x1DF1B4u;
    // 0x1df1b4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df1b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF1B8u;
    {
        const bool branch_taken_0x1df1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df1b8) {
            ctx->pc = 0x1DF1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF1B8u;
            // 0x1df1bc: 0x26040158  addiu       $a0, $s0, 0x158 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF1D4u;
            goto label_1df1d4;
        }
    }
    ctx->pc = 0x1DF1C0u;
    // 0x1df1c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df1c4: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF1C4u;
    {
        const bool branch_taken_0x1df1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1C4u;
        // 0x1df1c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1c4) {
            ctx->pc = 0x1DF218u;
            goto label_1df218;
        }
    }
    ctx->pc = 0x1DF1CCu;
    // 0x1df1cc: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DF1CCu;
    {
        const bool branch_taken_0x1df1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1CCu;
        // 0x1df1d0: 0x26040158  addiu       $a0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1cc) {
            ctx->pc = 0x1DF254u;
            goto label_1df254;
        }
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF1D4u;
    SET_GPR_U32(ctx, 31, 0x1DF1DCu);
    ctx->pc = 0x1DF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1D4u;
    // 0x1df1d8: 0x2405fed4  addiu       $a1, $zero, -0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966996));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF1D4u, 0x1DF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1DCu;
label_1df1dc:
    // 0x1df1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df1e4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF1E4u;
    SET_GPR_U32(ctx, 31, 0x1DF1ECu);
    ctx->pc = 0x1DF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1E4u;
    // 0x1df1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF1E4u, 0x1DF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1ECu;
label_1df1ec:
    // 0x1df1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1df1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df1f4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF1F4u;
    SET_GPR_U32(ctx, 31, 0x1DF1FCu);
    ctx->pc = 0x1DF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1F4u;
    // 0x1df1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF1F4u, 0x1DF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1FCu;
label_1df1fc:
    // 0x1df1fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DF1FCu;
    {
        const bool branch_taken_0x1df1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1FCu;
        // 0x1df200: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1fc) {
            ctx->pc = 0x1DF268u;
            goto label_1df268;
        }
    }
    ctx->pc = 0x1DF204u;
label_1df204:
    // 0x1df204: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1df208: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF208u;
    SET_GPR_U32(ctx, 31, 0x1DF210u);
    ctx->pc = 0x1DF20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF208u;
    // 0x1df20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF208u, 0x1DF210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF210u;
label_1df210:
    // 0x1df210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF210u;
    {
        const bool branch_taken_0x1df210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF210u;
        // 0x1df214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df210) {
            ctx->pc = 0x1DF230u;
            goto label_1df230;
        }
    }
    ctx->pc = 0x1DF218u;
label_1df218:
    // 0x1df218: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1df21c: 0x2405fed4  addiu       $a1, $zero, -0x12C
    ctx->pc = 0x1df21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966996));
    // 0x1df220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df224: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF224u;
    SET_GPR_U32(ctx, 31, 0x1DF22Cu);
    ctx->pc = 0x1DF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF224u;
    // 0x1df228: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF224u, 0x1DF22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF22Cu;
label_1df22c:
    // 0x1df22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df230:
    // 0x1df230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df234: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF234u;
    SET_GPR_U32(ctx, 31, 0x1DF23Cu);
    ctx->pc = 0x1DF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF234u;
    // 0x1df238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF234u, 0x1DF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF23Cu;
label_1df23c:
    // 0x1df23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df240: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df244: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF244u;
    SET_GPR_U32(ctx, 31, 0x1DF24Cu);
    ctx->pc = 0x1DF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF244u;
    // 0x1df248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF244u, 0x1DF24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF24Cu;
label_1df24c:
    // 0x1df24c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF24Cu;
    {
        const bool branch_taken_0x1df24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF24Cu;
        // 0x1df250: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df24c) {
            ctx->pc = 0x1DF268u;
            goto label_1df268;
        }
    }
    ctx->pc = 0x1DF254u;
label_1df254:
    // 0x1df254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df258: 0x2406fed4  addiu       $a2, $zero, -0x12C
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966996));
    // 0x1df25c: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF25Cu;
    SET_GPR_U32(ctx, 31, 0x1DF264u);
    ctx->pc = 0x1DF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF25Cu;
    // 0x1df260: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF25Cu, 0x1DF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF264u;
label_1df264:
    // 0x1df264: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df268:
    // 0x1df268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df26c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF26Cu;
        // 0x1df270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF274u;
    // 0x1df274: 0x0  nop
    ctx->pc = 0x1df274u;
    // NOP
    ctx->pc = 0x1df278u;
}
