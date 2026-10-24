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

// Function: Pos_followGround
// Address: 0x2e2c50 - 0x2e2d40
void Pos_followGround_0x2e2c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pos_followGround_0x2e2c50");
#endif

    switch (ctx->pc) {
        case 0x2e2c7cu: goto label_2e2c7c;
        case 0x2e2cfcu: goto label_2e2cfc;
        case 0x2e2d2cu: goto label_2e2d2c;
        default: break;
    }

    ctx->pc = 0x2e2c50u;

    // 0x2e2c50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e2c54: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e2c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e2c58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e2c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c60: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e2c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e2c68: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E2C68u;
    {
        const bool branch_taken_0x2e2c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C68u;
        // 0x2e2c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c68) {
            ctx->pc = 0x2E2D24u;
            goto label_2e2d24;
        }
    }
    ctx->pc = 0x2E2C70u;
    // 0x2e2c70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e2c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2c74: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E2C74u;
    SET_GPR_U32(ctx, 31, 0x2E2C7Cu);
    ctx->pc = 0x2E2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C74u;
    // 0x2e2c78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E2C74u, 0x2E2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C7Cu;
label_2e2c7c:
    // 0x2e2c7c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2c80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e2c80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2c84: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e2c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2c88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e2c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2c8c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2e2c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2c90: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e2c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2c94: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2e2c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2c98: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2ca0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e2ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ca4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2cac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2cb0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2cb4: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x2e2cb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2cbc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e2cc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2cc4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e2cc8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e2cc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e2ccc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e2cd0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e2cd4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e2cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e2cd8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e2cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e2cdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2e2cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2ce0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e2ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e2ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ce8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e2cec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e2cecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cf0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e2cf4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E2CF4u;
    SET_GPR_U32(ctx, 31, 0x2E2CFCu);
    ctx->pc = 0x2E2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2CF4u;
    // 0x2e2cf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E2CF4u, 0x2E2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CFCu;
label_2e2cfc:
    // 0x2e2cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2CFCu;
    {
        const bool branch_taken_0x2e2cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CFCu;
        // 0x2e2d00: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cfc) {
            ctx->pc = 0x2E2D14u;
            goto label_2e2d14;
        }
    }
    ctx->pc = 0x2E2D04u;
    // 0x2e2d04: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2d08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e2d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e2d0c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2e2d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2e2d10: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
label_2e2d14:
    // 0x2e2d14: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2d18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e2d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e2d1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2D1Cu;
    {
        const bool branch_taken_0x2e2d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D1Cu;
        // 0x2e2d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d1c) {
            ctx->pc = 0x2E2D2Cu;
            goto label_2e2d2c;
        }
    }
    ctx->pc = 0x2E2D24u;
label_2e2d24:
    // 0x2e2d24: 0xc0b8a3c  jal         func_2E28F0
    ctx->pc = 0x2E2D24u;
    SET_GPR_U32(ctx, 31, 0x2E2D2Cu);
    ctx->pc = 0x2E2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D24u;
    // 0x2e2d28: 0xc48c02d0  lwc1        $f12, 0x2D0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E28F0u, 0x2E2D24u, 0x2E2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D2Cu;
label_2e2d2c:
    // 0x2e2d2c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e2d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2d30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e2d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D34u;
        // 0x2e2d38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D3Cu;
    // 0x2e2d3c: 0x0  nop
    ctx->pc = 0x2e2d3cu;
    // NOP
    ctx->pc = 0x2e2d40u;
}
