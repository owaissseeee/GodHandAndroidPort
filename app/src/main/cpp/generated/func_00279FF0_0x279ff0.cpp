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

// Function: func_00279FF0
// Address: 0x279ff0 - 0x27a0f0
void func_00279FF0_0x279ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279FF0_0x279ff0");
#endif

    switch (ctx->pc) {
        case 0x27a078u: goto label_27a078;
        default: break;
    }

    ctx->pc = 0x279ff0u;

    // 0x279ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279ff4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x279ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x279ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a000: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27a004: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27A004u;
    {
        const bool branch_taken_0x27a004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A004u;
        // 0x27a008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a004) {
            ctx->pc = 0x27A0E0u;
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x27A00Cu;
    // 0x27a00c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x27a00cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x27a010: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x27a014: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A014u;
    {
        const bool branch_taken_0x27a014 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A014u;
        // 0x27a018: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a014) {
            ctx->pc = 0x27A020u;
            goto label_27a020;
        }
    }
    ctx->pc = 0x27A01Cu;
    // 0x27a01c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x27a01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27a020:
    // 0x27a020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A024u;
    {
        const bool branch_taken_0x27a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A024u;
        // 0x27a028: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a024) {
            ctx->pc = 0x27A03Cu;
            goto label_27a03c;
        }
    }
    ctx->pc = 0x27A02Cu;
    // 0x27a02c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x27a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x27a030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A034u;
    {
        const bool branch_taken_0x27a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A034u;
        // 0x27a038: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a034) {
            ctx->pc = 0x27A040u;
            goto label_27a040;
        }
    }
    ctx->pc = 0x27A03Cu;
label_27a03c:
    // 0x27a03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a040:
    // 0x27a040: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27A040u;
    {
        const bool branch_taken_0x27a040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A040u;
        // 0x27a044: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a040) {
            ctx->pc = 0x27A0E0u;
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x27A048u;
    // 0x27a048: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27a04c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A04Cu;
    {
        const bool branch_taken_0x27a04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A04Cu;
        // 0x27a050: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a04c) {
            ctx->pc = 0x27A070u;
            goto label_27a070;
        }
    }
    ctx->pc = 0x27A054u;
    // 0x27a054: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x27a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a058: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27a05c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a060: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x27a060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x27a064: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a068: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x27a06c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x27a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27a070:
    // 0x27a070: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27A070u;
    SET_GPR_U32(ctx, 31, 0x27A078u);
    ctx->pc = 0x27A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A070u;
    // 0x27a074: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27A070u, 0x27A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A078u;
label_27a078:
    // 0x27a078: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x27a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27a07c: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x27a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x27a080: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x27a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x27a084: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A084u;
    {
        const bool branch_taken_0x27a084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a084) {
            ctx->pc = 0x27A088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A084u;
            // 0x27a088: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0A8u;
            goto label_27a0a8;
        }
    }
    ctx->pc = 0x27A08Cu;
    // 0x27a08c: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x27a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a090: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x27a090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x27a094: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a098: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27a098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27a09c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a0a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27a0a4: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_27a0a8:
    // 0x27a0a8: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x27a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a0ac: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x27a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x27a0b0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x27a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x27a0b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x27a0b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A0B8u;
    {
        const bool branch_taken_0x27a0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a0b8) {
            ctx->pc = 0x27A0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A0B8u;
            // 0x27a0bc: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0D0u;
            goto label_27a0d0;
        }
    }
    ctx->pc = 0x27A0C0u;
    // 0x27a0c0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x27a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27a0c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x27a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x27a0c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A0C8u;
    {
        const bool branch_taken_0x27a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0C8u;
        // 0x27a0cc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0c8) {
            ctx->pc = 0x27A0E0u;
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x27A0D0u;
label_27a0d0:
    // 0x27a0d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a0d4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x27a0d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27a0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a0dc: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27a0e0:
    // 0x27a0e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27a0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a0e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0E8u;
        // 0x27a0ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A0F0u;
}
