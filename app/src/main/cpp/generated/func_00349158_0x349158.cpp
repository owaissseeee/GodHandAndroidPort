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

// Function: func_00349158
// Address: 0x349158 - 0x3491d0
void func_00349158_0x349158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349158_0x349158");
#endif

    switch (ctx->pc) {
        case 0x349198u: goto label_349198;
        case 0x3491a8u: goto label_3491a8;
        case 0x3491b0u: goto label_3491b0;
        case 0x3491b8u: goto label_3491b8;
        default: break;
    }

    ctx->pc = 0x349158u;

    // 0x349158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34915c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349164: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x349168: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x349168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34916c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x34916cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x349170: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x349170u;
    {
        const bool branch_taken_0x349170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349170u;
        // 0x349174: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349170) {
            ctx->pc = 0x3491A8u;
            goto label_3491a8;
        }
    }
    ctx->pc = 0x349178u;
    // 0x349178: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x349178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x34917c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x349180: 0x8c639360  lw          $v1, -0x6CA0($v1)
    ctx->pc = 0x349180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939488)));
    // 0x349184: 0x600008  jr          $v1
    ctx->pc = 0x349184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x349190u: goto label_349190;
            case 0x3491A0u: goto label_3491a0;
            case 0x3491A8u: goto label_3491a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34918Cu;
    // 0x34918c: 0x0  nop
    ctx->pc = 0x34918cu;
    // NOP
label_349190:
    // 0x349190: 0xc0d2356  jal         func_348D58
    ctx->pc = 0x349190u;
    SET_GPR_U32(ctx, 31, 0x349198u);
    ctx->pc = 0x349194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349190u;
    // 0x349194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348D58u, 0x349190u, 0x349198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349198u;
label_349198:
    // 0x349198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349198u;
    {
        const bool branch_taken_0x349198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349198) {
            ctx->pc = 0x3491A8u;
            goto label_3491a8;
        }
    }
    ctx->pc = 0x3491A0u;
label_3491a0:
    // 0x3491a0: 0xc0d242c  jal         func_3490B0
    ctx->pc = 0x3491A0u;
    SET_GPR_U32(ctx, 31, 0x3491A8u);
    ctx->pc = 0x3491A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491A0u;
    // 0x3491a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490B0u, 0x3491A0u, 0x3491A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491A8u;
label_3491a8:
    // 0x3491a8: 0xc0d2474  jal         func_3491D0
    ctx->pc = 0x3491A8u;
    SET_GPR_U32(ctx, 31, 0x3491B0u);
    ctx->pc = 0x3491ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491A8u;
    // 0x3491ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3491D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3491D0u, 0x3491A8u, 0x3491B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491B0u;
label_3491b0:
    // 0x3491b0: 0xc0d19bc  jal         func_3466F0
    ctx->pc = 0x3491B0u;
    SET_GPR_U32(ctx, 31, 0x3491B8u);
    ctx->pc = 0x3491B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491B0u;
    // 0x3491b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466F0u, 0x3491B0u, 0x3491B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491B8u;
label_3491b8:
    // 0x3491b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3491b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3491bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3491c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3491c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3491c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3491C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491C4u;
        // 0x3491c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3491C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3491CCu;
    // 0x3491cc: 0x0  nop
    ctx->pc = 0x3491ccu;
    // NOP
    ctx->pc = 0x3491d0u;
}
