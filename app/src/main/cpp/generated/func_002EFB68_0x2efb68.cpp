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

// Function: func_002EFB68
// Address: 0x2efb68 - 0x2efc28
void func_002EFB68_0x2efb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFB68_0x2efb68");
#endif

    switch (ctx->pc) {
        case 0x2efb8cu: goto label_2efb8c;
        case 0x2efb9cu: goto label_2efb9c;
        case 0x2efbb4u: goto label_2efbb4;
        case 0x2efbecu: goto label_2efbec;
        case 0x2efbf4u: goto label_2efbf4;
        case 0x2efc10u: goto label_2efc10;
        default: break;
    }

    ctx->pc = 0x2efb68u;

    // 0x2efb68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2efb6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2efb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2efb70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2efb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2efb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2efb78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2efb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2efb7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2efb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2efb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2efb84: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2EFB84u;
    SET_GPR_U32(ctx, 31, 0x2EFB8Cu);
    ctx->pc = 0x2EFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB84u;
    // 0x2efb88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2EFB84u, 0x2EFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB8Cu;
label_2efb8c:
    // 0x2efb8c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2efb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2efb90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2efb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb94: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EFB94u;
    SET_GPR_U32(ctx, 31, 0x2EFB9Cu);
    ctx->pc = 0x2EFB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB94u;
    // 0x2efb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EFB94u, 0x2EFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB9Cu;
label_2efb9c:
    // 0x2efb9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2efb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2efba0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2efba4: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2efba4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2efba8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2efba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbac: 0xc04e11c  jal         func_138470
    ctx->pc = 0x2EFBACu;
    SET_GPR_U32(ctx, 31, 0x2EFBB4u);
    ctx->pc = 0x2EFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBACu;
    // 0x2efbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138470u, 0x2EFBACu, 0x2EFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBB4u;
label_2efbb4:
    // 0x2efbb4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2efbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efbb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2efbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efbbc: 0x0  nop
    ctx->pc = 0x2efbbcu;
    // NOP
    // 0x2efbc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2efbc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2efbc4: 0x0  nop
    ctx->pc = 0x2efbc4u;
    // NOP
    // 0x2efbc8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2EFBC8u;
    {
        const bool branch_taken_0x2efbc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBC8u;
        // 0x2efbcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbc8) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFBD0u;
    // 0x2efbd0: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2efbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2efbd4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x2efbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x2efbd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efbdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2efbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbe4: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2EFBE4u;
    SET_GPR_U32(ctx, 31, 0x2EFBECu);
    ctx->pc = 0x2EFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBE4u;
    // 0x2efbe8: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2EFBE4u, 0x2EFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBECu;
label_2efbec:
    // 0x2efbec: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2EFBECu;
    SET_GPR_U32(ctx, 31, 0x2EFBF4u);
    ctx->pc = 0x2EFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBECu;
    // 0x2efbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2EFBECu, 0x2EFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBF4u;
label_2efbf4:
    // 0x2efbf4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2efbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2efbf8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2efbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2efbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2efc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2efc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2efc08: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2EFC08u;
    SET_GPR_U32(ctx, 31, 0x2EFC10u);
    ctx->pc = 0x2EFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC08u;
    // 0x2efc0c: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2EFC08u, 0x2EFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC10u;
label_2efc10:
    // 0x2efc10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2efc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2efc14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2efc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efc18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2efc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2efc1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2efc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efc20: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC20u;
        // 0x2efc24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFC28u;
}
