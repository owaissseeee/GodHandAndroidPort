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

// Function: func_002DC2F0
// Address: 0x2dc2f0 - 0x2dc390
void func_002DC2F0_0x2dc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC2F0_0x2dc2f0");
#endif

    switch (ctx->pc) {
        case 0x2dc308u: goto label_2dc308;
        case 0x2dc320u: goto label_2dc320;
        case 0x2dc344u: goto label_2dc344;
        case 0x2dc37cu: goto label_2dc37c;
        default: break;
    }

    ctx->pc = 0x2dc2f0u;

    // 0x2dc2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc2f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc300: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC300u;
    SET_GPR_U32(ctx, 31, 0x2DC308u);
    ctx->pc = 0x2DC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC300u;
    // 0x2dc304: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC300u, 0x2DC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC308u;
label_2dc308:
    // 0x2dc308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc30c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc310: 0x5840001b  blezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC310u;
    {
        const bool branch_taken_0x2dc310 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc310) {
            ctx->pc = 0x2DC314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC310u;
            // 0x2dc314: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC380u;
            goto label_2dc380;
        }
    }
    ctx->pc = 0x2DC318u;
    // 0x2dc318: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC318u;
    SET_GPR_U32(ctx, 31, 0x2DC320u);
    ctx->pc = 0x2DC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC318u;
    // 0x2dc31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC318u, 0x2DC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC320u;
label_2dc320:
    // 0x2dc320: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DC320u;
    {
        const bool branch_taken_0x2dc320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc320) {
            ctx->pc = 0x2DC324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC320u;
            // 0x2dc324: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC380u;
            goto label_2dc380;
        }
    }
    ctx->pc = 0x2DC328u;
    // 0x2dc328: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc32c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc330: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc334: 0x5c600012  bgtzl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC334u;
    {
        const bool branch_taken_0x2dc334 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc334) {
            ctx->pc = 0x2DC338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC334u;
            // 0x2dc338: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC380u;
            goto label_2dc380;
        }
    }
    ctx->pc = 0x2DC33Cu;
    // 0x2dc33c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC33Cu;
    SET_GPR_U32(ctx, 31, 0x2DC344u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC33Cu, 0x2DC344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC344u;
label_2dc344:
    // 0x2dc344: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2DC344u;
    {
        const bool branch_taken_0x2dc344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc344) {
            ctx->pc = 0x2DC348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC344u;
            // 0x2dc348: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC380u;
            goto label_2dc380;
        }
    }
    ctx->pc = 0x2DC34Cu;
    // 0x2dc34c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2dc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dc350: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc354: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc358: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc35c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc360: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x2dc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc364: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2dc364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2dc368: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2dc368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2dc36c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dc36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2dc370: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dc370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc374: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2DC374u;
    SET_GPR_U32(ctx, 31, 0x2DC37Cu);
    ctx->pc = 0x2DC378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC374u;
    // 0x2dc378: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2DC374u, 0x2DC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC37Cu;
label_2dc37c:
    // 0x2dc37c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc380:
    // 0x2dc380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc388: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC388u;
        // 0x2dc38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC390u;
}
