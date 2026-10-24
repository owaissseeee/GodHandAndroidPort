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

// Function: func_001F0BF8
// Address: 0x1f0bf8 - 0x1f0ce8
void func_001F0BF8_0x1f0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0BF8_0x1f0bf8");
#endif

    switch (ctx->pc) {
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0cccu: goto label_1f0ccc;
        default: break;
    }

    ctx->pc = 0x1f0bf8u;

    // 0x1f0bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0bfc: 0x3c014039  lui         $at, 0x4039
    ctx->pc = 0x1f0bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16441 << 16));
    // 0x1f0c00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f0c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f0c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0c08: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f0c0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c10: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1f0c10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f0c14: 0x240503ec  addiu       $a1, $zero, 0x3EC
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x1f0c18: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f0c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f0c1c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1f0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0c20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0c28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f0c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c30: 0x3c0140ac  lui         $at, 0x40AC
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16556 << 16));
    // 0x1f0c34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f0c34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0c44: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0c48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f0c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f0c4c: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0C54u);
    ctx->pc = 0x1F0C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C4Cu;
    // 0x1f0c50: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0C4Cu, 0x1F0C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C54u;
label_1f0c54:
    // 0x1f0c54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f0c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f0c58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c60: 0x3c01c091  lui         $at, 0xC091
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49297 << 16));
    // 0x1f0c64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f0c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f0c68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c70: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f0c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0c78: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f0c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f0c7c: 0x240503ec  addiu       $a1, $zero, 0x3EC
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x1f0c80: 0xae020c64  sw          $v0, 0xC64($s0)
    ctx->pc = 0x1f0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 2));
    // 0x1f0c84: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1f0c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f0c88: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0C88u;
    SET_GPR_U32(ctx, 31, 0x1F0C90u);
    ctx->pc = 0x1F0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C88u;
    // 0x1f0c8c: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0C88u, 0x1F0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C90u;
label_1f0c90:
    // 0x1f0c90: 0x3c01c0ac  lui         $at, 0xC0AC
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49324 << 16));
    // 0x1f0c94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f0c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0ca0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f0ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f0ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cac: 0xae020c68  sw          $v0, 0xC68($s0)
    ctx->pc = 0x1f0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 2));
    // 0x1f0cb0: 0x240503ec  addiu       $a1, $zero, 0x3EC
    ctx->pc = 0x1f0cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x1f0cb4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1f0cb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f0cb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f0cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cbc: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1f0cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f0cc0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f0cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0cc4: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0CC4u;
    SET_GPR_U32(ctx, 31, 0x1F0CCCu);
    ctx->pc = 0x1F0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CC4u;
    // 0x1f0cc8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0CC4u, 0x1F0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CCCu;
label_1f0ccc:
    // 0x1f0ccc: 0xae020c6c  sw          $v0, 0xC6C($s0)
    ctx->pc = 0x1f0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 2));
    // 0x1f0cd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cd8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1f0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0cdc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f0cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CE0u;
        // 0x1f0ce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0CE8u;
}
