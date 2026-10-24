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

// Function: espSys_getEffT32Addr
// Address: 0x3060b0 - 0x306140
void espSys_getEffT32Addr_0x3060b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("espSys_getEffT32Addr_0x3060b0");
#endif

    switch (ctx->pc) {
        case 0x3060d8u: goto label_3060d8;
        case 0x3060e8u: goto label_3060e8;
        default: break;
    }

    ctx->pc = 0x3060b0u;

    // 0x3060b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3060b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3060b4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3060b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3060b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3060bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3060bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3060c0: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3060C0u;
    {
        const bool branch_taken_0x3060c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3060C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C0u;
        // 0x3060c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060c0) {
            ctx->pc = 0x3060E0u;
            goto label_3060e0;
        }
    }
    ctx->pc = 0x3060C8u;
    // 0x3060c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3060cc: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x3060ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x3060d0: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x3060D0u;
    SET_GPR_U32(ctx, 31, 0x3060D8u);
    ctx->pc = 0x3060D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060D0u;
    // 0x3060d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x3060D0u, 0x3060D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060D8u;
label_3060d8:
    // 0x3060d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3060D8u;
    {
        const bool branch_taken_0x3060d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D8u;
        // 0x3060dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d8) {
            ctx->pc = 0x306128u;
            goto label_306128;
        }
    }
    ctx->pc = 0x3060E0u;
label_3060e0:
    // 0x3060e0: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x3060E0u;
    SET_GPR_U32(ctx, 31, 0x3060E8u);
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x3060E0u, 0x3060E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060E8u;
label_3060e8:
    // 0x3060e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3060E8u;
    {
        const bool branch_taken_0x3060e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3060e8) {
            ctx->pc = 0x3060ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3060E8u;
            // 0x3060ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306124u;
            goto label_306124;
        }
    }
    ctx->pc = 0x3060F0u;
    // 0x3060f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3060f4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3060F4u;
    {
        const bool branch_taken_0x3060f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060F4u;
        // 0x3060f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060f4) {
            ctx->pc = 0x306124u;
            goto label_306124;
        }
    }
    ctx->pc = 0x3060FCu;
    // 0x3060fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x306100: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x306100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x306104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306104u;
    {
        const bool branch_taken_0x306104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306104u;
        // 0x306108: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306104) {
            ctx->pc = 0x306114u;
            goto label_306114;
        }
    }
    ctx->pc = 0x30610Cu;
    // 0x30610c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30610Cu;
    {
        const bool branch_taken_0x30610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30610Cu;
        // 0x306110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30610c) {
            ctx->pc = 0x306124u;
            goto label_306124;
        }
    }
    ctx->pc = 0x306114u;
label_306114:
    // 0x306114: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x306114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x306118: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30611c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306120: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x306120u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_306124:
    // 0x306124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x306124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306128:
    // 0x306128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30612c: 0x3e00008  jr          $ra
    ctx->pc = 0x30612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30612Cu;
        // 0x306130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306134u;
    // 0x306134: 0x0  nop
    ctx->pc = 0x306134u;
    // NOP
    // 0x306138: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30613c: 0x0  nop
    ctx->pc = 0x30613cu;
    // NOP
    ctx->pc = 0x306140u;
}
