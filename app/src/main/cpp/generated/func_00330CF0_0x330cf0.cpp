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

// Function: func_00330CF0
// Address: 0x330cf0 - 0x330d58
void func_00330CF0_0x330cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330CF0_0x330cf0");
#endif

    switch (ctx->pc) {
        case 0x330cf0u: goto label_330cf0;
        case 0x330cf4u: goto label_330cf4;
        case 0x330cf8u: goto label_330cf8;
        case 0x330cfcu: goto label_330cfc;
        case 0x330d00u: goto label_330d00;
        case 0x330d04u: goto label_330d04;
        case 0x330d08u: goto label_330d08;
        case 0x330d0cu: goto label_330d0c;
        case 0x330d10u: goto label_330d10;
        case 0x330d14u: goto label_330d14;
        case 0x330d18u: goto label_330d18;
        case 0x330d1cu: goto label_330d1c;
        case 0x330d20u: goto label_330d20;
        case 0x330d24u: goto label_330d24;
        case 0x330d28u: goto label_330d28;
        case 0x330d2cu: goto label_330d2c;
        case 0x330d30u: goto label_330d30;
        case 0x330d34u: goto label_330d34;
        case 0x330d38u: goto label_330d38;
        case 0x330d3cu: goto label_330d3c;
        case 0x330d40u: goto label_330d40;
        case 0x330d44u: goto label_330d44;
        case 0x330d48u: goto label_330d48;
        case 0x330d4cu: goto label_330d4c;
        case 0x330d50u: goto label_330d50;
        case 0x330d54u: goto label_330d54;
        default: break;
    }

    ctx->pc = 0x330cf0u;

label_330cf0:
    // 0x330cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330cf4:
    // 0x330cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330cf8:
    // 0x330cf8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x330cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_330cfc:
    // 0x330cfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_330d00:
    if (ctx->pc == 0x330D00u) {
        ctx->pc = 0x330D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CFCu;
        // 0x330d00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D04u;
        goto label_330d04;
    }
    ctx->pc = 0x330CFCu;
    {
        const bool branch_taken_0x330cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CFCu;
        // 0x330d00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cfc) {
            ctx->pc = 0x330D18u;
            goto label_330d18;
        }
    }
    ctx->pc = 0x330D04u;
label_330d04:
    // 0x330d04: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330d08:
    // 0x330d08: 0xc0cc0b8  jal         func_3302E0
label_330d0c:
    if (ctx->pc == 0x330D0Cu) {
        ctx->pc = 0x330D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D08u;
        // 0x330d0c: 0x24843430  addiu       $a0, $a0, 0x3430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D10u;
        goto label_330d10;
    }
    ctx->pc = 0x330D08u;
    SET_GPR_U32(ctx, 31, 0x330D10u);
    ctx->pc = 0x330D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D08u;
    // 0x330d0c: 0x24843430  addiu       $a0, $a0, 0x3430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330D08u, 0x330D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D10u;
label_330d10:
    // 0x330d10: 0x1000000c  b           . + 4 + (0xC << 2)
label_330d14:
    if (ctx->pc == 0x330D14u) {
        ctx->pc = 0x330D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D10u;
        // 0x330d14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D18u;
        goto label_330d18;
    }
    ctx->pc = 0x330D10u;
    {
        const bool branch_taken_0x330d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D10u;
        // 0x330d14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d10) {
            ctx->pc = 0x330D44u;
            goto label_330d44;
        }
    }
    ctx->pc = 0x330D18u;
label_330d18:
    // 0x330d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x330d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330d1c:
    // 0x330d1c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x330d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_330d20:
    // 0x330d20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_330d24:
    if (ctx->pc == 0x330D24u) {
        ctx->pc = 0x330D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D20u;
        // 0x330d24: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D28u;
        goto label_330d28;
    }
    ctx->pc = 0x330D20u;
    {
        const bool branch_taken_0x330d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d20) {
            ctx->pc = 0x330D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330D20u;
            // 0x330d24: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330D38u;
            goto label_330d38;
        }
    }
    ctx->pc = 0x330D28u;
label_330d28:
    // 0x330d28: 0x40f809  jalr        $v0
label_330d2c:
    if (ctx->pc == 0x330D2Cu) {
        ctx->pc = 0x330D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D28u;
        // 0x330d2c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D30u;
        goto label_330d30;
    }
    ctx->pc = 0x330D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330D30u);
        ctx->pc = 0x330D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D28u;
        // 0x330d2c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330D28u, 0x330D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330D30u;
label_330d30:
    // 0x330d30: 0x10000003  b           . + 4 + (0x3 << 2)
label_330d34:
    if (ctx->pc == 0x330D34u) {
        ctx->pc = 0x330D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D30u;
        // 0x330d34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D38u;
        goto label_330d38;
    }
    ctx->pc = 0x330D30u;
    {
        const bool branch_taken_0x330d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D30u;
        // 0x330d34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d30) {
            ctx->pc = 0x330D40u;
            goto label_330d40;
        }
    }
    ctx->pc = 0x330D38u;
label_330d38:
    // 0x330d38: 0xc0cc0b8  jal         func_3302E0
label_330d3c:
    if (ctx->pc == 0x330D3Cu) {
        ctx->pc = 0x330D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D38u;
        // 0x330d3c: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D40u;
        goto label_330d40;
    }
    ctx->pc = 0x330D38u;
    SET_GPR_U32(ctx, 31, 0x330D40u);
    ctx->pc = 0x330D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D38u;
    // 0x330d3c: 0x24843450  addiu       $a0, $a0, 0x3450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330D38u, 0x330D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D40u;
label_330d40:
    // 0x330d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330d44:
    // 0x330d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330d48:
    // 0x330d48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330d4c:
    // 0x330d4c: 0x3e00008  jr          $ra
label_330d50:
    if (ctx->pc == 0x330D50u) {
        ctx->pc = 0x330D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D4Cu;
        // 0x330d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330D54u;
        goto label_330d54;
    }
    ctx->pc = 0x330D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D4Cu;
        // 0x330d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330D54u;
label_330d54:
    // 0x330d54: 0x0  nop
    ctx->pc = 0x330d54u;
    // NOP
    ctx->pc = 0x330d58u;
}
