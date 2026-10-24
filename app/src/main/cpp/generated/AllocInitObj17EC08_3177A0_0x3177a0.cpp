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

// Function: AllocInitObj17EC08_3177A0
// Address: 0x3177a0 - 0x317810
void AllocInitObj17EC08_3177A0_0x3177a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17EC08_3177A0_0x3177a0");
#endif

    switch (ctx->pc) {
        case 0x3177d4u: goto label_3177d4;
        case 0x3177ecu: goto label_3177ec;
        case 0x3177f4u: goto label_3177f4;
        default: break;
    }

    ctx->pc = 0x3177a0u;

    // 0x3177a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3177a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3177a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3177a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3177a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3177ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3177acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3177b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3177b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3177b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3177b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3177b8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3177B8u;
    {
        const bool branch_taken_0x3177b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3177BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177B8u;
        // 0x3177bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177b8) {
            ctx->pc = 0x3177FCu;
            goto label_3177fc;
        }
    }
    ctx->pc = 0x3177C0u;
    // 0x3177c0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3177c4: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x3177c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x3177c8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3177c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3177cc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3177CCu;
    SET_GPR_U32(ctx, 31, 0x3177D4u);
    ctx->pc = 0x3177D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3177CCu;
    // 0x3177d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3177CCu, 0x3177D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177D4u;
label_3177d4:
    // 0x3177d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3177d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3177D8u;
    {
        const bool branch_taken_0x3177d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177D8u;
        // 0x3177dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177d8) {
            ctx->pc = 0x3177FCu;
            goto label_3177fc;
        }
    }
    ctx->pc = 0x3177E0u;
    // 0x3177e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3177e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3177E4u;
    SET_GPR_U32(ctx, 31, 0x3177ECu);
    ctx->pc = 0x3177E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3177E4u;
    // 0x3177e8: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3177E4u, 0x3177ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177ECu;
label_3177ec:
    // 0x3177ec: 0xc05fb02  jal         func_17EC08
    ctx->pc = 0x3177ECu;
    SET_GPR_U32(ctx, 31, 0x3177F4u);
    ctx->pc = 0x3177F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3177ECu;
    // 0x3177f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC08u, 0x3177ECu, 0x3177F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177F4u;
label_3177f4:
    // 0x3177f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3177F4u;
    {
        const bool branch_taken_0x3177f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177F4u;
        // 0x3177f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177f4) {
            ctx->pc = 0x317804u;
            goto label_317804;
        }
    }
    ctx->pc = 0x3177FCu;
label_3177fc:
    // 0x3177fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3177fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317804:
    // 0x317804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317808: 0x3e00008  jr          $ra
    ctx->pc = 0x317808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317808u;
        // 0x31780c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317810u;
}
