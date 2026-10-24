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

// Function: func_0014EC88
// Address: 0x14ec88 - 0x14ed60
void func_0014EC88_0x14ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014EC88_0x14ec88");
#endif

    switch (ctx->pc) {
        case 0x14ecd8u: goto label_14ecd8;
        case 0x14ecf8u: goto label_14ecf8;
        case 0x14ed0cu: goto label_14ed0c;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed50u: goto label_14ed50;
        default: break;
    }

    ctx->pc = 0x14ec88u;

    // 0x14ec88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ec8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ec90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ec94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ec98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ec98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec9c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14ec9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eca0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14ECA0u;
    {
        const bool branch_taken_0x14eca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECA0u;
        // 0x14eca4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eca0) {
            ctx->pc = 0x14ED04u;
            goto label_14ed04;
        }
    }
    ctx->pc = 0x14ECA8u;
    // 0x14eca8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ECA8u;
    {
        const bool branch_taken_0x14eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eca8) {
            ctx->pc = 0x14ECACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ECA8u;
            // 0x14ecac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ECC0u;
            goto label_14ecc0;
        }
    }
    ctx->pc = 0x14ECB0u;
    // 0x14ecb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14ECB0u;
    {
        const bool branch_taken_0x14ecb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecb0) {
            ctx->pc = 0x14ECD0u;
            goto label_14ecd0;
        }
    }
    ctx->pc = 0x14ECB8u;
    // 0x14ecb8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14ECB8u;
    {
        const bool branch_taken_0x14ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECB8u;
        // 0x14ecbc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecb8) {
            ctx->pc = 0x14ED54u;
            goto label_14ed54;
        }
    }
    ctx->pc = 0x14ECC0u;
label_14ecc0:
    // 0x14ecc0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14ECC0u;
    {
        const bool branch_taken_0x14ecc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ecc0) {
            ctx->pc = 0x14ED38u;
            goto label_14ed38;
        }
    }
    ctx->pc = 0x14ECC8u;
    // 0x14ecc8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14ECC8u;
    {
        const bool branch_taken_0x14ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECC8u;
        // 0x14eccc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecc8) {
            ctx->pc = 0x14ED54u;
            goto label_14ed54;
        }
    }
    ctx->pc = 0x14ECD0u;
label_14ecd0:
    // 0x14ecd0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x14ECD0u;
    SET_GPR_U32(ctx, 31, 0x14ECD8u);
    ctx->pc = 0x14ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECD0u;
    // 0x14ecd4: 0xc60c0438  lwc1        $f12, 0x438($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x14ECD0u, 0x14ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECD8u;
label_14ecd8:
    // 0x14ecd8: 0x8e050428  lw          $a1, 0x428($s0)
    ctx->pc = 0x14ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14ecdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14ecdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ece0: 0x8e06042c  lw          $a2, 0x42C($s0)
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x14ece4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ece8: 0xc60c0440  lwc1        $f12, 0x440($s0)
    ctx->pc = 0x14ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ecec: 0xc60d0430  lwc1        $f13, 0x430($s0)
    ctx->pc = 0x14ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ecf0: 0xc055d5a  jal         func_157568
    ctx->pc = 0x14ECF0u;
    SET_GPR_U32(ctx, 31, 0x14ECF8u);
    ctx->pc = 0x14ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECF0u;
    // 0x14ecf4: 0x96080434  lhu         $t0, 0x434($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x14ECF0u, 0x14ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECF8u;
label_14ecf8:
    // 0x14ecf8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14ecf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ecfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ed00: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x14ed00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_14ed04:
    // 0x14ed04: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14ED04u;
    SET_GPR_U32(ctx, 31, 0x14ED0Cu);
    ctx->pc = 0x14ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED04u;
    // 0x14ed08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14ED04u, 0x14ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED0Cu;
label_14ed0c:
    // 0x14ed0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ED0Cu;
    {
        const bool branch_taken_0x14ed0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed0c) {
            ctx->pc = 0x14ED20u;
            goto label_14ed20;
        }
    }
    ctx->pc = 0x14ED14u;
    // 0x14ed14: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x14ed14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ed18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ed1c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x14ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_14ed20:
    // 0x14ed20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14ed24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ed28: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14ED28u;
    SET_GPR_U32(ctx, 31, 0x14ED30u);
    ctx->pc = 0x14ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED28u;
    // 0x14ed2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14ED28u, 0x14ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED30u;
label_14ed30:
    // 0x14ed30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14ED30u;
    {
        const bool branch_taken_0x14ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED30u;
        // 0x14ed34: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed30) {
            ctx->pc = 0x14ED54u;
            goto label_14ed54;
        }
    }
    ctx->pc = 0x14ED38u;
label_14ed38:
    // 0x14ed38: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14ED38u;
    SET_GPR_U32(ctx, 31, 0x14ED40u);
    ctx->pc = 0x14ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED38u;
    // 0x14ed3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14ED38u, 0x14ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14ed44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ed48: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14ED48u;
    SET_GPR_U32(ctx, 31, 0x14ED50u);
    ctx->pc = 0x14ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED48u;
    // 0x14ed4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14ED48u, 0x14ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED50u;
label_14ed50:
    // 0x14ed50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ed50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ed54:
    // 0x14ed54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ed54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x14ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED58u;
        // 0x14ed5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ED60u;
}
