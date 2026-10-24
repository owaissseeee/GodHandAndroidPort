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

// Function: func_001DCDA8
// Address: 0x1dcda8 - 0x1dce60
void func_001DCDA8_0x1dcda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DCDA8_0x1dcda8");
#endif

    switch (ctx->pc) {
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce3cu: goto label_1dce3c;
        default: break;
    }

    ctx->pc = 0x1dcda8u;

    // 0x1dcda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcdac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dcdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dcdb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcdb4: 0xc07706a  jal         func_1DC1A8
    ctx->pc = 0x1DCDB4u;
    SET_GPR_U32(ctx, 31, 0x1DCDBCu);
    ctx->pc = 0x1DCDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDB4u;
    // 0x1dcdb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC1A8u, 0x1DCDB4u, 0x1DCDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDBCu;
label_1dcdbc:
    // 0x1dcdbc: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DCDBCu;
    {
        const bool branch_taken_0x1dcdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDBCu;
        // 0x1dcdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdbc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDC4u;
    // 0x1dcdc4: 0xc0770ae  jal         func_1DC2B8
    ctx->pc = 0x1DCDC4u;
    SET_GPR_U32(ctx, 31, 0x1DCDCCu);
    ctx->pc = 0x1DCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC4u;
    // 0x1dcdc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC2B8u, 0x1DCDC4u, 0x1DCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDCCu;
label_1dcdcc:
    // 0x1dcdcc: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DCDCCu;
    {
        const bool branch_taken_0x1dcdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDCCu;
        // 0x1dcdd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdcc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDD4u;
    // 0x1dcdd4: 0xc077130  jal         func_1DC4C0
    ctx->pc = 0x1DCDD4u;
    SET_GPR_U32(ctx, 31, 0x1DCDDCu);
    ctx->pc = 0x1DCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD4u;
    // 0x1dcdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4C0u, 0x1DCDD4u, 0x1DCDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDDCu;
label_1dcddc:
    // 0x1dcddc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DCDDCu;
    {
        const bool branch_taken_0x1dcddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDCu;
        // 0x1dcde0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcddc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDE4u;
    // 0x1dcde4: 0xc07717e  jal         func_1DC5F8
    ctx->pc = 0x1DCDE4u;
    SET_GPR_U32(ctx, 31, 0x1DCDECu);
    ctx->pc = 0x1DCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDE4u;
    // 0x1dcde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC5F8u, 0x1DCDE4u, 0x1DCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDECu;
label_1dcdec:
    // 0x1dcdec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DCDECu;
    {
        const bool branch_taken_0x1dcdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDECu;
        // 0x1dcdf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdec) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDF4u;
    // 0x1dcdf4: 0xc0771c4  jal         func_1DC710
    ctx->pc = 0x1DCDF4u;
    SET_GPR_U32(ctx, 31, 0x1DCDFCu);
    ctx->pc = 0x1DCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDF4u;
    // 0x1dcdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC710u, 0x1DCDF4u, 0x1DCDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDFCu;
label_1dcdfc:
    // 0x1dcdfc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DCDFCu;
    {
        const bool branch_taken_0x1dcdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDFCu;
        // 0x1dce00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdfc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCE04u;
    // 0x1dce04: 0xc0771e6  jal         func_1DC798
    ctx->pc = 0x1DCE04u;
    SET_GPR_U32(ctx, 31, 0x1DCE0Cu);
    ctx->pc = 0x1DCE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE04u;
    // 0x1dce08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC798u, 0x1DCE04u, 0x1DCE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE0Cu;
label_1dce0c:
    // 0x1dce0c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCE0Cu;
    {
        const bool branch_taken_0x1dce0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE0Cu;
        // 0x1dce10: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce0c) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCE14u;
    // 0x1dce14: 0xc077260  jal         func_1DC980
    ctx->pc = 0x1DCE14u;
    SET_GPR_U32(ctx, 31, 0x1DCE1Cu);
    ctx->pc = 0x1DCE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE14u;
    // 0x1dce18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC980u, 0x1DCE14u, 0x1DCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE1Cu;
label_1dce1c:
    // 0x1dce1c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCE1Cu;
    {
        const bool branch_taken_0x1dce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE1Cu;
        // 0x1dce20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce1c) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCE24u;
    // 0x1dce24: 0xc0772b6  jal         func_1DCAD8
    ctx->pc = 0x1DCE24u;
    SET_GPR_U32(ctx, 31, 0x1DCE2Cu);
    ctx->pc = 0x1DCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE24u;
    // 0x1dce28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCAD8u, 0x1DCE24u, 0x1DCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE2Cu;
label_1dce2c:
    // 0x1dce2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCE2Cu;
    {
        const bool branch_taken_0x1dce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dce2c) {
            ctx->pc = 0x1DCE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCE2Cu;
            // 0x1dce30: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1DCE34u;
    SET_GPR_U32(ctx, 31, 0x1DCE3Cu);
    ctx->pc = 0x1DCE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE34u;
    // 0x1dce38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1DCE34u, 0x1DCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE3Cu;
label_1dce3c:
    // 0x1dce3c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dce40: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dce44: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1dce44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1dce48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1dce4c:
    // 0x1dce4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dce4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE54u;
        // 0x1dce58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE5Cu;
    // 0x1dce5c: 0x0  nop
    ctx->pc = 0x1dce5cu;
    // NOP
    ctx->pc = 0x1dce60u;
}
