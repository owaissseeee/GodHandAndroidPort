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

// Function: cOm5a_setCloseFix
// Address: 0x1ad9c8 - 0x1ada70
void cOm5a_setCloseFix_0x1ad9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setCloseFix_0x1ad9c8");
#endif

    switch (ctx->pc) {
        case 0x1ad9c8u: goto label_1ad9c8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9d0u: goto label_1ad9d0;
        case 0x1ad9d4u: goto label_1ad9d4;
        case 0x1ad9d8u: goto label_1ad9d8;
        case 0x1ad9dcu: goto label_1ad9dc;
        case 0x1ad9e0u: goto label_1ad9e0;
        case 0x1ad9e4u: goto label_1ad9e4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ad9f0u: goto label_1ad9f0;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ad9fcu: goto label_1ad9fc;
        case 0x1ada00u: goto label_1ada00;
        case 0x1ada04u: goto label_1ada04;
        case 0x1ada08u: goto label_1ada08;
        case 0x1ada0cu: goto label_1ada0c;
        case 0x1ada10u: goto label_1ada10;
        case 0x1ada14u: goto label_1ada14;
        case 0x1ada18u: goto label_1ada18;
        case 0x1ada1cu: goto label_1ada1c;
        case 0x1ada20u: goto label_1ada20;
        case 0x1ada24u: goto label_1ada24;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada30u: goto label_1ada30;
        case 0x1ada34u: goto label_1ada34;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada3cu: goto label_1ada3c;
        case 0x1ada40u: goto label_1ada40;
        case 0x1ada44u: goto label_1ada44;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada4cu: goto label_1ada4c;
        case 0x1ada50u: goto label_1ada50;
        case 0x1ada54u: goto label_1ada54;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada5cu: goto label_1ada5c;
        case 0x1ada60u: goto label_1ada60;
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada68u: goto label_1ada68;
        case 0x1ada6cu: goto label_1ada6c;
        default: break;
    }

    ctx->pc = 0x1ad9c8u;

label_1ad9c8:
    // 0x1ad9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ad9cc:
    // 0x1ad9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad9d0:
    // 0x1ad9d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ad9d4:
    // 0x1ad9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ad9d8:
    // 0x1ad9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9dc:
    // 0x1ad9dc: 0x9202060d  lbu         $v0, 0x60D($s0)
    ctx->pc = 0x1ad9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1549)));
label_1ad9e0:
    // 0x1ad9e0: 0x54430020  bnel        $v0, $v1, . + 4 + (0x20 << 2)
label_1ad9e4:
    if (ctx->pc == 0x1AD9E4u) {
        ctx->pc = 0x1AD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9E0u;
        // 0x1ad9e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9E8u;
        goto label_1ad9e8;
    }
    ctx->pc = 0x1AD9E0u;
    {
        const bool branch_taken_0x1ad9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ad9e0) {
            ctx->pc = 0x1AD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD9E0u;
            // 0x1ad9e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA64u;
            goto label_1ada64;
        }
    }
    ctx->pc = 0x1AD9E8u;
label_1ad9e8:
    // 0x1ad9e8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1ad9ec:
    // 0x1ad9ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1ad9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1ad9f0:
    // 0x1ad9f0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1ad9f4:
    // 0x1ad9f4: 0x40f809  jalr        $v0
label_1ad9f8:
    if (ctx->pc == 0x1AD9F8u) {
        ctx->pc = 0x1AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F4u;
        // 0x1ad9f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9FCu;
        goto label_1ad9fc;
    }
    ctx->pc = 0x1AD9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD9FCu);
        ctx->pc = 0x1AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F4u;
        // 0x1ad9f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD9F4u, 0x1AD9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD9FCu;
label_1ad9fc:
    // 0x1ad9fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ad9fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ada00:
    // 0x1ada00: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ada00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1ada04:
    // 0x1ada04: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1ada04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1ada08:
    // 0x1ada08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ada0c:
    if (ctx->pc == 0x1ADA0Cu) {
        ctx->pc = 0x1ADA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA08u;
        // 0x1ada0c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA10u;
        goto label_1ada10;
    }
    ctx->pc = 0x1ADA08u;
    {
        const bool branch_taken_0x1ada08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA08u;
        // 0x1ada0c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada08) {
            ctx->pc = 0x1ADA1Cu;
            goto label_1ada1c;
        }
    }
    ctx->pc = 0x1ADA10u;
label_1ada10:
    // 0x1ada10: 0xc6010790  lwc1        $f1, 0x790($s0)
    ctx->pc = 0x1ada10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ada14:
    // 0x1ada14: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ada18:
    if (ctx->pc == 0x1ADA18u) {
        ctx->pc = 0x1ADA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA14u;
        // 0x1ada18: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA1Cu;
        goto label_1ada1c;
    }
    ctx->pc = 0x1ADA14u;
    {
        const bool branch_taken_0x1ada14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA14u;
        // 0x1ada18: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada14) {
            ctx->pc = 0x1ADA24u;
            goto label_1ada24;
        }
    }
    ctx->pc = 0x1ADA1Cu;
label_1ada1c:
    // 0x1ada1c: 0xc6010790  lwc1        $f1, 0x790($s0)
    ctx->pc = 0x1ada1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ada20:
    // 0x1ada20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ada20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ada24:
    // 0x1ada24: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ada24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ada28:
    // 0x1ada28: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1ada2c:
    // 0x1ada2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ada2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ada30:
    // 0x1ada30: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ada34:
    // 0x1ada34: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ada34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ada38:
    // 0x1ada38: 0x60f809  jalr        $v1
label_1ada3c:
    if (ctx->pc == 0x1ADA3Cu) {
        ctx->pc = 0x1ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA38u;
        // 0x1ada3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA40u;
        goto label_1ada40;
    }
    ctx->pc = 0x1ADA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ADA40u);
        ctx->pc = 0x1ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA38u;
        // 0x1ada3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA38u, 0x1ADA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADA40u;
label_1ada40:
    // 0x1ada40: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1ada44:
    // 0x1ada44: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ada44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1ada48:
    // 0x1ada48: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ada48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1ada4c:
    // 0x1ada4c: 0xa200060d  sb          $zero, 0x60D($s0)
    ctx->pc = 0x1ada4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1549), (uint8_t)GPR_U32(ctx, 0));
label_1ada50:
    // 0x1ada50: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1ada50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_1ada54:
    // 0x1ada54: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1ada54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1ada58:
    // 0x1ada58: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ada58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1ada5c:
    // 0x1ada5c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ada5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ada60:
    // 0x1ada60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ada60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ada64:
    // 0x1ada64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ada68:
    // 0x1ada68: 0x3e00008  jr          $ra
label_1ada6c:
    if (ctx->pc == 0x1ADA6Cu) {
        ctx->pc = 0x1ADA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA68u;
        // 0x1ada6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA70u;
        goto label_fallthrough_0x1ada68;
    }
    ctx->pc = 0x1ADA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA68u;
        // 0x1ada6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ada68:
    ctx->pc = 0x1ADA70u;
}
