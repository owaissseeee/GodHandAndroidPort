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

// Function: cOmWeapon_resetHold
// Address: 0x1cf340 - 0x1cf3a8
void cOmWeapon_resetHold_0x1cf340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_resetHold_0x1cf340");
#endif

    switch (ctx->pc) {
        case 0x1cf398u: goto label_1cf398;
        default: break;
    }

    ctx->pc = 0x1cf340u;

    // 0x1cf340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf344: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cf344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf34c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1cf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf350: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x1cf350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x1cf354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf35c: 0x8c460250  lw          $a2, 0x250($v0)
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x1cf360: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf364: 0xdc450540  ld          $a1, 0x540($v0)
    ctx->pc = 0x1cf364u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x1cf368: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1cf368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1cf36c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1cf36cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cf370: 0xe440024c  swc1        $f0, 0x24C($v0)
    ctx->pc = 0x1cf370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x1cf374: 0xac460250  sw          $a2, 0x250($v0)
    ctx->pc = 0x1cf374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 6));
    // 0x1cf378: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1cf37c: 0xa04702f5  sb          $a3, 0x2F5($v0)
    ctx->pc = 0x1cf37cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cf380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf384: 0xac400630  sw          $zero, 0x630($v0)
    ctx->pc = 0x1cf384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1584), GPR_U32(ctx, 0));
    // 0x1cf388: 0xa04002f4  sb          $zero, 0x2F4($v0)
    ctx->pc = 0x1cf388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf38c: 0xa04002f6  sb          $zero, 0x2F6($v0)
    ctx->pc = 0x1cf38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf390: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1CF390u;
    SET_GPR_U32(ctx, 31, 0x1CF398u);
    ctx->pc = 0x1CF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF390u;
    // 0x1cf394: 0xa04002f7  sb          $zero, 0x2F7($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1CF390u, 0x1CF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF398u;
label_1cf398:
    // 0x1cf398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF39Cu;
        // 0x1cf3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF3A4u;
    // 0x1cf3a4: 0x0  nop
    ctx->pc = 0x1cf3a4u;
    // NOP
    ctx->pc = 0x1cf3a8u;
}
