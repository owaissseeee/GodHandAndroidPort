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

// Function: func_001467E8
// Address: 0x1467e8 - 0x146878
void func_001467E8_0x1467e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001467E8_0x1467e8");
#endif

    switch (ctx->pc) {
        case 0x146810u: goto label_146810;
        case 0x146824u: goto label_146824;
        case 0x146828u: goto label_146828;
        case 0x146830u: goto label_146830;
        case 0x14685cu: goto label_14685c;
        default: break;
    }

    ctx->pc = 0x1467e8u;

    // 0x1467e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1467e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1467ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1467f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1467f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1467f4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1467f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1467f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1467fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x146800: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x146800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x146804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146808: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x146808u;
    SET_GPR_U32(ctx, 31, 0x146810u);
    ctx->pc = 0x14680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146808u;
    // 0x14680c: 0x26320090  addiu       $s2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x146808u, 0x146810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146810u;
label_146810:
    // 0x146810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146814: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x146818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14681c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x14681Cu;
    SET_GPR_U32(ctx, 31, 0x146824u);
    ctx->pc = 0x146820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14681Cu;
    // 0x146820: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x14681Cu, 0x146824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146824u;
label_146824:
    // 0x146824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146828:
    // 0x146828: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x146828u;
    SET_GPR_U32(ctx, 31, 0x146830u);
    ctx->pc = 0x14682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146828u;
    // 0x14682c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x146828u, 0x146830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146830u;
label_146830:
    // 0x146830: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x146834: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146838: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x14683c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x14683cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x146840: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146844: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x146844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146848: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x146848u;
    {
        const bool branch_taken_0x146848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146848u;
        // 0x14684c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146848) {
            ctx->pc = 0x146828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146828;
        }
    }
    ctx->pc = 0x146850u;
    // 0x146850: 0xa6200100  sh          $zero, 0x100($s1)
    ctx->pc = 0x146850u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x146854: 0xc051a2c  jal         func_1468B0
    ctx->pc = 0x146854u;
    SET_GPR_U32(ctx, 31, 0x14685Cu);
    ctx->pc = 0x146858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146854u;
    // 0x146858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468B0u, 0x146854u, 0x14685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14685Cu;
label_14685c:
    // 0x14685c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14685cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x146860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146864: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x146864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14686c: 0x3e00008  jr          $ra
    ctx->pc = 0x14686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14686Cu;
        // 0x146870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146874u;
    // 0x146874: 0x0  nop
    ctx->pc = 0x146874u;
    // NOP
    ctx->pc = 0x146878u;
}
