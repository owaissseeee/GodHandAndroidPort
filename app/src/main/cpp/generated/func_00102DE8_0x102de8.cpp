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

// Function: func_00102DE8
// Address: 0x102de8 - 0x102ee0
void func_00102DE8_0x102de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102DE8_0x102de8");
#endif

    switch (ctx->pc) {
        case 0x102e7cu: goto label_102e7c;
        case 0x102e90u: goto label_102e90;
        case 0x102ebcu: goto label_102ebc;
        case 0x102ec8u: goto label_102ec8;
        default: break;
    }

    ctx->pc = 0x102de8u;

    // 0x102de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x102decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x102df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102df8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x102df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x102dfc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102e00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102E00u;
    {
        const bool branch_taken_0x102e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E00u;
        // 0x102e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e00) {
            ctx->pc = 0x102E18u;
            goto label_102e18;
        }
    }
    ctx->pc = 0x102E08u;
    // 0x102e08: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x102E08u;
    {
        const bool branch_taken_0x102e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102e08) {
            ctx->pc = 0x102E88u;
            goto label_102e88;
        }
    }
    ctx->pc = 0x102E10u;
    // 0x102e10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x102E10u;
    {
        const bool branch_taken_0x102e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E10u;
        // 0x102e14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e10) {
            ctx->pc = 0x102ECCu;
            goto label_102ecc;
        }
    }
    ctx->pc = 0x102E18u;
label_102e18:
    // 0x102e18: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x102e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x102e1c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102E1Cu;
    {
        const bool branch_taken_0x102e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E1Cu;
        // 0x102e20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e1c) {
            ctx->pc = 0x102E44u;
            goto label_102e44;
        }
    }
    ctx->pc = 0x102E24u;
    // 0x102e24: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x102E24u;
    {
        const bool branch_taken_0x102e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102e24) {
            ctx->pc = 0x102E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E24u;
            // 0x102e28: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E38u;
            goto label_102e38;
        }
    }
    ctx->pc = 0x102E2Cu;
    // 0x102e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x102e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102e30: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102E30u;
    {
        const bool branch_taken_0x102e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e30) {
            ctx->pc = 0x102E54u;
            goto label_102e54;
        }
    }
    ctx->pc = 0x102E38u;
label_102e38:
    // 0x102e38: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x102e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x102e3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102E3Cu;
    {
        const bool branch_taken_0x102e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E3Cu;
        // 0x102e40: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e3c) {
            ctx->pc = 0x102E5Cu;
            goto label_102e5c;
        }
    }
    ctx->pc = 0x102E44u;
label_102e44:
    // 0x102e44: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x102e48: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x102e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102E4Cu;
    {
        const bool branch_taken_0x102e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E4Cu;
        // 0x102e50: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e4c) {
            ctx->pc = 0x102E5Cu;
            goto label_102e5c;
        }
    }
    ctx->pc = 0x102E54u;
label_102e54:
    // 0x102e54: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x102e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x102e58: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_102e5c:
    // 0x102e5c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x102e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102e60: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102e64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e6c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x102e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x102e70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x102E74u;
    SET_GPR_U32(ctx, 31, 0x102E7Cu);
    ctx->pc = 0x102E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E74u;
    // 0x102e78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x102E74u, 0x102E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E7Cu;
label_102e7c:
    // 0x102e7c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x102e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x102e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102e84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x102e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_102e88:
    // 0x102e88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x102E88u;
    SET_GPR_U32(ctx, 31, 0x102E90u);
    ctx->pc = 0x102E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E88u;
    // 0x102e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x102E88u, 0x102E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E90u;
label_102e90:
    // 0x102e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102E90u;
    {
        const bool branch_taken_0x102e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102e90) {
            ctx->pc = 0x102EA8u;
            goto label_102ea8;
        }
    }
    ctx->pc = 0x102E98u;
    // 0x102e98: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x102e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x102e9c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x102e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x102ea0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x102ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x102ea4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x102ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_102ea8:
    // 0x102ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x102eac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x102eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102eb4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x102EB4u;
    SET_GPR_U32(ctx, 31, 0x102EBCu);
    ctx->pc = 0x102EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EB4u;
    // 0x102eb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x102EB4u, 0x102EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EBCu;
label_102ebc:
    // 0x102ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ec0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x102EC0u;
    SET_GPR_U32(ctx, 31, 0x102EC8u);
    ctx->pc = 0x102EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EC0u;
    // 0x102ec4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x102EC0u, 0x102EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EC8u;
label_102ec8:
    // 0x102ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x102ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102ecc:
    // 0x102ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ed0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x102ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x102ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ED4u;
        // 0x102ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102EDCu;
    // 0x102edc: 0x0  nop
    ctx->pc = 0x102edcu;
    // NOP
    ctx->pc = 0x102ee0u;
}
