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

// Function: func_00330C18
// Address: 0x330c18 - 0x330c88
void func_00330C18_0x330c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330C18_0x330c18");
#endif

    switch (ctx->pc) {
        case 0x330c18u: goto label_330c18;
        case 0x330c1cu: goto label_330c1c;
        case 0x330c20u: goto label_330c20;
        case 0x330c24u: goto label_330c24;
        case 0x330c28u: goto label_330c28;
        case 0x330c2cu: goto label_330c2c;
        case 0x330c30u: goto label_330c30;
        case 0x330c34u: goto label_330c34;
        case 0x330c38u: goto label_330c38;
        case 0x330c3cu: goto label_330c3c;
        case 0x330c40u: goto label_330c40;
        case 0x330c44u: goto label_330c44;
        case 0x330c48u: goto label_330c48;
        case 0x330c4cu: goto label_330c4c;
        case 0x330c50u: goto label_330c50;
        case 0x330c54u: goto label_330c54;
        case 0x330c58u: goto label_330c58;
        case 0x330c5cu: goto label_330c5c;
        case 0x330c60u: goto label_330c60;
        case 0x330c64u: goto label_330c64;
        case 0x330c68u: goto label_330c68;
        case 0x330c6cu: goto label_330c6c;
        case 0x330c70u: goto label_330c70;
        case 0x330c74u: goto label_330c74;
        case 0x330c78u: goto label_330c78;
        case 0x330c7cu: goto label_330c7c;
        case 0x330c80u: goto label_330c80;
        case 0x330c84u: goto label_330c84;
        default: break;
    }

    ctx->pc = 0x330c18u;

label_330c18:
    // 0x330c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330c1c:
    // 0x330c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330c20:
    // 0x330c20: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_330c24:
    if (ctx->pc == 0x330C24u) {
        ctx->pc = 0x330C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C20u;
        // 0x330c24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C28u;
        goto label_330c28;
    }
    ctx->pc = 0x330C20u;
    {
        const bool branch_taken_0x330c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C20u;
        // 0x330c24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c20) {
            ctx->pc = 0x330C40u;
            goto label_330c40;
        }
    }
    ctx->pc = 0x330C28u;
label_330c28:
    // 0x330c28: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330c2c:
    // 0x330c2c: 0xc0cc0b8  jal         func_3302E0
label_330c30:
    if (ctx->pc == 0x330C30u) {
        ctx->pc = 0x330C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C2Cu;
        // 0x330c30: 0x24843380  addiu       $a0, $a0, 0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C34u;
        goto label_330c34;
    }
    ctx->pc = 0x330C2Cu;
    SET_GPR_U32(ctx, 31, 0x330C34u);
    ctx->pc = 0x330C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C2Cu;
    // 0x330c30: 0x24843380  addiu       $a0, $a0, 0x3380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330C2Cu, 0x330C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C34u;
label_330c34:
    // 0x330c34: 0x1000000e  b           . + 4 + (0xE << 2)
label_330c38:
    if (ctx->pc == 0x330C38u) {
        ctx->pc = 0x330C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C34u;
        // 0x330c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C3Cu;
        goto label_330c3c;
    }
    ctx->pc = 0x330C34u;
    {
        const bool branch_taken_0x330c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C34u;
        // 0x330c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c34) {
            ctx->pc = 0x330C70u;
            goto label_330c70;
        }
    }
    ctx->pc = 0x330C3Cu;
label_330c3c:
    // 0x330c3c: 0x0  nop
    ctx->pc = 0x330c3cu;
    // NOP
label_330c40:
    // 0x330c40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x330c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330c44:
    // 0x330c44: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x330c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_330c48:
    // 0x330c48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_330c4c:
    if (ctx->pc == 0x330C4Cu) {
        ctx->pc = 0x330C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C48u;
        // 0x330c4c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C50u;
        goto label_330c50;
    }
    ctx->pc = 0x330C48u;
    {
        const bool branch_taken_0x330c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c48) {
            ctx->pc = 0x330C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330C48u;
            // 0x330c4c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330C60u;
            goto label_330c60;
        }
    }
    ctx->pc = 0x330C50u;
label_330c50:
    // 0x330c50: 0x40f809  jalr        $v0
label_330c54:
    if (ctx->pc == 0x330C54u) {
        ctx->pc = 0x330C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C50u;
        // 0x330c54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C58u;
        goto label_330c58;
    }
    ctx->pc = 0x330C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330C58u);
        ctx->pc = 0x330C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C50u;
        // 0x330c54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330C50u, 0x330C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330C58u;
label_330c58:
    // 0x330c58: 0x10000004  b           . + 4 + (0x4 << 2)
label_330c5c:
    if (ctx->pc == 0x330C5Cu) {
        ctx->pc = 0x330C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C58u;
        // 0x330c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C60u;
        goto label_330c60;
    }
    ctx->pc = 0x330C58u;
    {
        const bool branch_taken_0x330c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C58u;
        // 0x330c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c58) {
            ctx->pc = 0x330C6Cu;
            goto label_330c6c;
        }
    }
    ctx->pc = 0x330C60u;
label_330c60:
    // 0x330c60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x330c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330c64:
    // 0x330c64: 0xc0cc0b8  jal         func_3302E0
label_330c68:
    if (ctx->pc == 0x330C68u) {
        ctx->pc = 0x330C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C64u;
        // 0x330c68: 0x248433a0  addiu       $a0, $a0, 0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C6Cu;
        goto label_330c6c;
    }
    ctx->pc = 0x330C64u;
    SET_GPR_U32(ctx, 31, 0x330C6Cu);
    ctx->pc = 0x330C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C64u;
    // 0x330c68: 0x248433a0  addiu       $a0, $a0, 0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330C64u, 0x330C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C6Cu;
label_330c6c:
    // 0x330c6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330c70:
    // 0x330c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330c74:
    // 0x330c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330c78:
    // 0x330c78: 0x3e00008  jr          $ra
label_330c7c:
    if (ctx->pc == 0x330C7Cu) {
        ctx->pc = 0x330C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C78u;
        // 0x330c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330C80u;
        goto label_330c80;
    }
    ctx->pc = 0x330C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C78u;
        // 0x330c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330C80u;
label_330c80:
    // 0x330c80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330c84:
    // 0x330c84: 0x0  nop
    ctx->pc = 0x330c84u;
    // NOP
    ctx->pc = 0x330c88u;
}
