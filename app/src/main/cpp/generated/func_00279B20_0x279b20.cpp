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

// Function: func_00279B20
// Address: 0x279b20 - 0x279c20
void func_00279B20_0x279b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279B20_0x279b20");
#endif

    switch (ctx->pc) {
        case 0x279ba8u: goto label_279ba8;
        default: break;
    }

    ctx->pc = 0x279b20u;

    // 0x279b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279b24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x279b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x279b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b30: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x279b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x279b34: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x279B34u;
    {
        const bool branch_taken_0x279b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B34u;
        // 0x279b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b34) {
            ctx->pc = 0x279C10u;
            goto label_279c10;
        }
    }
    ctx->pc = 0x279B3Cu;
    // 0x279b3c: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x279b3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x279b40: 0x8e041584  lw          $a0, 0x1584($s0)
    ctx->pc = 0x279b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x279b44: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x279B44u;
    {
        const bool branch_taken_0x279b44 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x279B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B44u;
        // 0x279b48: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b44) {
            ctx->pc = 0x279B50u;
            goto label_279b50;
        }
    }
    ctx->pc = 0x279B4Cu;
    // 0x279b4c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x279b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_279b50:
    // 0x279b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x279b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x279b54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279B54u;
    {
        const bool branch_taken_0x279b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B54u;
        // 0x279b58: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b54) {
            ctx->pc = 0x279B6Cu;
            goto label_279b6c;
        }
    }
    ctx->pc = 0x279B5Cu;
    // 0x279b5c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x279b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x279b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279b64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279B64u;
    {
        const bool branch_taken_0x279b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B64u;
        // 0x279b68: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b64) {
            ctx->pc = 0x279B70u;
            goto label_279b70;
        }
    }
    ctx->pc = 0x279B6Cu;
label_279b6c:
    // 0x279b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279b70:
    // 0x279b70: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x279B70u;
    {
        const bool branch_taken_0x279b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B70u;
        // 0x279b74: 0x26031590  addiu       $v1, $s0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b70) {
            ctx->pc = 0x279C10u;
            goto label_279c10;
        }
    }
    ctx->pc = 0x279B78u;
    // 0x279b78: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x279b7c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x279B7Cu;
    {
        const bool branch_taken_0x279b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x279B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B7Cu;
        // 0x279b80: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b7c) {
            ctx->pc = 0x279BA0u;
            goto label_279ba0;
        }
    }
    ctx->pc = 0x279B84u;
    // 0x279b84: 0xc6001590  lwc1        $f0, 0x1590($s0)
    ctx->pc = 0x279b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279b88: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x279b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x279b8c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x279b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279b90: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x279b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x279b94: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x279b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279b98: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x279b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x279b9c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x279b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_279ba0:
    // 0x279ba0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x279BA0u;
    SET_GPR_U32(ctx, 31, 0x279BA8u);
    ctx->pc = 0x279BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BA0u;
    // 0x279ba4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x279BA0u, 0x279BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BA8u;
label_279ba8:
    // 0x279ba8: 0x8e041580  lw          $a0, 0x1580($s0)
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x279bac: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x279bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x279bb0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x279bb4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279BB4u;
    {
        const bool branch_taken_0x279bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279bb4) {
            ctx->pc = 0x279BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279BB4u;
            // 0x279bb8: 0x8e031580  lw          $v1, 0x1580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279BD8u;
            goto label_279bd8;
        }
    }
    ctx->pc = 0x279BBCu;
    // 0x279bbc: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x279bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279bc0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x279bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x279bc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x279bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279bc8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x279bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279bcc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279bd0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x279bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x279bd4: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
label_279bd8:
    // 0x279bd8: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x279bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279bdc: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x279bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x279be0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x279be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x279be4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x279be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x279be8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x279BE8u;
    {
        const bool branch_taken_0x279be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279be8) {
            ctx->pc = 0x279BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279BE8u;
            // 0x279bec: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C00u;
            goto label_279c00;
        }
    }
    ctx->pc = 0x279BF0u;
    // 0x279bf0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x279bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x279bf4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x279bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x279bf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x279BF8u;
    {
        const bool branch_taken_0x279bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BF8u;
        // 0x279bfc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bf8) {
            ctx->pc = 0x279C10u;
            goto label_279c10;
        }
    }
    ctx->pc = 0x279C00u;
label_279c00:
    // 0x279c00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x279c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x279c04: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x279c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x279c08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x279c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x279c0c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x279c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_279c10:
    // 0x279c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x279c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279c18: 0x3e00008  jr          $ra
    ctx->pc = 0x279C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C18u;
        // 0x279c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279C20u;
}
