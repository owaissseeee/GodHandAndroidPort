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

// Function: func_00387430
// Address: 0x387430 - 0x3874c0
void func_00387430_0x387430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00387430_0x387430");
#endif

    switch (ctx->pc) {
        case 0x38744cu: goto label_38744c;
        default: break;
    }

    ctx->pc = 0x387430u;

    // 0x387430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387434: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x387434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x387438: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x387438u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x38743c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x387440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387444: 0xc0dde74  jal         func_3779D0
    ctx->pc = 0x387444u;
    SET_GPR_U32(ctx, 31, 0x38744Cu);
    ctx->pc = 0x387448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387444u;
    // 0x387448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3779D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3779D0u, 0x387444u, 0x38744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38744Cu;
label_38744c:
    // 0x38744c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x38744Cu;
    {
        const bool branch_taken_0x38744c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38744Cu;
        // 0x387450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38744c) {
            ctx->pc = 0x3874A8u;
            goto label_3874a8;
        }
    }
    ctx->pc = 0x387454u;
    // 0x387454: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x387454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x387458: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x387458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x38745c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x38745cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x387460: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x387460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x387464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x387464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x387468: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x387468u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38746c: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x38746Cu;
    {
        const bool branch_taken_0x38746c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x387470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38746Cu;
        // 0x387470: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38746c) {
            ctx->pc = 0x3874A4u;
            goto label_3874a4;
        }
    }
    ctx->pc = 0x387474u;
    // 0x387474: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x387474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x387478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38747c: 0x30e60004  andi        $a2, $a3, 0x4
    ctx->pc = 0x38747cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x387480: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x387480u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x387484: 0x30e50010  andi        $a1, $a3, 0x10
    ctx->pc = 0x387484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x387488: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x387488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x38748c: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x38748cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x387490: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x387490u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x387494: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x387494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x387498: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x387498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x38749c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38749Cu;
    {
        const bool branch_taken_0x38749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3874A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38749Cu;
        // 0x3874a0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38749c) {
            ctx->pc = 0x3874A8u;
            goto label_3874a8;
        }
    }
    ctx->pc = 0x3874A4u;
label_3874a4:
    // 0x3874a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3874a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3874a8:
    // 0x3874a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3874a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3874ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3874acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3874b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3874B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3874B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874B0u;
        // 0x3874b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3874B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3874B8u;
    // 0x3874b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3874b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3874bc: 0x0  nop
    ctx->pc = 0x3874bcu;
    // NOP
    ctx->pc = 0x3874c0u;
}
