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

// Function: func_00331570
// Address: 0x331570 - 0x3315d8
void func_00331570_0x331570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331570_0x331570");
#endif

    switch (ctx->pc) {
        case 0x331584u: goto label_331584;
        case 0x33159cu: goto label_33159c;
        case 0x3315c0u: goto label_3315c0;
        default: break;
    }

    ctx->pc = 0x331570u;

    // 0x331570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x331578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33157c: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x33157Cu;
    SET_GPR_U32(ctx, 31, 0x331584u);
    ctx->pc = 0x331580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33157Cu;
    // 0x331580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x33157Cu, 0x331584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331584u;
label_331584:
    // 0x331584: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33158c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33158Cu;
    {
        const bool branch_taken_0x33158c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x331590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33158Cu;
        // 0x331590: 0x24843eb0  addiu       $a0, $a0, 0x3EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33158c) {
            ctx->pc = 0x3315A8u;
            goto label_3315a8;
        }
    }
    ctx->pc = 0x331594u;
    // 0x331594: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331594u;
    SET_GPR_U32(ctx, 31, 0x33159Cu);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331594u, 0x33159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33159Cu;
label_33159c:
    // 0x33159c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33159Cu;
    {
        const bool branch_taken_0x33159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3315A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33159Cu;
        // 0x3315a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33159c) {
            ctx->pc = 0x3315CCu;
            goto label_3315cc;
        }
    }
    ctx->pc = 0x3315A4u;
    // 0x3315a4: 0x0  nop
    ctx->pc = 0x3315a4u;
    // NOP
label_3315a8:
    // 0x3315a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3315a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3315ac: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3315ACu;
    {
        const bool branch_taken_0x3315ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3315ac) {
            ctx->pc = 0x3315B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3315ACu;
            // 0x3315b0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3315C8u;
            goto label_3315c8;
        }
    }
    ctx->pc = 0x3315B4u;
    // 0x3315b4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3315b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3315b8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3315B8u;
    SET_GPR_U32(ctx, 31, 0x3315C0u);
    ctx->pc = 0x3315BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315B8u;
    // 0x3315bc: 0x24843ed0  addiu       $a0, $a0, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3315B8u, 0x3315C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315C0u;
label_3315c0:
    // 0x3315c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3315C0u;
    {
        const bool branch_taken_0x3315c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3315C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315C0u;
        // 0x3315c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315c0) {
            ctx->pc = 0x3315CCu;
            goto label_3315cc;
        }
    }
    ctx->pc = 0x3315C8u;
label_3315c8:
    // 0x3315c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3315c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3315cc:
    // 0x3315cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3315ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3315d0: 0x80cedae  j           func_33B6B8
    ctx->pc = 0x3315D0u;
    ctx->pc = 0x3315D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315D0u;
    // 0x3315d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x3315D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3315D8u;
}
