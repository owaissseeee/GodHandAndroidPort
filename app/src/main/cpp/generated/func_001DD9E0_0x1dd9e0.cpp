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

// Function: func_001DD9E0
// Address: 0x1dd9e0 - 0x1ddab0
void func_001DD9E0_0x1dd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD9E0_0x1dd9e0");
#endif

    switch (ctx->pc) {
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda7cu: goto label_1dda7c;
        case 0x1dda8cu: goto label_1dda8c;
        case 0x1dda9cu: goto label_1dda9c;
        default: break;
    }

    ctx->pc = 0x1dd9e0u;

    // 0x1dd9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd9e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1dd9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dd9e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9f4: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD9F4u;
    {
        const bool branch_taken_0x1dd9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9F4u;
        // 0x1dd9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9f4) {
            ctx->pc = 0x1DDA34u;
            goto label_1dda34;
        }
    }
    ctx->pc = 0x1DD9FCu;
    // 0x1dd9fc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1dd9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dda00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDA00u;
    {
        const bool branch_taken_0x1dda00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda00) {
            ctx->pc = 0x1DDA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDA00u;
            // 0x1dda04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDA18u;
            goto label_1dda18;
        }
    }
    ctx->pc = 0x1DDA08u;
    // 0x1dda08: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDA08u;
    {
        const bool branch_taken_0x1dda08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA08u;
        // 0x1dda0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda08) {
            ctx->pc = 0x1DDA28u;
            goto label_1dda28;
        }
    }
    ctx->pc = 0x1DDA10u;
    // 0x1dda10: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DDA10u;
    {
        const bool branch_taken_0x1dda10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA10u;
        // 0x1dda14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda10) {
            ctx->pc = 0x1DDAA0u;
            goto label_1ddaa0;
        }
    }
    ctx->pc = 0x1DDA18u;
label_1dda18:
    // 0x1dda18: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDA18u;
    {
        const bool branch_taken_0x1dda18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA18u;
        // 0x1dda1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda18) {
            ctx->pc = 0x1DDA70u;
            goto label_1dda70;
        }
    }
    ctx->pc = 0x1DDA20u;
    // 0x1dda20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DDA20u;
    {
        const bool branch_taken_0x1dda20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA20u;
        // 0x1dda24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda20) {
            ctx->pc = 0x1DDAA0u;
            goto label_1ddaa0;
        }
    }
    ctx->pc = 0x1DDA28u;
label_1dda28:
    // 0x1dda28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dda2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDA2Cu;
    {
        const bool branch_taken_0x1dda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA2Cu;
        // 0x1dda30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda2c) {
            ctx->pc = 0x1DDA40u;
            goto label_1dda40;
        }
    }
    ctx->pc = 0x1DDA34u;
label_1dda34:
    // 0x1dda34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dda3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dda3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda40:
    // 0x1dda40: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA40u;
    SET_GPR_U32(ctx, 31, 0x1DDA48u);
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA40u, 0x1DDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA48u;
label_1dda48:
    // 0x1dda48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda4c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dda4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1dda50: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA50u;
    SET_GPR_U32(ctx, 31, 0x1DDA58u);
    ctx->pc = 0x1DDA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA50u;
    // 0x1dda54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA50u, 0x1DDA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA58u;
label_1dda58:
    // 0x1dda58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda5c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1dda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dda60: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA60u;
    SET_GPR_U32(ctx, 31, 0x1DDA68u);
    ctx->pc = 0x1DDA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA60u;
    // 0x1dda64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA60u, 0x1DDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA68u;
label_1dda68:
    // 0x1dda68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DDA68u;
    {
        const bool branch_taken_0x1dda68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA68u;
        // 0x1dda6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda68) {
            ctx->pc = 0x1DDAA0u;
            goto label_1ddaa0;
        }
    }
    ctx->pc = 0x1DDA70u;
label_1dda70:
    // 0x1dda70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dda74: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA74u;
    SET_GPR_U32(ctx, 31, 0x1DDA7Cu);
    ctx->pc = 0x1DDA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA74u;
    // 0x1dda78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA74u, 0x1DDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA7Cu;
label_1dda7c:
    // 0x1dda7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1dda84: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA84u;
    SET_GPR_U32(ctx, 31, 0x1DDA8Cu);
    ctx->pc = 0x1DDA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA84u;
    // 0x1dda88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA84u, 0x1DDA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA8Cu;
label_1dda8c:
    // 0x1dda8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dda8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda90: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dda94: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DDA94u;
    SET_GPR_U32(ctx, 31, 0x1DDA9Cu);
    ctx->pc = 0x1DDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA94u;
    // 0x1dda98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DDA94u, 0x1DDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA9Cu;
label_1dda9c:
    // 0x1dda9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dda9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddaa0:
    // 0x1ddaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAA4u;
        // 0x1ddaa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDAACu;
    // 0x1ddaac: 0x0  nop
    ctx->pc = 0x1ddaacu;
    // NOP
    ctx->pc = 0x1ddab0u;
}
