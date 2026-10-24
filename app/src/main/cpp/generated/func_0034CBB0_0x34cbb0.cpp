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

// Function: func_0034CBB0
// Address: 0x34cbb0 - 0x34cc40
void func_0034CBB0_0x34cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CBB0_0x34cbb0");
#endif

    switch (ctx->pc) {
        case 0x34cbb0u: goto label_34cbb0;
        case 0x34cbb4u: goto label_34cbb4;
        case 0x34cbb8u: goto label_34cbb8;
        case 0x34cbbcu: goto label_34cbbc;
        case 0x34cbc0u: goto label_34cbc0;
        case 0x34cbc4u: goto label_34cbc4;
        case 0x34cbc8u: goto label_34cbc8;
        case 0x34cbccu: goto label_34cbcc;
        case 0x34cbd0u: goto label_34cbd0;
        case 0x34cbd4u: goto label_34cbd4;
        case 0x34cbd8u: goto label_34cbd8;
        case 0x34cbdcu: goto label_34cbdc;
        case 0x34cbe0u: goto label_34cbe0;
        case 0x34cbe4u: goto label_34cbe4;
        case 0x34cbe8u: goto label_34cbe8;
        case 0x34cbecu: goto label_34cbec;
        case 0x34cbf0u: goto label_34cbf0;
        case 0x34cbf4u: goto label_34cbf4;
        case 0x34cbf8u: goto label_34cbf8;
        case 0x34cbfcu: goto label_34cbfc;
        case 0x34cc00u: goto label_34cc00;
        case 0x34cc04u: goto label_34cc04;
        case 0x34cc08u: goto label_34cc08;
        case 0x34cc0cu: goto label_34cc0c;
        case 0x34cc10u: goto label_34cc10;
        case 0x34cc14u: goto label_34cc14;
        case 0x34cc18u: goto label_34cc18;
        case 0x34cc1cu: goto label_34cc1c;
        case 0x34cc20u: goto label_34cc20;
        case 0x34cc24u: goto label_34cc24;
        case 0x34cc28u: goto label_34cc28;
        case 0x34cc2cu: goto label_34cc2c;
        case 0x34cc30u: goto label_34cc30;
        case 0x34cc34u: goto label_34cc34;
        case 0x34cc38u: goto label_34cc38;
        case 0x34cc3cu: goto label_34cc3c;
        default: break;
    }

    ctx->pc = 0x34cbb0u;

label_34cbb0:
    // 0x34cbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34cbb4:
    // 0x34cbb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34cbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34cbb8:
    // 0x34cbb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34cbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34cbbc:
    // 0x34cbbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34cbc0:
    // 0x34cbc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34cbc4:
    // 0x34cbc4: 0xc0ce568  jal         func_3395A0
label_34cbc8:
    if (ctx->pc == 0x34CBC8u) {
        ctx->pc = 0x34CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBC4u;
        // 0x34cbc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CBCCu;
        goto label_34cbcc;
    }
    ctx->pc = 0x34CBC4u;
    SET_GPR_U32(ctx, 31, 0x34CBCCu);
    ctx->pc = 0x34CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBC4u;
    // 0x34cbc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x34CBC4u, 0x34CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBCCu;
label_34cbcc:
    // 0x34cbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34cbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34cbd0:
    // 0x34cbd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34cbd4:
    // 0x34cbd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_34cbd8:
    // 0x34cbd8: 0x40f809  jalr        $v0
label_34cbdc:
    if (ctx->pc == 0x34CBDCu) {
        ctx->pc = 0x34CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBD8u;
        // 0x34cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CBE0u;
        goto label_34cbe0;
    }
    ctx->pc = 0x34CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CBE0u);
        ctx->pc = 0x34CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBD8u;
        // 0x34cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBD8u, 0x34CBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CBE0u;
label_34cbe0:
    // 0x34cbe0: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_34cbe4:
    // 0x34cbe4: 0xac620db0  sw          $v0, 0xDB0($v1)
    ctx->pc = 0x34cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3504), GPR_U32(ctx, 2));
label_34cbe8:
    // 0x34cbe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34cbec:
    // 0x34cbec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34cbf0:
    // 0x34cbf0: 0x60f809  jalr        $v1
label_34cbf4:
    if (ctx->pc == 0x34CBF4u) {
        ctx->pc = 0x34CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBF0u;
        // 0x34cbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CBF8u;
        goto label_34cbf8;
    }
    ctx->pc = 0x34CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34CBF8u);
        ctx->pc = 0x34CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBF0u;
        // 0x34cbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBF0u, 0x34CBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CBF8u;
label_34cbf8:
    // 0x34cbf8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_34cbfc:
    // 0x34cbfc: 0xc0ce2e4  jal         func_338B90
label_34cc00:
    if (ctx->pc == 0x34CC00u) {
        ctx->pc = 0x34CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBFCu;
        // 0x34cc00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CC04u;
        goto label_34cc04;
    }
    ctx->pc = 0x34CBFCu;
    SET_GPR_U32(ctx, 31, 0x34CC04u);
    ctx->pc = 0x34CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBFCu;
    // 0x34cc00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B90u, 0x34CBFCu, 0x34CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC04u;
label_34cc04:
    // 0x34cc04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34cc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34cc08:
    // 0x34cc08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34cc0c:
    // 0x34cc0c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x34cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_34cc10:
    // 0x34cc10: 0x40f809  jalr        $v0
label_34cc14:
    if (ctx->pc == 0x34CC14u) {
        ctx->pc = 0x34CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC10u;
        // 0x34cc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CC18u;
        goto label_34cc18;
    }
    ctx->pc = 0x34CC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CC18u);
        ctx->pc = 0x34CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC10u;
        // 0x34cc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC10u, 0x34CC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CC18u;
label_34cc18:
    // 0x34cc18: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_34cc1c:
    // 0x34cc1c: 0xac620db4  sw          $v0, 0xDB4($v1)
    ctx->pc = 0x34cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3508), GPR_U32(ctx, 2));
label_34cc20:
    // 0x34cc20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34cc24:
    // 0x34cc24: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34cc28:
    // 0x34cc28: 0x60f809  jalr        $v1
label_34cc2c:
    if (ctx->pc == 0x34CC2Cu) {
        ctx->pc = 0x34CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC28u;
        // 0x34cc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CC30u;
        goto label_34cc30;
    }
    ctx->pc = 0x34CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34CC30u);
        ctx->pc = 0x34CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC28u;
        // 0x34cc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC28u, 0x34CC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CC30u;
label_34cc30:
    // 0x34cc30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34cc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34cc34:
    // 0x34cc34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34cc38:
    // 0x34cc38: 0x3e00008  jr          $ra
label_34cc3c:
    if (ctx->pc == 0x34CC3Cu) {
        ctx->pc = 0x34CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC38u;
        // 0x34cc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CC40u;
        goto label_fallthrough_0x34cc38;
    }
    ctx->pc = 0x34CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC38u;
        // 0x34cc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34cc38:
    ctx->pc = 0x34CC40u;
}
