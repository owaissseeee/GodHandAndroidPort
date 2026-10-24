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

// Function: func_0037C420
// Address: 0x37c420 - 0x37c4c0
void func_0037C420_0x37c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C420_0x37c420");
#endif

    switch (ctx->pc) {
        case 0x37c448u: goto label_37c448;
        case 0x37c48cu: goto label_37c48c;
        default: break;
    }

    ctx->pc = 0x37c420u;

    // 0x37c420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c424: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c428: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37c428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37c42c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37c430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c434: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37c434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37c438: 0x2451c8c0  addiu       $s1, $v0, -0x3740
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37c43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c444: 0x0  nop
    ctx->pc = 0x37c444u;
    // NOP
label_37c448:
    // 0x37c448: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37c448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37c44c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x37C44Cu;
    {
        const bool branch_taken_0x37c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c44c) {
            ctx->pc = 0x37C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C44Cu;
            // 0x37c450: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C498u;
            goto label_37c498;
        }
    }
    ctx->pc = 0x37C454u;
    // 0x37c454: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x37c454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x37c458: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x37c458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x37c45c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37c45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x37c460: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x37C460u;
    {
        const bool branch_taken_0x37c460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c460) {
            ctx->pc = 0x37C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C460u;
            // 0x37c464: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C498u;
            goto label_37c498;
        }
    }
    ctx->pc = 0x37C468u;
    // 0x37c468: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x37c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c46c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C46Cu;
    {
        const bool branch_taken_0x37c46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c46c) {
            ctx->pc = 0x37C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C46Cu;
            // 0x37c470: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C484u;
            goto label_37c484;
        }
    }
    ctx->pc = 0x37C474u;
    // 0x37c474: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37c478: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C478u;
    {
        const bool branch_taken_0x37c478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c478) {
            ctx->pc = 0x37C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C478u;
            // 0x37c47c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C498u;
            goto label_37c498;
        }
    }
    ctx->pc = 0x37C480u;
    // 0x37c480: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x37c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37c484:
    // 0x37c484: 0xc0df62e  jal         func_37D8B8
    ctx->pc = 0x37C484u;
    SET_GPR_U32(ctx, 31, 0x37C48Cu);
    ctx->pc = 0x37C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C484u;
    // 0x37c488: 0x86050010  lh          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8B8u, 0x37C484u, 0x37C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C48Cu;
label_37c48c:
    // 0x37c48c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C490u;
    {
        const bool branch_taken_0x37c490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C490u;
        // 0x37c494: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c490) {
            ctx->pc = 0x37C4A4u;
            goto label_37c4a4;
        }
    }
    ctx->pc = 0x37C498u;
label_37c498:
    // 0x37c498: 0x2a420033  slti        $v0, $s2, 0x33
    ctx->pc = 0x37c498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x37c49c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x37C49Cu;
    {
        const bool branch_taken_0x37c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C49Cu;
        // 0x37c4a0: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c49c) {
            ctx->pc = 0x37C448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c448;
        }
    }
    ctx->pc = 0x37C4A4u;
label_37c4a4:
    // 0x37c4a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37c4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c4a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c4ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37c4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C4B4u;
        // 0x37c4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C4BCu;
    // 0x37c4bc: 0x0  nop
    ctx->pc = 0x37c4bcu;
    // NOP
    ctx->pc = 0x37c4c0u;
}
