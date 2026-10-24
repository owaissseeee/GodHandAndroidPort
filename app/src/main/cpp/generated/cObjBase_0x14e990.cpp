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

// Function: cObjBase
// Address: 0x14e990 - 0x14ea28
void cObjBase_0x14e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_0x14e990");
#endif

    switch (ctx->pc) {
        case 0x14e9a4u: goto label_14e9a4;
        case 0x14e9f8u: goto label_14e9f8;
        default: break;
    }

    ctx->pc = 0x14e990u;

    // 0x14e990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e99c: 0xc053966  jal         func_14E598
    ctx->pc = 0x14E99Cu;
    SET_GPR_U32(ctx, 31, 0x14E9A4u);
    ctx->pc = 0x14E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E99Cu;
    // 0x14e9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E598u, 0x14E99Cu, 0x14E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9A4u;
label_14e9a4:
    // 0x14e9a4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14e9a8: 0x2463ebe8  addiu       $v1, $v1, -0x1418
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962152));
    // 0x14e9ac: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x14e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x14e9b0: 0xfa000310  sqc2        $vf0, 0x310($s0)
    ctx->pc = 0x14e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9b4: 0xfa000320  sqc2        $vf0, 0x320($s0)
    ctx->pc = 0x14e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9b8: 0xfa000330  sqc2        $vf0, 0x330($s0)
    ctx->pc = 0x14e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9bc: 0xfa000360  sqc2        $vf0, 0x360($s0)
    ctx->pc = 0x14e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9c0: 0xfa000370  sqc2        $vf0, 0x370($s0)
    ctx->pc = 0x14e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9c4: 0xfa000380  sqc2        $vf0, 0x380($s0)
    ctx->pc = 0x14e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9c8: 0xfa000390  sqc2        $vf0, 0x390($s0)
    ctx->pc = 0x14e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 912), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9cc: 0xfa000460  sqc2        $vf0, 0x460($s0)
    ctx->pc = 0x14e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1120), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9d0: 0xfa000480  sqc2        $vf0, 0x480($s0)
    ctx->pc = 0x14e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1152), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9d4: 0xfa000490  sqc2        $vf0, 0x490($s0)
    ctx->pc = 0x14e9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1168), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9d8: 0xfa0004c0  sqc2        $vf0, 0x4C0($s0)
    ctx->pc = 0x14e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1216), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e9dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14e9e0: 0x260404a8  addiu       $a0, $s0, 0x4A8
    ctx->pc = 0x14e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    // 0x14e9e4: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x14e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x14e9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9ec: 0xae0204ac  sw          $v0, 0x4AC($s0)
    ctx->pc = 0x14e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 2));
    // 0x14e9f0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x14E9F0u;
    SET_GPR_U32(ctx, 31, 0x14E9F8u);
    ctx->pc = 0x14E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9F0u;
    // 0x14e9f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x14E9F0u, 0x14E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9F8u;
label_14e9f8:
    // 0x14e9f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e9fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea00: 0xae0304a0  sw          $v1, 0x4A0($s0)
    ctx->pc = 0x14ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 3));
    // 0x14ea04: 0xae0004b4  sw          $zero, 0x4B4($s0)
    ctx->pc = 0x14ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 0));
    // 0x14ea08: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x14ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x14ea0c: 0xae0004a4  sw          $zero, 0x4A4($s0)
    ctx->pc = 0x14ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1188), GPR_U32(ctx, 0));
    // 0x14ea10: 0xae00044c  sw          $zero, 0x44C($s0)
    ctx->pc = 0x14ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1100), GPR_U32(ctx, 0));
    // 0x14ea14: 0xa2000420  sb          $zero, 0x420($s0)
    ctx->pc = 0x14ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1056), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ea18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ea18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ea1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ea1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ea20: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA20u;
        // 0x14ea24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EA28u;
}
