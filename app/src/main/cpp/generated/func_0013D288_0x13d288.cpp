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

// Function: func_0013D288
// Address: 0x13d288 - 0x13d338
void func_0013D288_0x13d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D288_0x13d288");
#endif

    switch (ctx->pc) {
        case 0x13d2d8u: goto label_13d2d8;
        case 0x13d2f8u: goto label_13d2f8;
        case 0x13d320u: goto label_13d320;
        default: break;
    }

    ctx->pc = 0x13d288u;

    // 0x13d288: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x13d288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x13d28c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d290: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x13d290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x13d294: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x13d294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x13d298: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d29c: 0x24457a84  addiu       $a1, $v0, 0x7A84
    ctx->pc = 0x13d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x13d2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d2a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d2a8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x13d2a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13d2ac: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13D2ACu;
    {
        const bool branch_taken_0x13d2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2ACu;
        // 0x13d2b0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2ac) {
            ctx->pc = 0x13D320u;
            goto label_13d320;
        }
    }
    ctx->pc = 0x13D2B4u;
    // 0x13d2b4: 0x94a3ffcc  lhu         $v1, -0x34($a1)
    ctx->pc = 0x13d2b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967244)));
    // 0x13d2b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13d2bc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13D2BCu;
    {
        const bool branch_taken_0x13d2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2BCu;
        // 0x13d2c0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2bc) {
            ctx->pc = 0x13D320u;
            goto label_13d320;
        }
    }
    ctx->pc = 0x13D2C4u;
    // 0x13d2c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13d2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d2c8: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x13d2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x13d2cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13d2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13d2d0: 0xc0b153a  jal         func_2C54E8
    ctx->pc = 0x13D2D0u;
    SET_GPR_U32(ctx, 31, 0x13D2D8u);
    ctx->pc = 0x13D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2D0u;
    // 0x13d2d4: 0x8e042fb0  lw          $a0, 0x2FB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54E8u, 0x13D2D0u, 0x13D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2D8u;
label_13d2d8:
    // 0x13d2d8: 0x8e042fb0  lw          $a0, 0x2FB0($s0)
    ctx->pc = 0x13d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    // 0x13d2dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d2dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d2e0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13d2e4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x13d2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13d2e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x13d2e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x13d2ec: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x13d2ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x13d2f0: 0xc0b1964  jal         func_2C6590
    ctx->pc = 0x13D2F0u;
    SET_GPR_U32(ctx, 31, 0x13D2F8u);
    ctx->pc = 0x13D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2F0u;
    // 0x13d2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6590u, 0x13D2F0u, 0x13D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2F8u;
label_13d2f8:
    // 0x13d2f8: 0x8e042fb0  lw          $a0, 0x2FB0($s0)
    ctx->pc = 0x13d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    // 0x13d2fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d2fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d300: 0x3c0143de  lui         $at, 0x43DE
    ctx->pc = 0x13d300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17374 << 16));
    // 0x13d304: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x13d304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x13d308: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13d308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13d30c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x13d30cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x13d310: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x13d314: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x13d314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x13d318: 0xc0b1964  jal         func_2C6590
    ctx->pc = 0x13D318u;
    SET_GPR_U32(ctx, 31, 0x13D320u);
    ctx->pc = 0x13D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D318u;
    // 0x13d31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6590u, 0x13D318u, 0x13D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D320u;
label_13d320:
    // 0x13d320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d328: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x13d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d32c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x13d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d330: 0x3e00008  jr          $ra
    ctx->pc = 0x13D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D330u;
        // 0x13d334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D338u;
}
