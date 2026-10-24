#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: R503PreInit__Fv
// Address: 0x799220 - 0x7992c8
void R503PreInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503PreInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799230u: goto label_799230;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992bcu: goto label_7992bc;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799224: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x799224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x799228: 0xc1e6704  jal         func_799C10
    ctx->pc = 0x799228u;
    SET_GPR_U32(ctx, 31, 0x799230u);
    ctx->pc = 0x79922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799228u;
    // 0x79922c: 0x24040501  addiu       $a0, $zero, 0x501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C10u, 0x799228u, 0x799230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799230u;
label_799230:
    // 0x799230: 0x3c01c18d  lui         $at, 0xC18D
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49549 << 16));
    // 0x799234: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79923c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799240: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799248: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79924c: 0x3c01c2b6  lui         $at, 0xC2B6
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49846 << 16));
    // 0x799250: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799258: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79925c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x79925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x799260: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x799264: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x799264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x799268: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79926c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x79926cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x799270: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x799270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x799274: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x799278: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x79927c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799280: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x799280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x799284: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x799284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x799288: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x799288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79928c: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x79928cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x799290: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD890u));
    // 0x799294: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0xc051e92  jal         func_147A48
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7992a8: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x7992ac: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x7992b0: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x7992b4: 0xc07ed36  jal         func_1FB4D8
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB4D8u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7992c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7992C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C8u;
}
} // namespace gh_r503
