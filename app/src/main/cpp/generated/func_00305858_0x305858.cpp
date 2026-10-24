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

// Function: func_00305858
// Address: 0x305858 - 0x3058d8
void func_00305858_0x305858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305858_0x305858");
#endif

    switch (ctx->pc) {
        case 0x30589cu: goto label_30589c;
        case 0x3058a8u: goto label_3058a8;
        default: break;
    }

    ctx->pc = 0x305858u;

    // 0x305858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30585c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x30585cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x305860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x305864: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x305864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30586c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30586cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305870: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x305870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x305874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x305878: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x305878u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x30587c: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30587Cu;
    {
        const bool branch_taken_0x30587c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x305880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30587Cu;
        // 0x305880: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30587c) {
            ctx->pc = 0x3058C4u;
            goto label_3058c4;
        }
    }
    ctx->pc = 0x305884u;
    // 0x305884: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x305884u;
    {
        const bool branch_taken_0x305884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305884u;
        // 0x305888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305884) {
            ctx->pc = 0x3058C8u;
            goto label_3058c8;
        }
    }
    ctx->pc = 0x30588Cu;
    // 0x30588c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305890: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x305890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x305894: 0xc0c1aec  jal         func_306BB0
    ctx->pc = 0x305894u;
    SET_GPR_U32(ctx, 31, 0x30589Cu);
    ctx->pc = 0x305898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305894u;
    // 0x305898: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306BB0u, 0x305894u, 0x30589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30589Cu;
label_30589c:
    // 0x30589c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3058a0: 0xc0c18aa  jal         func_3062A8
    ctx->pc = 0x3058A0u;
    SET_GPR_U32(ctx, 31, 0x3058A8u);
    ctx->pc = 0x3058A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058A0u;
    // 0x3058a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3062A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3062A8u, 0x3058A0u, 0x3058A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058A8u;
label_3058a8:
    // 0x3058a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3058ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3058acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3058b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3058b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3058b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3058b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3058b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3058b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3058bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3058BCu;
    {
        const bool branch_taken_0x3058bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058BCu;
        // 0x3058c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058bc) {
            ctx->pc = 0x3058C8u;
            goto label_3058c8;
        }
    }
    ctx->pc = 0x3058C4u;
label_3058c4:
    // 0x3058c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3058c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3058c8:
    // 0x3058c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3058c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3058cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3058ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3058d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3058D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058D0u;
        // 0x3058d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3058D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3058D8u;
}
