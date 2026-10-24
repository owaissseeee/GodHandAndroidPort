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

// Function: AllocZeroedAndForwardInit1A25A0_315890
// Address: 0x315890 - 0x315900
void AllocZeroedAndForwardInit1A25A0_315890_0x315890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForwardInit1A25A0_315890_0x315890");
#endif

    switch (ctx->pc) {
        case 0x3158c4u: goto label_3158c4;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e4u: goto label_3158e4;
        default: break;
    }

    ctx->pc = 0x315890u;

    // 0x315890: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315894: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315898: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31589c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31589cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3158a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3158a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3158a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3158a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3158a8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3158A8u;
    {
        const bool branch_taken_0x3158a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A8u;
        // 0x3158ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158a8) {
            ctx->pc = 0x3158ECu;
            goto label_3158ec;
        }
    }
    ctx->pc = 0x3158B0u;
    // 0x3158b0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3158b4: 0x24040da0  addiu       $a0, $zero, 0xDA0
    ctx->pc = 0x3158b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3488));
    // 0x3158b8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3158b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3158bc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3158BCu;
    SET_GPR_U32(ctx, 31, 0x3158C4u);
    ctx->pc = 0x3158C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158BCu;
    // 0x3158c0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3158BCu, 0x3158C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158C4u;
label_3158c4:
    // 0x3158c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3158c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3158c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3158C8u;
    {
        const bool branch_taken_0x3158c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C8u;
        // 0x3158cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158c8) {
            ctx->pc = 0x3158ECu;
            goto label_3158ec;
        }
    }
    ctx->pc = 0x3158D0u;
    // 0x3158d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3158d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3158d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3158D4u;
    SET_GPR_U32(ctx, 31, 0x3158DCu);
    ctx->pc = 0x3158D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158D4u;
    // 0x3158d8: 0x24060da0  addiu       $a2, $zero, 0xDA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3158D4u, 0x3158DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158DCu;
label_3158dc:
    // 0x3158dc: 0xc068968  jal         func_1A25A0
    ctx->pc = 0x3158DCu;
    SET_GPR_U32(ctx, 31, 0x3158E4u);
    ctx->pc = 0x3158E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3158DCu;
    // 0x3158e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25A0u, 0x3158DCu, 0x3158E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158E4u;
label_3158e4:
    // 0x3158e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3158E4u;
    {
        const bool branch_taken_0x3158e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E4u;
        // 0x3158e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158e4) {
            ctx->pc = 0x3158F4u;
            goto label_3158f4;
        }
    }
    ctx->pc = 0x3158ECu;
label_3158ec:
    // 0x3158ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3158ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3158f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3158f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3158f4:
    // 0x3158f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3158f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3158f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3158F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3158FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158F8u;
        // 0x3158fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315900u;
}
