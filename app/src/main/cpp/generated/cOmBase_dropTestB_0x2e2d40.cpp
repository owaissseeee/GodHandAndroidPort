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

// Function: cOmBase_dropTestB
// Address: 0x2e2d40 - 0x2e2e00
void cOmBase_dropTestB_0x2e2d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_dropTestB_0x2e2d40");
#endif

    switch (ctx->pc) {
        case 0x2e2d5cu: goto label_2e2d5c;
        case 0x2e2ddcu: goto label_2e2ddc;
        case 0x2e2decu: goto label_2e2dec;
        default: break;
    }

    ctx->pc = 0x2e2d40u;

    // 0x2e2d40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e2d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e2d44: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e2d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e2d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d4c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e2d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e2d50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2d54: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E2D54u;
    SET_GPR_U32(ctx, 31, 0x2E2D5Cu);
    ctx->pc = 0x2E2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D54u;
    // 0x2e2d58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E2D54u, 0x2E2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D5Cu;
label_2e2d5c:
    // 0x2e2d5c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e2d60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e2d60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d64: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e2d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2d68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e2d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d6c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2e2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2d70: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2d74: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2e2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2d78: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2d80: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2d84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2d88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2d8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2d90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2d94: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x2e2d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x2e2d98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2d9c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e2d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e2da0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2da4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e2da8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e2da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e2dac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e2db0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e2db4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e2db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e2db8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e2db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e2dbc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2e2dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2dc0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e2dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e2dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2dc8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e2dcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e2dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2dd0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e2dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e2dd4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E2DD4u;
    SET_GPR_U32(ctx, 31, 0x2E2DDCu);
    ctx->pc = 0x2E2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DD4u;
    // 0x2e2dd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E2DD4u, 0x2E2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DDCu;
label_2e2ddc:
    // 0x2e2ddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2DDCu;
    {
        const bool branch_taken_0x2e2ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DDCu;
        // 0x2e2de0: 0xc7ac0064  lwc1        $f12, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ddc) {
            ctx->pc = 0x2E2DECu;
            goto label_2e2dec;
        }
    }
    ctx->pc = 0x2E2DE4u;
    // 0x2e2de4: 0xc0b8a3c  jal         func_2E28F0
    ctx->pc = 0x2E2DE4u;
    SET_GPR_U32(ctx, 31, 0x2E2DECu);
    ctx->pc = 0x2E2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DE4u;
    // 0x2e2de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E28F0u, 0x2E2DE4u, 0x2E2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DECu;
label_2e2dec:
    // 0x2e2dec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e2decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2df0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e2df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DF4u;
        // 0x2e2df8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2DFCu;
    // 0x2e2dfc: 0x0  nop
    ctx->pc = 0x2e2dfcu;
    // NOP
    ctx->pc = 0x2e2e00u;
}
