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

// Function: func_0027E950
// Address: 0x27e950 - 0x27ea50
void func_0027E950_0x27e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E950_0x27e950");
#endif

    switch (ctx->pc) {
        case 0x27e9d8u: goto label_27e9d8;
        default: break;
    }

    ctx->pc = 0x27e950u;

    // 0x27e950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27e958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27e95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e960: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27e964: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27E964u;
    {
        const bool branch_taken_0x27e964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E964u;
        // 0x27e968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e964) {
            ctx->pc = 0x27EA40u;
            goto label_27ea40;
        }
    }
    ctx->pc = 0x27E96Cu;
    // 0x27e96c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x27e96cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x27e970: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x27e974: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E974u;
    {
        const bool branch_taken_0x27e974 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E974u;
        // 0x27e978: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e974) {
            ctx->pc = 0x27E980u;
            goto label_27e980;
        }
    }
    ctx->pc = 0x27E97Cu;
    // 0x27e97c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x27e97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27e980:
    // 0x27e980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E984u;
    {
        const bool branch_taken_0x27e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E984u;
        // 0x27e988: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e984) {
            ctx->pc = 0x27E99Cu;
            goto label_27e99c;
        }
    }
    ctx->pc = 0x27E98Cu;
    // 0x27e98c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x27e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x27e990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E994u;
    {
        const bool branch_taken_0x27e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E994u;
        // 0x27e998: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e994) {
            ctx->pc = 0x27E9A0u;
            goto label_27e9a0;
        }
    }
    ctx->pc = 0x27E99Cu;
label_27e99c:
    // 0x27e99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e9a0:
    // 0x27e9a0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27E9A0u;
    {
        const bool branch_taken_0x27e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9A0u;
        // 0x27e9a4: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9a0) {
            ctx->pc = 0x27EA40u;
            goto label_27ea40;
        }
    }
    ctx->pc = 0x27E9A8u;
    // 0x27e9a8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27e9ac: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E9ACu;
    {
        const bool branch_taken_0x27e9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E9ACu;
        // 0x27e9b0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9ac) {
            ctx->pc = 0x27E9D0u;
            goto label_27e9d0;
        }
    }
    ctx->pc = 0x27E9B4u;
    // 0x27e9b4: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x27e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27e9bc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e9c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x27e9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x27e9c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x27e9cc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27e9d0:
    // 0x27e9d0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27E9D0u;
    SET_GPR_U32(ctx, 31, 0x27E9D8u);
    ctx->pc = 0x27E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E9D0u;
    // 0x27e9d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27E9D0u, 0x27E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E9D8u;
label_27e9d8:
    // 0x27e9d8: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x27e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27e9dc: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x27e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x27e9e0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x27e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x27e9e4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E9E4u;
    {
        const bool branch_taken_0x27e9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e9e4) {
            ctx->pc = 0x27E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E9E4u;
            // 0x27e9e8: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EA08u;
            goto label_27ea08;
        }
    }
    ctx->pc = 0x27E9ECu;
    // 0x27e9ec: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x27e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e9f0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x27e9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x27e9f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e9f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e9fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ea00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27ea04: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_27ea08:
    // 0x27ea08: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x27ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ea0c: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x27ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x27ea10: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x27ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x27ea14: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x27ea18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27EA18u;
    {
        const bool branch_taken_0x27ea18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ea18) {
            ctx->pc = 0x27EA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EA18u;
            // 0x27ea1c: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EA30u;
            goto label_27ea30;
        }
    }
    ctx->pc = 0x27EA20u;
    // 0x27ea20: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x27ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27ea24: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x27ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x27ea28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27EA28u;
    {
        const bool branch_taken_0x27ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA28u;
        // 0x27ea2c: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea28) {
            ctx->pc = 0x27EA40u;
            goto label_27ea40;
        }
    }
    ctx->pc = 0x27EA30u;
label_27ea30:
    // 0x27ea30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27ea34: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x27ea38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27ea3c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27ea40:
    // 0x27ea40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27ea40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ea44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27ea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x27EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA48u;
        // 0x27ea4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EA50u;
}
