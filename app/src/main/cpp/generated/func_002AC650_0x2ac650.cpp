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

// Function: func_002AC650
// Address: 0x2ac650 - 0x2ac6e0
void func_002AC650_0x2ac650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC650_0x2ac650");
#endif

    switch (ctx->pc) {
        case 0x2ac680u: goto label_2ac680;
        case 0x2ac69cu: goto label_2ac69c;
        default: break;
    }

    ctx->pc = 0x2ac650u;

    // 0x2ac650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac654: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ac654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ac658: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ac658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ac65c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ac660: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2ac660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac664: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ac664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ac668: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ac668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac66c: 0x59c03  sra         $s3, $a1, 16
    ctx->pc = 0x2ac66cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ac670: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ac670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ac674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac678: 0xc0ab14e  jal         func_2AC538
    ctx->pc = 0x2AC678u;
    SET_GPR_U32(ctx, 31, 0x2AC680u);
    ctx->pc = 0x2AC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC678u;
    // 0x2ac67c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC538u, 0x2AC678u, 0x2AC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC680u;
label_2ac680:
    // 0x2ac680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ac680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac684: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AC684u;
    {
        const bool branch_taken_0x2ac684 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2AC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC684u;
        // 0x2ac688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac684) {
            ctx->pc = 0x2AC6C0u;
            goto label_2ac6c0;
        }
    }
    ctx->pc = 0x2AC68Cu;
    // 0x2ac68c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ac68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ac690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac694: 0xc0ab16c  jal         func_2AC5B0
    ctx->pc = 0x2AC694u;
    SET_GPR_U32(ctx, 31, 0x2AC69Cu);
    ctx->pc = 0x2AC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC694u;
    // 0x2ac698: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5B0u, 0x2AC694u, 0x2AC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC69Cu;
label_2ac69c:
    // 0x2ac69c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2ac69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac6a0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2ac6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac6a4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2ac6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ac6a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2ac6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac6ac: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2ac6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac6b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ac6b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ac6b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac6b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC6B8u;
    {
        const bool branch_taken_0x2ac6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6B8u;
        // 0x2ac6bc: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6b8) {
            ctx->pc = 0x2AC6C4u;
            goto label_2ac6c4;
        }
    }
    ctx->pc = 0x2AC6C0u;
label_2ac6c0:
    // 0x2ac6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ac6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ac6c4:
    // 0x2ac6c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ac6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac6c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ac6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac6d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ac6d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6D8u;
        // 0x2ac6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC6E0u;
}
