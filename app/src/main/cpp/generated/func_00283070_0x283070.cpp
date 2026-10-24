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

// Function: func_00283070
// Address: 0x283070 - 0x283170
void func_00283070_0x283070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283070_0x283070");
#endif

    switch (ctx->pc) {
        case 0x2830f8u: goto label_2830f8;
        default: break;
    }

    ctx->pc = 0x283070u;

    // 0x283070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x283074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x283078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28307c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28307cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283080: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x283084: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x283084u;
    {
        const bool branch_taken_0x283084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283084u;
        // 0x283088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283084) {
            ctx->pc = 0x283160u;
            goto label_283160;
        }
    }
    ctx->pc = 0x28308Cu;
    // 0x28308c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x28308cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x283090: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x283090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x283094: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283094u;
    {
        const bool branch_taken_0x283094 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x283098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283094u;
        // 0x283098: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283094) {
            ctx->pc = 0x2830A0u;
            goto label_2830a0;
        }
    }
    ctx->pc = 0x28309Cu;
    // 0x28309c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x28309cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2830a0:
    // 0x2830a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2830a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2830a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2830A4u;
    {
        const bool branch_taken_0x2830a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830A4u;
        // 0x2830a8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830a4) {
            ctx->pc = 0x2830BCu;
            goto label_2830bc;
        }
    }
    ctx->pc = 0x2830ACu;
    // 0x2830ac: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x2830acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2830b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2830b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2830b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2830B4u;
    {
        const bool branch_taken_0x2830b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830B4u;
        // 0x2830b8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830b4) {
            ctx->pc = 0x2830C0u;
            goto label_2830c0;
        }
    }
    ctx->pc = 0x2830BCu;
label_2830bc:
    // 0x2830bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2830bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2830c0:
    // 0x2830c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2830C0u;
    {
        const bool branch_taken_0x2830c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830C0u;
        // 0x2830c4: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830c0) {
            ctx->pc = 0x283160u;
            goto label_283160;
        }
    }
    ctx->pc = 0x2830C8u;
    // 0x2830c8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2830c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2830cc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2830CCu;
    {
        const bool branch_taken_0x2830cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2830D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830CCu;
        // 0x2830d0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830cc) {
            ctx->pc = 0x2830F0u;
            goto label_2830f0;
        }
    }
    ctx->pc = 0x2830D4u;
    // 0x2830d4: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x2830d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2830d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2830d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2830dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2830dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2830e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2830e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2830e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2830e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2830e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2830e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2830ec: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2830ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2830f0:
    // 0x2830f0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2830F0u;
    SET_GPR_U32(ctx, 31, 0x2830F8u);
    ctx->pc = 0x2830F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2830F0u;
    // 0x2830f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2830F0u, 0x2830F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830F8u;
label_2830f8:
    // 0x2830f8: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x2830fc: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2830fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x283100: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x283104: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283104u;
    {
        const bool branch_taken_0x283104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x283104) {
            ctx->pc = 0x283108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283104u;
            // 0x283108: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x28310Cu;
    // 0x28310c: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x28310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283110: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x283110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x283114: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x283114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283118: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x283118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28311c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283120: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x283120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x283124: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x283124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_283128:
    // 0x283128: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x283128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28312c: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x28312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x283130: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x283130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x283134: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x283134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x283138: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283138u;
    {
        const bool branch_taken_0x283138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283138) {
            ctx->pc = 0x28313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283138u;
            // 0x28313c: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283150u;
            goto label_283150;
        }
    }
    ctx->pc = 0x283140u;
    // 0x283140: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x283140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x283144: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x283144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x283148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283148u;
    {
        const bool branch_taken_0x283148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283148u;
        // 0x28314c: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283148) {
            ctx->pc = 0x283160u;
            goto label_283160;
        }
    }
    ctx->pc = 0x283150u;
label_283150:
    // 0x283150: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x283150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x283154: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x283154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x283158: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x283158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28315c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x28315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_283160:
    // 0x283160: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x283160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283168: 0x3e00008  jr          $ra
    ctx->pc = 0x283168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283168u;
        // 0x28316c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283170u;
}
