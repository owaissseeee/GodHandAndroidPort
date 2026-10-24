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

// Function: AllocAndInit6B0_317570
// Address: 0x317570 - 0x3175e0
void AllocAndInit6B0_317570_0x317570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInit6B0_317570_0x317570");
#endif

    switch (ctx->pc) {
        case 0x3175a4u: goto label_3175a4;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c4u: goto label_3175c4;
        default: break;
    }

    ctx->pc = 0x317570u;

    // 0x317570: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317574: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317578: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31757c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317584: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317588: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317588u;
    {
        const bool branch_taken_0x317588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317588u;
        // 0x31758c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317588) {
            ctx->pc = 0x3175CCu;
            goto label_3175cc;
        }
    }
    ctx->pc = 0x317590u;
    // 0x317590: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317594: 0x240406b0  addiu       $a0, $zero, 0x6B0
    ctx->pc = 0x317594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x317598: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31759c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31759Cu;
    SET_GPR_U32(ctx, 31, 0x3175A4u);
    ctx->pc = 0x3175A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31759Cu;
    // 0x3175a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31759Cu, 0x3175A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175A4u;
label_3175a4:
    // 0x3175a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3175a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3175A8u;
    {
        const bool branch_taken_0x3175a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175A8u;
        // 0x3175ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175a8) {
            ctx->pc = 0x3175CCu;
            goto label_3175cc;
        }
    }
    ctx->pc = 0x3175B0u;
    // 0x3175b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3175b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3175B4u;
    SET_GPR_U32(ctx, 31, 0x3175BCu);
    ctx->pc = 0x3175B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175B4u;
    // 0x3175b8: 0x240606b0  addiu       $a2, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3175B4u, 0x3175BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175BCu;
label_3175bc:
    // 0x3175bc: 0xc05f4f6  jal         func_17D3D8
    ctx->pc = 0x3175BCu;
    SET_GPR_U32(ctx, 31, 0x3175C4u);
    ctx->pc = 0x3175C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175BCu;
    // 0x3175c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D3D8u, 0x3175BCu, 0x3175C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175C4u;
label_3175c4:
    // 0x3175c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3175C4u;
    {
        const bool branch_taken_0x3175c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175C4u;
        // 0x3175c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175c4) {
            ctx->pc = 0x3175D4u;
            goto label_3175d4;
        }
    }
    ctx->pc = 0x3175CCu;
label_3175cc:
    // 0x3175cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3175ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3175d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3175d4:
    // 0x3175d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3175d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3175d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3175D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3175DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175D8u;
        // 0x3175dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3175D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3175E0u;
}
