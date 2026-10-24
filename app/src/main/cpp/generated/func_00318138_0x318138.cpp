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

// Function: func_00318138
// Address: 0x318138 - 0x3181a8
void func_00318138_0x318138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318138_0x318138");
#endif

    switch (ctx->pc) {
        case 0x31816cu: goto label_31816c;
        case 0x318184u: goto label_318184;
        case 0x31818cu: goto label_31818c;
        default: break;
    }

    ctx->pc = 0x318138u;

    // 0x318138: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31813c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31813cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318140: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x318140u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x318144: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x318144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x318148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x318148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31814c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x318150: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x318150u;
    {
        const bool branch_taken_0x318150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318150u;
        // 0x318154: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318150) {
            ctx->pc = 0x318194u;
            goto label_318194;
        }
    }
    ctx->pc = 0x318158u;
    // 0x318158: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x318158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x31815c: 0x24040790  addiu       $a0, $zero, 0x790
    ctx->pc = 0x31815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x318160: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x318160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x318164: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x318164u;
    SET_GPR_U32(ctx, 31, 0x31816Cu);
    ctx->pc = 0x318168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318164u;
    // 0x318168: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x318164u, 0x31816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31816Cu;
label_31816c:
    // 0x31816c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318170: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318170u;
    {
        const bool branch_taken_0x318170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318170u;
        // 0x318174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318170) {
            ctx->pc = 0x318194u;
            goto label_318194;
        }
    }
    ctx->pc = 0x318178u;
    // 0x318178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31817c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31817Cu;
    SET_GPR_U32(ctx, 31, 0x318184u);
    ctx->pc = 0x318180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31817Cu;
    // 0x318180: 0x24060790  addiu       $a2, $zero, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31817Cu, 0x318184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318184u;
label_318184:
    // 0x318184: 0xc072450  jal         func_1C9140
    ctx->pc = 0x318184u;
    SET_GPR_U32(ctx, 31, 0x31818Cu);
    ctx->pc = 0x318188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318184u;
    // 0x318188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9140u, 0x318184u, 0x31818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31818Cu;
label_31818c:
    // 0x31818c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31818Cu;
    {
        const bool branch_taken_0x31818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31818Cu;
        // 0x318190: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31818c) {
            ctx->pc = 0x31819Cu;
            goto label_31819c;
        }
    }
    ctx->pc = 0x318194u;
label_318194:
    // 0x318194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318198: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x318198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31819c:
    // 0x31819c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31819cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3181a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3181A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3181A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181A0u;
        // 0x3181a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3181A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3181A8u;
}
