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

// Function: Effect_killByMode
// Address: 0x3062a8 - 0x306330
void Effect_killByMode_0x3062a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Effect_killByMode_0x3062a8");
#endif

    switch (ctx->pc) {
        case 0x3062f4u: goto label_3062f4;
        case 0x306304u: goto label_306304;
        case 0x306314u: goto label_306314;
        case 0x306320u: goto label_306320;
        default: break;
    }

    ctx->pc = 0x3062a8u;

    // 0x3062a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3062ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3062b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3062b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3062b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3062b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3062b8: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3062B8u;
    {
        const bool branch_taken_0x3062b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B8u;
        // 0x3062bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062b8) {
            ctx->pc = 0x3062FCu;
            goto label_3062fc;
        }
    }
    ctx->pc = 0x3062C0u;
    // 0x3062c0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3062c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3062c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3062C4u;
    {
        const bool branch_taken_0x3062c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3062c4) {
            ctx->pc = 0x3062C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062C4u;
            // 0x3062c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062DCu;
            goto label_3062dc;
        }
    }
    ctx->pc = 0x3062CCu;
    // 0x3062cc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3062CCu;
    {
        const bool branch_taken_0x3062cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062CCu;
        // 0x3062d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062cc) {
            ctx->pc = 0x3062ECu;
            goto label_3062ec;
        }
    }
    ctx->pc = 0x3062D4u;
    // 0x3062d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3062D4u;
    {
        const bool branch_taken_0x3062d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062D4u;
        // 0x3062d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062d4) {
            ctx->pc = 0x306324u;
            goto label_306324;
        }
    }
    ctx->pc = 0x3062DCu;
label_3062dc:
    // 0x3062dc: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3062DCu;
    {
        const bool branch_taken_0x3062dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3062dc) {
            ctx->pc = 0x30630Cu;
            goto label_30630c;
        }
    }
    ctx->pc = 0x3062E4u;
    // 0x3062e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3062E4u;
    {
        const bool branch_taken_0x3062e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E4u;
        // 0x3062e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062e4) {
            ctx->pc = 0x306324u;
            goto label_306324;
        }
    }
    ctx->pc = 0x3062ECu;
label_3062ec:
    // 0x3062ec: 0xc0c02ba  jal         func_300AE8
    ctx->pc = 0x3062ECu;
    SET_GPR_U32(ctx, 31, 0x3062F4u);
    ctx->pc = 0x3062F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062ECu;
    // 0x3062f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300AE8u, 0x3062ECu, 0x3062F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062F4u;
label_3062f4:
    // 0x3062f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3062F4u;
    {
        const bool branch_taken_0x3062f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062F4u;
        // 0x3062f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062f4) {
            ctx->pc = 0x306324u;
            goto label_306324;
        }
    }
    ctx->pc = 0x3062FCu;
label_3062fc:
    // 0x3062fc: 0xc0bedb2  jal         func_2FB6C8
    ctx->pc = 0x3062FCu;
    SET_GPR_U32(ctx, 31, 0x306304u);
    ctx->pc = 0x306300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062FCu;
    // 0x306300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB6C8u, 0x3062FCu, 0x306304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306304u;
label_306304:
    // 0x306304: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x306304u;
    {
        const bool branch_taken_0x306304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306304u;
        // 0x306308: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306304) {
            ctx->pc = 0x306324u;
            goto label_306324;
        }
    }
    ctx->pc = 0x30630Cu;
label_30630c:
    // 0x30630c: 0xc0bedb2  jal         func_2FB6C8
    ctx->pc = 0x30630Cu;
    SET_GPR_U32(ctx, 31, 0x306314u);
    ctx->pc = 0x306310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30630Cu;
    // 0x306310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB6C8u, 0x30630Cu, 0x306314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306314u;
label_306314:
    // 0x306314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306318: 0xc0c02ba  jal         func_300AE8
    ctx->pc = 0x306318u;
    SET_GPR_U32(ctx, 31, 0x306320u);
    ctx->pc = 0x30631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306318u;
    // 0x30631c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300AE8u, 0x306318u, 0x306320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306320u;
label_306320:
    // 0x306320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x306320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306324:
    // 0x306324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306328: 0x3e00008  jr          $ra
    ctx->pc = 0x306328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306328u;
        // 0x30632c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306330u;
}
