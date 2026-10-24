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

// Function: func_00280DB8
// Address: 0x280db8 - 0x280eb8
void func_00280DB8_0x280db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280DB8_0x280db8");
#endif

    switch (ctx->pc) {
        case 0x280e40u: goto label_280e40;
        default: break;
    }

    ctx->pc = 0x280db8u;

    // 0x280db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x280dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dc8: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x280dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x280dcc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x280DCCu;
    {
        const bool branch_taken_0x280dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DCCu;
        // 0x280dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dcc) {
            ctx->pc = 0x280EA8u;
            goto label_280ea8;
        }
    }
    ctx->pc = 0x280DD4u;
    // 0x280dd4: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x280dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x280dd8: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x280dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x280ddc: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280DDCu;
    {
        const bool branch_taken_0x280ddc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x280DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DDCu;
        // 0x280de0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ddc) {
            ctx->pc = 0x280DE8u;
            goto label_280de8;
        }
    }
    ctx->pc = 0x280DE4u;
    // 0x280de4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x280de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_280de8:
    // 0x280de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x280de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280dec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280DECu;
    {
        const bool branch_taken_0x280dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DECu;
        // 0x280df0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dec) {
            ctx->pc = 0x280E04u;
            goto label_280e04;
        }
    }
    ctx->pc = 0x280DF4u;
    // 0x280df4: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x280df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x280df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280DFCu;
    {
        const bool branch_taken_0x280dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DFCu;
        // 0x280e00: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dfc) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280E04u;
label_280e04:
    // 0x280e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280e08:
    // 0x280e08: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x280E08u;
    {
        const bool branch_taken_0x280e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E08u;
        // 0x280e0c: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e08) {
            ctx->pc = 0x280EA8u;
            goto label_280ea8;
        }
    }
    ctx->pc = 0x280E10u;
    // 0x280e10: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x280e14: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x280E14u;
    {
        const bool branch_taken_0x280e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E14u;
        // 0x280e18: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e14) {
            ctx->pc = 0x280E38u;
            goto label_280e38;
        }
    }
    ctx->pc = 0x280E1Cu;
    // 0x280e1c: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x280e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x280e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x280e24: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x280e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280e28: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x280e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x280e2c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x280e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e30: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x280e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x280e34: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x280e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_280e38:
    // 0x280e38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x280E38u;
    SET_GPR_U32(ctx, 31, 0x280E40u);
    ctx->pc = 0x280E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E38u;
    // 0x280e3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x280E38u, 0x280E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E40u;
label_280e40:
    // 0x280e40: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x280e44: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x280e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x280e48: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x280e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x280e4c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280E4Cu;
    {
        const bool branch_taken_0x280e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280e4c) {
            ctx->pc = 0x280E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280E4Cu;
            // 0x280e50: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280E70u;
            goto label_280e70;
        }
    }
    ctx->pc = 0x280E54u;
    // 0x280e54: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x280e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e58: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x280e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x280e5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x280e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280e60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x280e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x280e64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x280e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e68: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x280e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x280e6c: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x280e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_280e70:
    // 0x280e70: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x280e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e74: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x280e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x280e78: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x280e7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x280e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x280e80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280E80u;
    {
        const bool branch_taken_0x280e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e80) {
            ctx->pc = 0x280E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280E80u;
            // 0x280e84: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280E98u;
            goto label_280e98;
        }
    }
    ctx->pc = 0x280E88u;
    // 0x280e88: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x280e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x280e8c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x280e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x280e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280E90u;
    {
        const bool branch_taken_0x280e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E90u;
        // 0x280e94: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e90) {
            ctx->pc = 0x280EA8u;
            goto label_280ea8;
        }
    }
    ctx->pc = 0x280E98u;
label_280e98:
    // 0x280e98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x280e9c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x280e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x280ea0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x280ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x280ea4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x280ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_280ea8:
    // 0x280ea8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x280EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EB0u;
        // 0x280eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280EB8u;
}
