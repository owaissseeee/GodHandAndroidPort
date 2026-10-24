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

// Function: cOmBase_dropTest
// Address: 0x2e6fd8 - 0x2e7098
void cOmBase_dropTest_0x2e6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_dropTest_0x2e6fd8");
#endif

    switch (ctx->pc) {
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7084u: goto label_2e7084;
        default: break;
    }

    ctx->pc = 0x2e6fd8u;

    // 0x2e6fd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e6fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e6fdc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e6fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e6fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fe4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e6fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e6fe8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6fec: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E6FECu;
    SET_GPR_U32(ctx, 31, 0x2E6FF4u);
    ctx->pc = 0x2E6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FECu;
    // 0x2e6ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E6FECu, 0x2E6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FF4u;
label_2e6ff4:
    // 0x2e6ff4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6ff8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e6ff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6ffc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7000: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e7000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7004: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2e7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7008: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e700c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2e700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e7010: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7018: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e7018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e701c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e7020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7024: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e7024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e7028: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e702c: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x2e702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x2e7030: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e7030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e7034: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7038: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e7038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e703c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e7040: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e7040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e7044: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e7048: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e7048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e704c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e704cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e7050: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e7050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e7054: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2e7054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7058: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e7058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e705c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e705cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7060: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e7060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e7064: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e7064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7068: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e7068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e706c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E706Cu;
    SET_GPR_U32(ctx, 31, 0x2E7074u);
    ctx->pc = 0x2E7070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E706Cu;
    // 0x2e7070: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E706Cu, 0x2E7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7074u;
label_2e7074:
    // 0x2e7074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7074u;
    {
        const bool branch_taken_0x2e7074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7074u;
        // 0x2e7078: 0xc7ac0064  lwc1        $f12, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7074) {
            ctx->pc = 0x2E7084u;
            goto label_2e7084;
        }
    }
    ctx->pc = 0x2E707Cu;
    // 0x2e707c: 0xc0b9ae2  jal         func_2E6B88
    ctx->pc = 0x2E707Cu;
    SET_GPR_U32(ctx, 31, 0x2E7084u);
    ctx->pc = 0x2E7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E707Cu;
    // 0x2e7080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6B88u, 0x2E707Cu, 0x2E7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7084u;
label_2e7084:
    // 0x2e7084: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e7084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7088: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e7088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e708c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E708Cu;
        // 0x2e7090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E708Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7094u;
    // 0x2e7094: 0x0  nop
    ctx->pc = 0x2e7094u;
    // NOP
    ctx->pc = 0x2e7098u;
}
