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

// Function: cOmThrow_SetThrow
// Address: 0x1c8be0 - 0x1c8cb8
void cOmThrow_SetThrow_0x1c8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmThrow_SetThrow_0x1c8be0");
#endif

    switch (ctx->pc) {
        case 0x1c8c80u: goto label_1c8c80;
        default: break;
    }

    ctx->pc = 0x1c8be0u;

    // 0x1c8be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8be8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c8bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c8bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8bf8: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1c8bfc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1c8bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8c00: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c8c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8c04: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c8c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8c08: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8C08u;
    {
        const bool branch_taken_0x1c8c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C08u;
        // 0x1c8c0c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c08) {
            ctx->pc = 0x1C8C28u;
            goto label_1c8c28;
        }
    }
    ctx->pc = 0x1C8C10u;
    // 0x1c8c10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c8c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c14: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1c8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1c8c18: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c8c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8c1c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c8c20: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c8c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c24: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c8c28:
    // 0x1c8c28: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c8c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c8c2c: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x1c8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x1c8c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8C30u;
    {
        const bool branch_taken_0x1c8c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C30u;
        // 0x1c8c34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c30) {
            ctx->pc = 0x1C8C44u;
            goto label_1c8c44;
        }
    }
    ctx->pc = 0x1C8C38u;
    // 0x1c8c38: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c8c3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8C3Cu;
    {
        const bool branch_taken_0x1c8c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C3Cu;
        // 0x1c8c40: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c3c) {
            ctx->pc = 0x1C8C48u;
            goto label_1c8c48;
        }
    }
    ctx->pc = 0x1C8C44u;
label_1c8c44:
    // 0x1c8c44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c48:
    // 0x1c8c48: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C8C48u;
    {
        const bool branch_taken_0x1c8c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C48u;
        // 0x1c8c4c: 0x26020630  addiu       $v0, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c48) {
            ctx->pc = 0x1C8CA0u;
            goto label_1c8ca0;
        }
    }
    ctx->pc = 0x1C8C50u;
    // 0x1c8c50: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1c8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c8c54: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C54u;
    {
        const bool branch_taken_0x1c8c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8c54) {
            ctx->pc = 0x1C8C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8C54u;
            // 0x1c8c58: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8C78u;
            goto label_1c8c78;
        }
    }
    ctx->pc = 0x1C8C5Cu;
    // 0x1c8c5c: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1c8c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c8c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c8c64: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c8c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8c68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c8c6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c8c74: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1c8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_1c8c78:
    // 0x1c8c78: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C8C78u;
    SET_GPR_U32(ctx, 31, 0x1C8C80u);
    ctx->pc = 0x1C8C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C78u;
    // 0x1c8c7c: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C8C78u, 0x1C8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C80u;
label_1c8c80:
    // 0x1c8c80: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1c8c84: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1c8c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1c8c88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8c8c: 0x0  nop
    ctx->pc = 0x1c8c8cu;
    // NOP
    // 0x1c8c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8c98: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x1c8c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1c8c9c: 0xa2000640  sb          $zero, 0x640($s0)
    ctx->pc = 0x1c8c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 0));
label_1c8ca0:
    // 0x1c8ca0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c8ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8ca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c8ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CACu;
        // 0x1c8cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8CB4u;
    // 0x1c8cb4: 0x0  nop
    ctx->pc = 0x1c8cb4u;
    // NOP
    ctx->pc = 0x1c8cb8u;
}
