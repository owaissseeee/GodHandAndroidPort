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

// Function: pl00_DiscardThrowObj
// Address: 0x12b9f0 - 0x12bab8
void pl00_DiscardThrowObj_0x12b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_DiscardThrowObj_0x12b9f0");
#endif

    switch (ctx->pc) {
        case 0x12ba2cu: goto label_12ba2c;
        default: break;
    }

    ctx->pc = 0x12b9f0u;

    // 0x12b9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b9f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12b9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba00: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x12ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12ba04: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x12BA04u;
    {
        const bool branch_taken_0x12ba04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba04) {
            ctx->pc = 0x12BA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA04u;
            // 0x12ba08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BAACu;
            goto label_12baac;
        }
    }
    ctx->pc = 0x12BA0Cu;
    // 0x12ba0c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ba10: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x12ba14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ba14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12ba18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ba18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ba1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12ba20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12ba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12ba24: 0xc072352  jal         func_1C8D48
    ctx->pc = 0x12BA24u;
    SET_GPR_U32(ctx, 31, 0x12BA2Cu);
    ctx->pc = 0x12BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA24u;
    // 0x12ba28: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8D48u, 0x12BA24u, 0x12BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA2Cu;
label_12ba2c:
    // 0x12ba2c: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12ba30: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x12ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12ba34: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x12ba38: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BA38u;
    {
        const bool branch_taken_0x12ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ba38) {
            ctx->pc = 0x12BA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA38u;
            // 0x12ba3c: 0x8e0206a0  lw          $v0, 0x6A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BA5Cu;
            goto label_12ba5c;
        }
    }
    ctx->pc = 0x12BA40u;
    // 0x12ba40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12ba44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12ba48: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ba4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ba4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ba50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12ba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12ba58: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12ba5c:
    // 0x12ba5c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12ba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x12ba60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ba60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12ba64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ba64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ba68: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x12ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x12ba6c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x12ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12ba70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12ba74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12ba78: 0x8e0306a0  lw          $v1, 0x6A0($s0)
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12ba7c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x12ba80: 0x24640490  addiu       $a0, $v1, 0x490
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x12ba84: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BA84u;
    {
        const bool branch_taken_0x12ba84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ba84) {
            ctx->pc = 0x12BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA84u;
            // 0x12ba88: 0xae0006a0  sw          $zero, 0x6A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BAA8u;
            goto label_12baa8;
        }
    }
    ctx->pc = 0x12BA8Cu;
    // 0x12ba8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ba90: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x12ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
    // 0x12ba94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ba98: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x12ba98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12ba9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12baa0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x12baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12baa4: 0xae0006a0  sw          $zero, 0x6A0($s0)
    ctx->pc = 0x12baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
label_12baa8:
    // 0x12baa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12baa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12baac:
    // 0x12baac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAB0u;
        // 0x12bab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BAB8u;
}
