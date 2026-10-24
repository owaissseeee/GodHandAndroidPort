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

// Function: SetCustomIDDispOneOrAll_1DD258
// Address: 0x1dd258 - 0x1dd340
void SetCustomIDDispOneOrAll_1DD258_0x1dd258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCustomIDDispOneOrAll_1DD258_0x1dd258");
#endif

    switch (ctx->pc) {
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd32cu: goto label_1dd32c;
        default: break;
    }

    ctx->pc = 0x1dd258u;

    // 0x1dd258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd25c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1dd25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd260: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dd264: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd26c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DD26Cu;
    {
        const bool branch_taken_0x1dd26c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD26Cu;
        // 0x1dd270: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd26c) {
            ctx->pc = 0x1DD2D4u;
            goto label_1dd2d4;
        }
    }
    ctx->pc = 0x1DD274u;
    // 0x1dd274: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1dd278: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD278u;
    {
        const bool branch_taken_0x1dd278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD278u;
        // 0x1dd27c: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd278) {
            ctx->pc = 0x1DD2B0u;
            goto label_1dd2b0;
        }
    }
    ctx->pc = 0x1DD280u;
    // 0x1dd280: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd284: 0x0  nop
    ctx->pc = 0x1dd284u;
    // NOP
label_1dd288:
    // 0x1dd288: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD288u;
    {
        const bool branch_taken_0x1dd288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD288u;
        // 0x1dd28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd288) {
            ctx->pc = 0x1DD298u;
            goto label_1dd298;
        }
    }
    ctx->pc = 0x1DD290u;
    // 0x1dd290: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DD290u;
    SET_GPR_U32(ctx, 31, 0x1DD298u);
    ctx->pc = 0x1DD294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD290u;
    // 0x1dd294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DD290u, 0x1DD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD298u;
label_1dd298:
    // 0x1dd298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd29c: 0x2a02004d  slti        $v0, $s0, 0x4D
    ctx->pc = 0x1dd29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)77) ? 1 : 0);
    // 0x1dd2a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DD2A0u;
    {
        const bool branch_taken_0x1dd2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A0u;
        // 0x1dd2a4: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2a0) {
            ctx->pc = 0x1DD288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd288;
        }
    }
    ctx->pc = 0x1DD2A8u;
    // 0x1dd2a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD2A8u;
    {
        const bool branch_taken_0x1dd2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A8u;
        // 0x1dd2ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2a8) {
            ctx->pc = 0x1DD330u;
            goto label_1dd330;
        }
    }
    ctx->pc = 0x1DD2B0u;
label_1dd2b0:
    // 0x1dd2b0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DD2B0u;
    {
        const bool branch_taken_0x1dd2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B0u;
        // 0x1dd2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2b0) {
            ctx->pc = 0x1DD32Cu;
            goto label_1dd32c;
        }
    }
    ctx->pc = 0x1DD2B8u;
    // 0x1dd2b8: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1dd2bc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1dd2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1dd2c0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd2c4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DD2C4u;
    SET_GPR_U32(ctx, 31, 0x1DD2CCu);
    ctx->pc = 0x1DD2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2C4u;
    // 0x1dd2c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DD2C4u, 0x1DD2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2CCu;
label_1dd2cc:
    // 0x1dd2cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DD2CCu;
    {
        const bool branch_taken_0x1dd2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2CCu;
        // 0x1dd2d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2cc) {
            ctx->pc = 0x1DD330u;
            goto label_1dd330;
        }
    }
    ctx->pc = 0x1DD2D4u;
label_1dd2d4:
    // 0x1dd2d4: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1dd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1dd2d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD2D8u;
    {
        const bool branch_taken_0x1dd2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2D8u;
        // 0x1dd2dc: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2d8) {
            ctx->pc = 0x1DD310u;
            goto label_1dd310;
        }
    }
    ctx->pc = 0x1DD2E0u;
    // 0x1dd2e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2e4: 0x0  nop
    ctx->pc = 0x1dd2e4u;
    // NOP
label_1dd2e8:
    // 0x1dd2e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD2E8u;
    {
        const bool branch_taken_0x1dd2e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E8u;
        // 0x1dd2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2e8) {
            ctx->pc = 0x1DD2F8u;
            goto label_1dd2f8;
        }
    }
    ctx->pc = 0x1DD2F0u;
    // 0x1dd2f0: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DD2F0u;
    SET_GPR_U32(ctx, 31, 0x1DD2F8u);
    ctx->pc = 0x1DD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2F0u;
    // 0x1dd2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DD2F0u, 0x1DD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2F8u;
label_1dd2f8:
    // 0x1dd2f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd2fc: 0x2a02004d  slti        $v0, $s0, 0x4D
    ctx->pc = 0x1dd2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)77) ? 1 : 0);
    // 0x1dd300: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DD300u;
    {
        const bool branch_taken_0x1dd300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD300u;
        // 0x1dd304: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd300) {
            ctx->pc = 0x1DD2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd2e8;
        }
    }
    ctx->pc = 0x1DD308u;
    // 0x1dd308: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD308u;
    {
        const bool branch_taken_0x1dd308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD308u;
        // 0x1dd30c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd308) {
            ctx->pc = 0x1DD330u;
            goto label_1dd330;
        }
    }
    ctx->pc = 0x1DD310u;
label_1dd310:
    // 0x1dd310: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD310u;
    {
        const bool branch_taken_0x1dd310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD310u;
        // 0x1dd314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd310) {
            ctx->pc = 0x1DD32Cu;
            goto label_1dd32c;
        }
    }
    ctx->pc = 0x1DD318u;
    // 0x1dd318: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1dd318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1dd31c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1dd31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1dd320: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1dd320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd324: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DD324u;
    SET_GPR_U32(ctx, 31, 0x1DD32Cu);
    ctx->pc = 0x1DD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD324u;
    // 0x1dd328: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DD324u, 0x1DD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD32Cu;
label_1dd32c:
    // 0x1dd32c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd330:
    // 0x1dd330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd338: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD338u;
        // 0x1dd33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD340u;
}
