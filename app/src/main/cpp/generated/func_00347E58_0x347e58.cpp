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

// Function: func_00347E58
// Address: 0x347e58 - 0x347f20
void func_00347E58_0x347e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347E58_0x347e58");
#endif

    switch (ctx->pc) {
        case 0x347e74u: goto label_347e74;
        case 0x347ed4u: goto label_347ed4;
        case 0x347ee8u: goto label_347ee8;
        case 0x347ef4u: goto label_347ef4;
        case 0x347f00u: goto label_347f00;
        default: break;
    }

    ctx->pc = 0x347e58u;

    // 0x347e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347e6c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347E6Cu;
    SET_GPR_U32(ctx, 31, 0x347E74u);
    ctx->pc = 0x347E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E6Cu;
    // 0x347e70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347E6Cu, 0x347E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E74u;
label_347e74:
    // 0x347e74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x347e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347e7c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347e80: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x347E80u;
    {
        const bool branch_taken_0x347e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x347E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E80u;
        // 0x347e84: 0x248491a0  addiu       $a0, $a0, -0x6E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e80) {
            ctx->pc = 0x347EA0u;
            goto label_347ea0;
        }
    }
    ctx->pc = 0x347E88u;
    // 0x347e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347e94: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347E94u;
    ctx->pc = 0x347E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E94u;
    // 0x347e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347E94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347E9Cu;
    // 0x347e9c: 0x0  nop
    ctx->pc = 0x347e9cu;
    // NOP
label_347ea0:
    // 0x347ea0: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x347ea4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x347EA4u;
    {
        const bool branch_taken_0x347ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x347EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EA4u;
        // 0x347ea8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ea4) {
            ctx->pc = 0x347EB8u;
            goto label_347eb8;
        }
    }
    ctx->pc = 0x347EACu;
    // 0x347eac: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x347EACu;
    {
        const bool branch_taken_0x347eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x347eac) {
            ctx->pc = 0x347EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EACu;
            // 0x347eb0: 0xa2020071  sb          $v0, 0x71($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347EB4u;
            goto label_347eb4;
        }
    }
    ctx->pc = 0x347EB4u;
label_347eb4:
    // 0x347eb4: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_347eb8:
    // 0x347eb8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x347EB8u;
    {
        const bool branch_taken_0x347eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347eb8) {
            ctx->pc = 0x347EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EB8u;
            // 0x347ebc: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347EECu;
            goto label_347eec;
        }
    }
    ctx->pc = 0x347EC0u;
    // 0x347ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347ec4: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x347EC4u;
    {
        const bool branch_taken_0x347ec4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x347ec4) {
            ctx->pc = 0x347EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347EC4u;
            // 0x347ec8: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347EECu;
            goto label_347eec;
        }
    }
    ctx->pc = 0x347ECCu;
    // 0x347ecc: 0xc0d333a  jal         func_34CCE8
    ctx->pc = 0x347ECCu;
    SET_GPR_U32(ctx, 31, 0x347ED4u);
    ctx->pc = 0x34CCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCE8u, 0x347ECCu, 0x347ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347ED4u;
label_347ed4:
    // 0x347ed4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347ED8u;
    {
        const bool branch_taken_0x347ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ED8u;
        // 0x347edc: 0x248491d0  addiu       $a0, $a0, -0x6E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ed8) {
            ctx->pc = 0x347EE8u;
            goto label_347ee8;
        }
    }
    ctx->pc = 0x347EE0u;
    // 0x347ee0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x347EE0u;
    SET_GPR_U32(ctx, 31, 0x347EE8u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347EE0u, 0x347EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EE8u;
label_347ee8:
    // 0x347ee8: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_347eec:
    // 0x347eec: 0xc0d2184  jal         func_348610
    ctx->pc = 0x347EECu;
    SET_GPR_U32(ctx, 31, 0x347EF4u);
    ctx->pc = 0x347EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EECu;
    // 0x347ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348610u, 0x347EECu, 0x347EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EF4u;
label_347ef4:
    // 0x347ef4: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x347ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x347ef8: 0xc0d2184  jal         func_348610
    ctx->pc = 0x347EF8u;
    SET_GPR_U32(ctx, 31, 0x347F00u);
    ctx->pc = 0x347EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EF8u;
    // 0x347efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348610u, 0x347EF8u, 0x347F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F00u;
label_347f00:
    // 0x347f00: 0xa2110070  sb          $s1, 0x70($s0)
    ctx->pc = 0x347f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 17));
    // 0x347f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347f10: 0x3e00008  jr          $ra
    ctx->pc = 0x347F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347F10u;
        // 0x347f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347F18u;
    // 0x347f18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x347f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x347f1c: 0x0  nop
    ctx->pc = 0x347f1cu;
    // NOP
    ctx->pc = 0x347f20u;
}
