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

// Function: ActorMove_resetMotion
// Address: 0x2b2158 - 0x2b21f0
void ActorMove_resetMotion_0x2b2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorMove_resetMotion_0x2b2158");
#endif

    switch (ctx->pc) {
        case 0x2b218cu: goto label_2b218c;
        case 0x2b21c4u: goto label_2b21c4;
        default: break;
    }

    ctx->pc = 0x2b2158u;

    // 0x2b2158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b215c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b2160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b2164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b2168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b216c: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x2b216cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b2170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2174: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x2b2174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b2178: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2b2178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b217c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b2180: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b2180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b2184: 0xc0ac8b8  jal         func_2B22E0
    ctx->pc = 0x2B2184u;
    SET_GPR_U32(ctx, 31, 0x2B218Cu);
    ctx->pc = 0x2B2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2184u;
    // 0x2b2188: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E0u, 0x2B2184u, 0x2B218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B218Cu;
label_2b218c:
    // 0x2b218c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2190: 0xa211002c  sb          $s1, 0x2C($s0)
    ctx->pc = 0x2b2190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 17));
    // 0x2b2194: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b2194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b2198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b2198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b219c: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2b219cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b21a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b21a4: 0xa20000b2  sb          $zero, 0xB2($s0)
    ctx->pc = 0x2b21a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21a8: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x2b21a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b21ac: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x2b21acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21b0: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x2b21b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21b4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2b21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2b21b8: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x2b21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b21bc: 0xc0ac87c  jal         func_2B21F0
    ctx->pc = 0x2B21BCu;
    SET_GPR_U32(ctx, 31, 0x2B21C4u);
    ctx->pc = 0x2B21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21BCu;
    // 0x2b21c0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21F0u, 0x2B21BCu, 0x2B21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21C4u;
label_2b21c4:
    // 0x2b21c4: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b21c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21c8: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2b21c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21cc: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21d0: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b21d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b21d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b21d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b21d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b21d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b21dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b21dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b21e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b21e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b21e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B21E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21E4u;
        // 0x2b21e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B21ECu;
    // 0x2b21ec: 0x0  nop
    ctx->pc = 0x2b21ecu;
    // NOP
    ctx->pc = 0x2b21f0u;
}
