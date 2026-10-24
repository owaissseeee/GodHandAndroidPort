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

// Function: func_0014EB90
// Address: 0x14eb90 - 0x14ec88
void func_0014EB90_0x14eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014EB90_0x14eb90");
#endif

    switch (ctx->pc) {
        case 0x14ebe0u: goto label_14ebe0;
        case 0x14ec00u: goto label_14ec00;
        case 0x14ec14u: goto label_14ec14;
        case 0x14ec38u: goto label_14ec38;
        case 0x14ec48u: goto label_14ec48;
        case 0x14ec58u: goto label_14ec58;
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec78u: goto label_14ec78;
        default: break;
    }

    ctx->pc = 0x14eb90u;

    // 0x14eb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14eb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eb98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14eb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14eba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14eba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eba4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14eba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eba8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EBA8u;
    {
        const bool branch_taken_0x14eba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBA8u;
        // 0x14ebac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eba8) {
            ctx->pc = 0x14EC0Cu;
            goto label_14ec0c;
        }
    }
    ctx->pc = 0x14EBB0u;
    // 0x14ebb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EBB0u;
    {
        const bool branch_taken_0x14ebb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebb0) {
            ctx->pc = 0x14EBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EBB0u;
            // 0x14ebb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EBC8u;
            goto label_14ebc8;
        }
    }
    ctx->pc = 0x14EBB8u;
    // 0x14ebb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EBB8u;
    {
        const bool branch_taken_0x14ebb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebb8) {
            ctx->pc = 0x14EBD8u;
            goto label_14ebd8;
        }
    }
    ctx->pc = 0x14EBC0u;
    // 0x14ebc0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14EBC0u;
    {
        const bool branch_taken_0x14ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC0u;
        // 0x14ebc4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebc0) {
            ctx->pc = 0x14EC7Cu;
            goto label_14ec7c;
        }
    }
    ctx->pc = 0x14EBC8u;
label_14ebc8:
    // 0x14ebc8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14EBC8u;
    {
        const bool branch_taken_0x14ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ebc8) {
            ctx->pc = 0x14EC50u;
            goto label_14ec50;
        }
    }
    ctx->pc = 0x14EBD0u;
    // 0x14ebd0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14EBD0u;
    {
        const bool branch_taken_0x14ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD0u;
        // 0x14ebd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebd0) {
            ctx->pc = 0x14EC7Cu;
            goto label_14ec7c;
        }
    }
    ctx->pc = 0x14EBD8u;
label_14ebd8:
    // 0x14ebd8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x14EBD8u;
    SET_GPR_U32(ctx, 31, 0x14EBE0u);
    ctx->pc = 0x14EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBD8u;
    // 0x14ebdc: 0xc60c0438  lwc1        $f12, 0x438($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x14EBD8u, 0x14EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBE0u;
label_14ebe0:
    // 0x14ebe0: 0x8e050428  lw          $a1, 0x428($s0)
    ctx->pc = 0x14ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14ebe4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14ebe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebe8: 0x8e06042c  lw          $a2, 0x42C($s0)
    ctx->pc = 0x14ebe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x14ebec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebf0: 0xc60c0440  lwc1        $f12, 0x440($s0)
    ctx->pc = 0x14ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ebf4: 0xc60d0430  lwc1        $f13, 0x430($s0)
    ctx->pc = 0x14ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ebf8: 0xc055d5a  jal         func_157568
    ctx->pc = 0x14EBF8u;
    SET_GPR_U32(ctx, 31, 0x14EC00u);
    ctx->pc = 0x14EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBF8u;
    // 0x14ebfc: 0x96080434  lhu         $t0, 0x434($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x14EBF8u, 0x14EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC00u;
label_14ec00:
    // 0x14ec00: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14ec00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ec04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ec08: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x14ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_14ec0c:
    // 0x14ec0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EC0Cu;
    SET_GPR_U32(ctx, 31, 0x14EC14u);
    ctx->pc = 0x14EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC0Cu;
    // 0x14ec10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EC0Cu, 0x14EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC14u;
label_14ec14:
    // 0x14ec14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EC14u;
    {
        const bool branch_taken_0x14ec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec14) {
            ctx->pc = 0x14EC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EC14u;
            // 0x14ec18: 0xc60c04b8  lwc1        $f12, 0x4B8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EC2Cu;
            goto label_14ec2c;
        }
    }
    ctx->pc = 0x14EC1Cu;
    // 0x14ec1c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x14ec1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ec20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ec24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x14ec24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ec28: 0xc60c04b8  lwc1        $f12, 0x4B8($s0)
    ctx->pc = 0x14ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14ec2c:
    // 0x14ec2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec30: 0xc053a06  jal         func_14E818
    ctx->pc = 0x14EC30u;
    SET_GPR_U32(ctx, 31, 0x14EC38u);
    ctx->pc = 0x14EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC30u;
    // 0x14ec34: 0x260504c0  addiu       $a1, $s0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E818u, 0x14EC30u, 0x14EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC38u;
label_14ec38:
    // 0x14ec38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14ec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ec40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14EC40u;
    SET_GPR_U32(ctx, 31, 0x14EC48u);
    ctx->pc = 0x14EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC40u;
    // 0x14ec44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14EC40u, 0x14EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC48u;
label_14ec48:
    // 0x14ec48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14EC48u;
    {
        const bool branch_taken_0x14ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC48u;
        // 0x14ec4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec48) {
            ctx->pc = 0x14EC7Cu;
            goto label_14ec7c;
        }
    }
    ctx->pc = 0x14EC50u;
label_14ec50:
    // 0x14ec50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EC50u;
    SET_GPR_U32(ctx, 31, 0x14EC58u);
    ctx->pc = 0x14EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC50u;
    // 0x14ec54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EC50u, 0x14EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC58u;
label_14ec58:
    // 0x14ec58: 0xc60c04b8  lwc1        $f12, 0x4B8($s0)
    ctx->pc = 0x14ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ec5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec60: 0xc053a06  jal         func_14E818
    ctx->pc = 0x14EC60u;
    SET_GPR_U32(ctx, 31, 0x14EC68u);
    ctx->pc = 0x14EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC60u;
    // 0x14ec64: 0x260504c0  addiu       $a1, $s0, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E818u, 0x14EC60u, 0x14EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC68u;
label_14ec68:
    // 0x14ec68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14ec6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ec70: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14EC70u;
    SET_GPR_U32(ctx, 31, 0x14EC78u);
    ctx->pc = 0x14EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC70u;
    // 0x14ec74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14EC70u, 0x14EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC78u;
label_14ec78:
    // 0x14ec78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ec78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ec7c:
    // 0x14ec7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x14EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC80u;
        // 0x14ec84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EC88u;
}
