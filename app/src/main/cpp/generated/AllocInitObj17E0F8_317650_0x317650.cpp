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

// Function: AllocInitObj17E0F8_317650
// Address: 0x317650 - 0x3176c0
void AllocInitObj17E0F8_317650_0x317650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17E0F8_317650_0x317650");
#endif

    switch (ctx->pc) {
        case 0x317684u: goto label_317684;
        case 0x31769cu: goto label_31769c;
        case 0x3176a4u: goto label_3176a4;
        default: break;
    }

    ctx->pc = 0x317650u;

    // 0x317650: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317654: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317658: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31765c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31765cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317664: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317668: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317668u;
    {
        const bool branch_taken_0x317668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317668u;
        // 0x31766c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317668) {
            ctx->pc = 0x3176ACu;
            goto label_3176ac;
        }
    }
    ctx->pc = 0x317670u;
    // 0x317670: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317674: 0x24040780  addiu       $a0, $zero, 0x780
    ctx->pc = 0x317674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0x317678: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31767c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31767Cu;
    SET_GPR_U32(ctx, 31, 0x317684u);
    ctx->pc = 0x317680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31767Cu;
    // 0x317680: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31767Cu, 0x317684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317684u;
label_317684:
    // 0x317684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317688: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317688u;
    {
        const bool branch_taken_0x317688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317688u;
        // 0x31768c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317688) {
            ctx->pc = 0x3176ACu;
            goto label_3176ac;
        }
    }
    ctx->pc = 0x317690u;
    // 0x317690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317694: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317694u;
    SET_GPR_U32(ctx, 31, 0x31769Cu);
    ctx->pc = 0x317698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317694u;
    // 0x317698: 0x24060780  addiu       $a2, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317694u, 0x31769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31769Cu;
label_31769c:
    // 0x31769c: 0xc05f83e  jal         func_17E0F8
    ctx->pc = 0x31769Cu;
    SET_GPR_U32(ctx, 31, 0x3176A4u);
    ctx->pc = 0x3176A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31769Cu;
    // 0x3176a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0F8u, 0x31769Cu, 0x3176A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176A4u;
label_3176a4:
    // 0x3176a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3176A4u;
    {
        const bool branch_taken_0x3176a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3176A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176A4u;
        // 0x3176a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176a4) {
            ctx->pc = 0x3176B4u;
            goto label_3176b4;
        }
    }
    ctx->pc = 0x3176ACu;
label_3176ac:
    // 0x3176ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3176acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3176b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3176b4:
    // 0x3176b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3176b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3176b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3176B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3176BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176B8u;
        // 0x3176bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3176B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3176C0u;
}
