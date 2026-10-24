#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: rewriteContinuePoint__5cR409
// Address: 0x7992d8 - 0x799398
void rewriteContinuePoint__5cR409_0x7992d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rewriteContinuePoint__5cR409_0x7992d8");
#endif

    switch (ctx->pc) {
        case 0x799368u: goto label_799368;
        case 0x799378u: goto label_799378;
        case 0x799388u: goto label_799388;
        default: break;
    }

    ctx->pc = 0x7992d8u;

    // 0x7992d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7992dc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7992e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7992e4: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x7992e8: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7992f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7992f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7992f8: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x7992fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799300: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x3c01c112  lui         $at, 0xC112
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49426 << 16));
    // 0x799308: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79930c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79930cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799318: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
    // 0x79931c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79931cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799320: 0x3c01c148  lui         $at, 0xC148
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49480 << 16));
    // 0x799324: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79932c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799334: 0x3c01bfce  lui         $at, 0xBFCE
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49102 << 16));
    // 0x799338: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x79933c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79933cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799340: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799344: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799348: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x799348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79934c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x79934cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799350: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799354: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x799354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x799358: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79935c: 0x8d04264c  lw          $a0, 0x264C($t0)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799360: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0xe464000c  swc1        $f4, 0xC($v1) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79936c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799370: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79937c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799380: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79938c: 0x3e00008  jr          $ra
    ctx->pc = 0x79938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799394u;
    // 0x799394: 0x0  nop
    ctx->pc = 0x799394u;
    // NOP
    ctx->pc = 0x799398u;
}
} // namespace gh_r409
