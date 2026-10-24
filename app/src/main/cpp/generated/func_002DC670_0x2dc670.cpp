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

// Function: func_002DC670
// Address: 0x2dc670 - 0x2dc740
void func_002DC670_0x2dc670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC670_0x2dc670");
#endif

    switch (ctx->pc) {
        case 0x2dc68cu: goto label_2dc68c;
        case 0x2dc6a4u: goto label_2dc6a4;
        case 0x2dc6c8u: goto label_2dc6c8;
        case 0x2dc708u: goto label_2dc708;
        case 0x2dc720u: goto label_2dc720;
        default: break;
    }

    ctx->pc = 0x2dc670u;

    // 0x2dc670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc678: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc67c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc684: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC684u;
    SET_GPR_U32(ctx, 31, 0x2DC68Cu);
    ctx->pc = 0x2DC688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC684u;
    // 0x2dc688: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC684u, 0x2DC68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC68Cu;
label_2dc68c:
    // 0x2dc68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc690: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc694: 0x58400024  blezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC694u;
    {
        const bool branch_taken_0x2dc694 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc694) {
            ctx->pc = 0x2DC698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC694u;
            // 0x2dc698: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC728u;
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC69Cu;
    // 0x2dc69c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC69Cu;
    SET_GPR_U32(ctx, 31, 0x2DC6A4u);
    ctx->pc = 0x2DC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC69Cu;
    // 0x2dc6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC69Cu, 0x2DC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6A4u;
label_2dc6a4:
    // 0x2dc6a4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DC6A4u;
    {
        const bool branch_taken_0x2dc6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc6a4) {
            ctx->pc = 0x2DC6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC6A4u;
            // 0x2dc6a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC728u;
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC6ACu;
    // 0x2dc6ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc6b0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc6b4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc6b8: 0x5c60001b  bgtzl       $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC6B8u;
    {
        const bool branch_taken_0x2dc6b8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc6b8) {
            ctx->pc = 0x2DC6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC6B8u;
            // 0x2dc6bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC728u;
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC6C0u;
    // 0x2dc6c0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC6C0u;
    SET_GPR_U32(ctx, 31, 0x2DC6C8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC6C0u, 0x2DC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6C8u;
label_2dc6c8:
    // 0x2dc6c8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DC6C8u;
    {
        const bool branch_taken_0x2dc6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc6c8) {
            ctx->pc = 0x2DC6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC6C8u;
            // 0x2dc6cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC728u;
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC6D0u;
    // 0x2dc6d0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dc6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc6d8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc6dc: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x2dc6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dc6e0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc6e4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc6e8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2dc6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2dc6ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dc6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2dc6f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dc6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dc6f4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2dc6f8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2dc6fc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2dc6fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2dc700: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2DC700u;
    SET_GPR_U32(ctx, 31, 0x2DC708u);
    ctx->pc = 0x2DC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC700u;
    // 0x2dc704: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2DC700u, 0x2DC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC708u;
label_2dc708:
    // 0x2dc708: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dc708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2dc70c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x2dc70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc710: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dc710u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dc714: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2dc714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2dc718: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2DC718u;
    SET_GPR_U32(ctx, 31, 0x2DC720u);
    ctx->pc = 0x2DC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC718u;
    // 0x2dc71c: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2DC718u, 0x2DC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC720u;
label_2dc720:
    // 0x2dc720: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2dc720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2dc724: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc728:
    // 0x2dc728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc730: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2dc730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc734: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC734u;
        // 0x2dc738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC73Cu;
    // 0x2dc73c: 0x0  nop
    ctx->pc = 0x2dc73cu;
    // NOP
    ctx->pc = 0x2dc740u;
}
