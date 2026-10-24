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

// Function: func_00313030
// Address: 0x313030 - 0x3130e0
void func_00313030_0x313030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00313030_0x313030");
#endif

    switch (ctx->pc) {
        case 0x313068u: goto label_313068;
        case 0x313084u: goto label_313084;
        case 0x31308cu: goto label_31308c;
        case 0x3130a8u: goto label_3130a8;
        default: break;
    }

    ctx->pc = 0x313030u;

    // 0x313030: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313034: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313038: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31303c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31303cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313040: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313048: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31304c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31304Cu;
    {
        const bool branch_taken_0x31304c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31304Cu;
        // 0x313050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31304c) {
            ctx->pc = 0x3130C8u;
            goto label_3130c8;
        }
    }
    ctx->pc = 0x313054u;
    // 0x313054: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313058: 0x240414c0  addiu       $a0, $zero, 0x14C0
    ctx->pc = 0x313058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
    // 0x31305c: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x31305cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313060: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313060u;
    SET_GPR_U32(ctx, 31, 0x313068u);
    ctx->pc = 0x313064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313060u;
    // 0x313064: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313060u, 0x313068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313068u;
label_313068:
    // 0x313068: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31306c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31306Cu;
    {
        const bool branch_taken_0x31306c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31306Cu;
        // 0x313070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31306c) {
            ctx->pc = 0x3130C8u;
            goto label_3130c8;
        }
    }
    ctx->pc = 0x313074u;
    // 0x313074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313078: 0x240614c0  addiu       $a2, $zero, 0x14C0
    ctx->pc = 0x313078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
    // 0x31307c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31307Cu;
    SET_GPR_U32(ctx, 31, 0x313084u);
    ctx->pc = 0x313080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31307Cu;
    // 0x313080: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31307Cu, 0x313084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313084u;
label_313084:
    // 0x313084: 0xc0400a0  jal         func_100280
    ctx->pc = 0x313084u;
    SET_GPR_U32(ctx, 31, 0x31308Cu);
    ctx->pc = 0x313088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313084u;
    // 0x313088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100280u, 0x313084u, 0x31308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31308Cu;
label_31308c:
    // 0x31308c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x31308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x313090: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x313090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313094: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
    // 0x313098: 0x26031460  addiu       $v1, $s0, 0x1460
    ctx->pc = 0x313098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5216));
    // 0x31309c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x31309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x3130a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3130a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3130a4: 0x0  nop
    ctx->pc = 0x3130a4u;
    // NOP
label_3130a8:
    // 0x3130a8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3130a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3130ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3130acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3130b0: 0x0  nop
    ctx->pc = 0x3130b0u;
    // NOP
    // 0x3130b4: 0x0  nop
    ctx->pc = 0x3130b4u;
    // NOP
    // 0x3130b8: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3130B8u;
    {
        const bool branch_taken_0x3130b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3130BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130B8u;
        // 0x3130bc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130b8) {
            ctx->pc = 0x3130A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3130a8;
        }
    }
    ctx->pc = 0x3130C0u;
    // 0x3130c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3130C0u;
    {
        const bool branch_taken_0x3130c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130C0u;
        // 0x3130c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130c0) {
            ctx->pc = 0x3130CCu;
            goto label_3130cc;
        }
    }
    ctx->pc = 0x3130C8u;
label_3130c8:
    // 0x3130c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3130c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3130cc:
    // 0x3130cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3130ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3130d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3130d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3130d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3130d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3130d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3130D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3130DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130D8u;
        // 0x3130dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3130D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3130E0u;
}
