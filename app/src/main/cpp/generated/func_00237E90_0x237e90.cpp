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

// Function: func_00237E90
// Address: 0x237e90 - 0x237f98
void func_00237E90_0x237e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00237E90_0x237e90");
#endif

    switch (ctx->pc) {
        case 0x237eb8u: goto label_237eb8;
        case 0x237f20u: goto label_237f20;
        case 0x237f34u: goto label_237f34;
        case 0x237f48u: goto label_237f48;
        case 0x237f74u: goto label_237f74;
        case 0x237f80u: goto label_237f80;
        default: break;
    }

    ctx->pc = 0x237e90u;

    // 0x237e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x237e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x237e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237ea4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x237ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x237ea8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x237ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x237eac: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x237eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x237eb0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x237EB0u;
    SET_GPR_U32(ctx, 31, 0x237EB8u);
    ctx->pc = 0x237EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EB0u;
    // 0x237eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x237EB0u, 0x237EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EB8u;
label_237eb8:
    // 0x237eb8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x237eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x237ebc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x237ec0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x237ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x237ec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237ec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x237ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x237ecc: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x237eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x237ed0: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x237ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x237ed4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x237ED4u;
    {
        const bool branch_taken_0x237ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED4u;
        // 0x237ed8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed4) {
            ctx->pc = 0x237EF0u;
            goto label_237ef0;
        }
    }
    ctx->pc = 0x237EDCu;
    // 0x237edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237ee0: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x237EE0u;
    {
        const bool branch_taken_0x237ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x237ee0) {
            ctx->pc = 0x237F40u;
            goto label_237f40;
        }
    }
    ctx->pc = 0x237EE8u;
    // 0x237ee8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x237EE8u;
    {
        const bool branch_taken_0x237ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EE8u;
        // 0x237eec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ee8) {
            ctx->pc = 0x237F84u;
            goto label_237f84;
        }
    }
    ctx->pc = 0x237EF0u;
label_237ef0:
    // 0x237ef0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x237ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x237ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ef8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x237efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237f04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f08: 0x8c451550  lw          $a1, 0x1550($v0)
    ctx->pc = 0x237f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5456)));
    // 0x237f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f10: 0x8c461554  lw          $a2, 0x1554($v0)
    ctx->pc = 0x237f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5460)));
    // 0x237f14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x237f18: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x237F18u;
    SET_GPR_U32(ctx, 31, 0x237F20u);
    ctx->pc = 0x237F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F18u;
    // 0x237f1c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237F18u, 0x237F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F20u;
label_237f20:
    // 0x237f20: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x237f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x237f24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237F24u;
    {
        const bool branch_taken_0x237f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f24) {
            ctx->pc = 0x237F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F24u;
            // 0x237f28: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F38u;
            goto label_237f38;
        }
    }
    ctx->pc = 0x237F2Cu;
    // 0x237f2c: 0xc074160  jal         func_1D0580
    ctx->pc = 0x237F2Cu;
    SET_GPR_U32(ctx, 31, 0x237F34u);
    ctx->pc = 0x1D0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0580u, 0x237F2Cu, 0x237F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F34u;
label_237f34:
    // 0x237f34: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x237f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237f38:
    // 0x237f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237f3c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x237f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_237f40:
    // 0x237f40: 0xc055f06  jal         func_157C18
    ctx->pc = 0x237F40u;
    SET_GPR_U32(ctx, 31, 0x237F48u);
    ctx->pc = 0x237F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F40u;
    // 0x237f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237F40u, 0x237F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F48u;
label_237f48:
    // 0x237f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237F48u;
    {
        const bool branch_taken_0x237f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F48u;
        // 0x237f4c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f48) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237F50u;
    // 0x237f50: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x237f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x237f54: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x237f58: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x237f5c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x237f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_237f60:
    // 0x237f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x237f64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x237f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x237F6Cu;
    SET_GPR_U32(ctx, 31, 0x237F74u);
    ctx->pc = 0x237F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F6Cu;
    // 0x237f70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237F6Cu, 0x237F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F74u;
label_237f74:
    // 0x237f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x237F78u;
    SET_GPR_U32(ctx, 31, 0x237F80u);
    ctx->pc = 0x237F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F78u;
    // 0x237f7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237F78u, 0x237F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F80u;
label_237f80:
    // 0x237f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x237f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237f84:
    // 0x237f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237f88: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x237f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x237F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F8Cu;
        // 0x237f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237F94u;
    // 0x237f94: 0x0  nop
    ctx->pc = 0x237f94u;
    // NOP
    ctx->pc = 0x237f98u;
}
