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

// Function: func_0032B758
// Address: 0x32b758 - 0x32b7f0
void func_0032B758_0x32b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B758_0x32b758");
#endif

    switch (ctx->pc) {
        case 0x32b7c4u: goto label_32b7c4;
        default: break;
    }

    ctx->pc = 0x32b758u;

    // 0x32b758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32b75c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x32b75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32b760: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x32b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32b764: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32b764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b768: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x32b76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32b76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b770: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x32B770u;
    {
        const bool branch_taken_0x32b770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B770u;
        // 0x32b774: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b770) {
            ctx->pc = 0x32B7E0u;
            goto label_32b7e0;
        }
    }
    ctx->pc = 0x32B778u;
    // 0x32b778: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x32b778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32b77c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x32b77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x32b780: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x32b780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32b784: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x32b784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x32b788: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32b788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32b78c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32b790: 0x54670014  bnel        $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x32B790u;
    {
        const bool branch_taken_0x32b790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x32b790) {
            ctx->pc = 0x32B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B790u;
            // 0x32b794: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B7E4u;
            goto label_32b7e4;
        }
    }
    ctx->pc = 0x32B798u;
    // 0x32b798: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x32b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x32b79c: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x32b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x32b7a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b7a4: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x32b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x32b7a8: 0x27a80013  addiu       $t0, $sp, 0x13
    ctx->pc = 0x32b7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19));
    // 0x32b7ac: 0x27a90014  addiu       $t1, $sp, 0x14
    ctx->pc = 0x32b7acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x32b7b0: 0x27aa0015  addiu       $t2, $sp, 0x15
    ctx->pc = 0x32b7b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 21));
    // 0x32b7b4: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x32b7b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32b7b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x32b7bc: 0xc0cfa28  jal         func_33E8A0
    ctx->pc = 0x32B7BCu;
    SET_GPR_U32(ctx, 31, 0x32B7C4u);
    ctx->pc = 0x32B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7BCu;
    // 0x32b7c0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E8A0u, 0x32B7BCu, 0x32B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7C4u;
label_32b7c4:
    // 0x32b7c4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B7C4u;
    {
        const bool branch_taken_0x32b7c4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7C4u;
        // 0x32b7c8: 0x87a30010  lh          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7c4) {
            ctx->pc = 0x32B7D8u;
            goto label_32b7d8;
        }
    }
    ctx->pc = 0x32B7CCu;
    // 0x32b7cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32B7CCu;
    {
        const bool branch_taken_0x32b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7CCu;
        // 0x32b7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7cc) {
            ctx->pc = 0x32B7E0u;
            goto label_32b7e0;
        }
    }
    ctx->pc = 0x32B7D4u;
    // 0x32b7d4: 0x0  nop
    ctx->pc = 0x32b7d4u;
    // NOP
label_32b7d8:
    // 0x32b7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b7e0:
    // 0x32b7e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x32b7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32b7e4:
    // 0x32b7e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32b7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7E8u;
        // 0x32b7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B7F0u;
}
