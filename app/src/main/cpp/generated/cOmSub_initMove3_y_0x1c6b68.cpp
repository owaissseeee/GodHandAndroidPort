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

// Function: cOmSub_initMove3_y
// Address: 0x1c6b68 - 0x1c6c30
void cOmSub_initMove3_y_0x1c6b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_initMove3_y_0x1c6b68");
#endif

    switch (ctx->pc) {
        case 0x1c6c24u: goto label_1c6c24;
        default: break;
    }

    ctx->pc = 0x1c6b68u;

    // 0x1c6b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b6c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C6B6Cu;
    {
        const bool branch_taken_0x1c6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B6Cu;
        // 0x1c6b70: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b6c) {
            ctx->pc = 0x1C6C1Cu;
            goto label_1c6c1c;
        }
    }
    ctx->pc = 0x1C6B74u;
    // 0x1c6b74: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6B74u;
    {
        const bool branch_taken_0x1c6b74 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B74u;
        // 0x1c6b78: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b74) {
            ctx->pc = 0x1C6BA8u;
            goto label_1c6ba8;
        }
    }
    ctx->pc = 0x1C6B7Cu;
    // 0x1c6b7c: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x1c6b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x1c6b80: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c6b84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6B84u;
    {
        const bool branch_taken_0x1c6b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B84u;
        // 0x1c6b88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b84) {
            ctx->pc = 0x1C6BA0u;
            goto label_1c6ba0;
        }
    }
    ctx->pc = 0x1C6B8Cu;
    // 0x1c6b8c: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x1c6b90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c6b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6B98u;
    {
        const bool branch_taken_0x1c6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B98u;
        // 0x1c6b9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b98) {
            ctx->pc = 0x1C6BA4u;
            goto label_1c6ba4;
        }
    }
    ctx->pc = 0x1C6BA0u;
label_1c6ba0:
    // 0x1c6ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ba4:
    // 0x1c6ba4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c6ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ba8:
    // 0x1c6ba8: 0x1100001c  beqz        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6BA8u;
    {
        const bool branch_taken_0x1c6ba8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ba8) {
            ctx->pc = 0x1C6C1Cu;
            goto label_1c6c1c;
        }
    }
    ctx->pc = 0x1C6BB0u;
    // 0x1c6bb0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1c6bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1c6bb4: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6BB4u;
    {
        const bool branch_taken_0x1c6bb4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB4u;
        // 0x1c6bb8: 0xac880008  sw          $t0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bb4) {
            ctx->pc = 0x1C6BC4u;
            goto label_1c6bc4;
        }
    }
    ctx->pc = 0x1C6BBCu;
    // 0x1c6bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6BBCu;
    {
        const bool branch_taken_0x1c6bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BBCu;
        // 0x1c6bc0: 0x8d0200d0  lw          $v0, 0xD0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bbc) {
            ctx->pc = 0x1C6BC8u;
            goto label_1c6bc8;
        }
    }
    ctx->pc = 0x1C6BC4u;
label_1c6bc4:
    // 0x1c6bc4: 0x8d0200f0  lw          $v0, 0xF0($t0)
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 240)));
label_1c6bc8:
    // 0x1c6bc8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1c6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1c6bcc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1c6bd0: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1c6bd4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6BD4u;
    {
        const bool branch_taken_0x1c6bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6bd4) {
            ctx->pc = 0x1C6BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6BD4u;
            // 0x1c6bd8: 0x24830080  addiu       $v1, $a0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BF8u;
            goto label_1c6bf8;
        }
    }
    ctx->pc = 0x1C6BDCu;
    // 0x1c6bdc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6be0: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x1c6be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x1c6be4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6be8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c6bec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6bf0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c6bf4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1c6bf8:
    // 0x1c6bf8: 0x25020100  addiu       $v0, $t0, 0x100
    ctx->pc = 0x1c6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x1c6bfc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6BFCu;
    {
        const bool branch_taken_0x1c6bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6bfc) {
            ctx->pc = 0x1C6C1Cu;
            goto label_1c6c1c;
        }
    }
    ctx->pc = 0x1C6C04u;
    // 0x1c6c04: 0xc5000100  lwc1        $f0, 0x100($t0)
    ctx->pc = 0x1c6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c08: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1c6c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1c6c0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6c10: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c6c14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c18: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6c1c:
    // 0x1c6c1c: 0xc071b0c  jal         func_1C6C30
    ctx->pc = 0x1C6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C24u);
    ctx->pc = 0x1C6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C1Cu;
    // 0x1c6c20: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C30u, 0x1C6C1Cu, 0x1C6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C24u;
label_1c6c24:
    // 0x1c6c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C28u;
        // 0x1c6c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C30u;
}
